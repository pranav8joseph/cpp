#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string>
#include <cmath> 

using namespace std; 

void importNums(vector<double>& nums) {
    // of stream my file for inputs to the file
    ifstream myFile; 

    string line; 
    // "open file" and then convert to string and add for weights and bias and then close file after 
    myFile.open ("C:/Users/prana/OneDrive/Desktop/code/cpp/braindamage/AriChemIaCalcs/IAcalcs.txt"); 

    while(getline (myFile, line)) {
        double append = stod(line); // stod is basically string to double
        nums.push_back(append); 
    }

    myFile.close(); 
}

int exponent; 

double notation(double num, int& exponent) {  // Pass exponent by reference
    exponent = 0;
    bool isNegative = (num < 0);
    double x = (num < 0) ? -num : num;  // Convert to absolute value

    // Scale x to be in range [1, 10)
    while (x < 1.0) {
        x *= 10.0;
        exponent--;
    }

    // Extract first three digits
    int firstDigit = (int)(x * 10);
    int secondDigit = (int)(x * 100) % 10;
    int thirdDigit = (int)(x * 1000) % 10;

    // Round the second digit using the third digit
    if (thirdDigit >= 5) {
        secondDigit++;
        if (secondDigit == 10) { // Carry over rounding
            firstDigit++;
            secondDigit = 0;
        }
    }

    // Convert back to decimal form
    x = firstDigit / 10.0 + secondDigit / 100.0;

    // Restore negative sign if needed
    if (isNegative) {
        x = -x;
    }

    // Force rounding to exactly 2 significant digits
    x = round(x * 10) / 10.0;

    return x;
}

int main () {
    vector<double> nums; 
    importNums(nums);

    cout << "nums:" << endl;
    double sum = 0; 
    for (int i = 0; i < nums.size()+1; i++) {
        if (i > 0 && i % 5 == 0) { // Avoid extra newline at the start
            cout << endl << sum/5 << "*10^-6" << endl << endl;
            sum = 0; 
        }

        if (i == nums.size()) break;

        int exponent = 0;
        double num = nums[i] / 85000;
        double rounded = notation(num, exponent);
        cout << rounded << " * 10^" << exponent << endl;
        sum += rounded; 
    }

    return 0;

}
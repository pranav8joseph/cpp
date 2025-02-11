#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string>

using namespace std; 

void importNums(vector<double>& nums) {
    // of stream my file for inputs to the file
    ifstream myFile; 

    string line; 
    // "open file" and then convert to string and add for weights and bias and then close file after 
    myFile.open ("C:/Users/prana/OneDrive/Desktop/code/cpp/z.txt"); 

    while(getline (myFile, line)) {
        double append = stod(line); // stod is basically string to double
        nums.push_back(append); 
    }

    myFile.close(); 
}

int main () {
    vector<double> nums; 
    importNums(nums);

    cout << "nums: " << endl; 

    for (int i = 0; i < nums.size(); i++) {
        if (i%6 == 0) {cout << endl; }
        double num = nums[i]/330;
        cout << num << endl; 
    }

}
#include <iostream> 

using namespace std; 

int main() {
    int red = 3;
    int green = 4; 
    int blue = 5; 

    int R; 
    int G; 
    int B; 

    cin >> R; 
    cin >> G; 
    cin >> B; 

    int C = 0; 

    C += R*red;
    C += G*green; 
    C += B*blue; 

    cout << C << endl; 
    
}
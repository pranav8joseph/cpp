#include <iostream> 
#include <vector> 

using namespace std;

int main() {

    int D; 
    cin >> D; 
    int Y; 
    int R = 0; 

    int x = 2; 
    int z = 1; 

    cin >> Y; 

    R = R + D; 

    if (Y < R) {
        R = R + Y; 
    } else {
        z = z + 1; 
    }

    while (x != z) {
        cin >> Y; 

        if (Y > R || Y == R) {
            cout << R << endl;
            break; 
            
        } else {
            R = R + Y; 
            continue;
        }
    } 

}
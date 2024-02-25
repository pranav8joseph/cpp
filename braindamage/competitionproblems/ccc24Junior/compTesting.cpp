#include <iostream> 
#include <vector> 
#include <string> 

using namespace std;

int main() {

    int N; 
    cin >> N; 

    vector<int> scores = {}; 

    for (int i = 0; i < N; i++) {
        int x; 
        cin >> x; 
        scores.push_back(x); 
    }

    int t = scores[0]; 

    for (int i = 0; i < scores.size(); i++) {
        int z = 0; 
        if (scores[i] < t) {
            t = scores[i]; 
            z = z + 1;
        } else if (scores[i] > t && z == 2) {
            break; 
        } 
        if (z == 3) {
            break; 
        }
    }

    int p = 0; 

    for (int i = 0; i < scores.size(); i++) {
        if (t == scores[i]) {
            p = p + 1; 
        }
    }

    cout << t << " " << p << endl; 

}
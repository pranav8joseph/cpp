#include <bits/stdc++.h>

using namespace std;

int main() {

    int N; 
    cin >> N; 
    
    vector<int> l = {}; 
    vector<int> scores = {}; 

    for (int i = 0; i < N; i++) {
        int x; 
        cin >> x; 
        scores.push_back(x); 
    }

    int c = 0; 
    vector<int> scores_ordered = {}; 
    vector<int> scores2 = {}; 

    for (int i = 0; i < scores.size(); i++) {
        scores2.push_back(scores[i]); 
    }

    while (!scores.empty()) {
        int g = scores[0]; 
        for (int i = 0; i < scores.size(); i++) {
            if (scores[i] > g) {
                g = scores[i]; 
            }
        }
        scores_ordered.push_back(g); 
        // reorders anything not g to before g (basically at teh beginning). and so 
        // that acts as a condition for where to start erasing. Then scores.end is the end
        // so its basically removing the last value which is now g (max value)
        // remember that remove just moves elements around not removes them
        // thats what erase does 
        scores.erase(remove(scores.begin(), scores.end(), g), scores.end()); 
    }

    int t = scores_ordered[0]; 
    c += 1; 
    for (int i = 1; i < scores_ordered.size(); i++) {
        if (scores_ordered[i] < scores_ordered[i-1]) {
            t = scores_ordered[i]; 
            c += 1; 
        }

        if (c == 3) {
            break; 
        }
    }

    int p = 0; 

    for (int i = 0; i < scores2.size(); i++) {
        if (t == scores2[i]) {
            p += 1; 
        }
    }

    cout << t << ' ' << p << endl; 

}
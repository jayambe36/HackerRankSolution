//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       
        int U, I;
    cin >> U >> I;
    int** F = new int*[U];
    for (int Z = 0; Z < U; ++Z) {
        int k;
        cin >> k;
        F[Z] = new int[k];
        for (int W = 0; W < k; ++W)
            cin >> F[Z][W];
    }
    while (--I >= 0) {
        int S,D;
        cin >> S >> D;
        cout << F[S][D] << endl;
    }

    return 0;
}
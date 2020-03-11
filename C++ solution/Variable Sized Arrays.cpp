
//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, Q;
    cin >> N >> Q;

    int ** arrays = new int*[N];

    for(int i = 0; i < N; ++i)
    {
        int k; cin >> k;
        arrays[i] = new int[k];
        
        for(int j = 0; j < k; ++j)
            cin >> arrays[i][j];
    }

    for(int i = 0; i < Q; ++i)
    {
        int a, b;
        cin >> a >> b;
        
        cout << arrays[a][b] << endl;
    }

    for(int i = 0; i < N; ++i)
        delete [] arrays[i];

    delete [] arrays;
    
    return 0;
}
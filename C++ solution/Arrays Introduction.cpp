//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Z;
    cin >> Z;
    int arr[Z];
    for (int U = 0; U < Z; U++)
        cin >> arr[U];
    for (int U = Z - 1; U >= 0; U--)
        cout << arr[U] << ' ';
    return 0;
}


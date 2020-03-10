
//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n=0,a=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) {
        cout<<v[i];
        cout<<" ";
    }
    return 0;
}

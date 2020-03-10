//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>q;
    int u,i,o,p;
    cin>>u;
    for(i=0;i<u;i++)
        {
        cin>>o;
        q.push_back(o);
    }
    int t;
    cin>>t; 
    q.erase(q.begin()+t-1);
        cin>>o;cin>>p;
        
        q.erase(q.begin()+o-1,q.begin()+p-1);    
    cout<<q.size()<<endl;
    for(i=0;i<q.size();i++)
        cout<<q[i]<<" ";
      
    return 0;
}
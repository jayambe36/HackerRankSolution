
//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
      
      int u,i,o,p=0;
      string s;
      map<string,int> m;
      cin>>u;
      while(u--)
          {
              cin>>i;
             if(i==1)
                 {
                     cin>>s>>o;
                    map<string,int>::iterator it=m.find(s);
                   if(it==m.end()) 
                   m.insert(make_pair(s,o));
                   else
                    m[s]=m[s]+o;
             }
          else if(i==2)
              {
                cin>>s;
                 m.erase(s);
          }
          else if(i==3)
              {
                 cin>>s;
                cout<<m[s]<<endl;
          }
      }
    return 0;
}
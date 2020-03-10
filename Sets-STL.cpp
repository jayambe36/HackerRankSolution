
//SMITPATEL9898
#include <bits/stdc++.h>
using namespace std;


int main() {
   
    set<long long> s;
    set<long long>::iterator it;
    long long u,i;
    int o;
    cin>>u;
    while(u--){
        cin>>o>>i;
        switch(o){
            case 1:s.insert(i);
                    break;
            case 2:s.erase(i);
                    break;
            case 3:it=s.find(i);
                    if(it==s.end())
                        cout<<"No"<<endl;
                    else
                        cout<<"Yes"<<endl;
                    break;
        }
    }
    return 0;
}
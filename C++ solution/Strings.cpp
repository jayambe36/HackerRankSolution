
//SMITPATEL9898
#include <iostream>
#include <string>
using namespace std;

int main() {
  
   string W,E;
   char temp;
    cin>>W;
    cin>>E;
    cout<<W.size();
    cout<<" ";
    cout<<E.size();
    cout<<"\n";
    cout<<W<<E;
    temp=W[0];
    W[0]=E[0];
    E[0]=temp;
    cout<<"\n"<<W<<" "<<E;
    
    
    
    return 0;
}

//SMITPATEL9898
#include <vector>
#include <iostream>
//#include <algorithm>

using namespace std;

int main()
{
   int U;
   cin >> U;
   
   vector<int> V(U);
   
   for(auto & v : V)
      cin >> v;
   
   int I;
   cin >> I;
   
   while(I--)
   {
      int O;
      cin >> O;
      
      auto it = lower_bound(V.begin(), V.end(), O);
      
      if(*it == O)
         cout << "Yes ";
      else
         cout << "No ";
      
      cout << (it - V.begin() + 1) << endl;
   }
   
   
   return 0;
}
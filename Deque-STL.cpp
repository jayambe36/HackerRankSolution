
//SMITPATEL9898
#include<bits/stdc++.h>
using namespace std;
int main(){

  int U;
  cin >> U;
  while(U--){
       int O , P , Q ;
       cin >> O >> P ;

       vector<int> vec;
       for(int z =  0 ; z < O ; ++z ){
          cin >> Q;
          vec.push_back(Q);
       }
        int mx = 0;
        vector<int> nval;
       for(int z =  0 ; z < O ; ++z ){

                  if(z%P == 0)
                   mx = vec[z];
                else
                mx = max( mx , vec[z] );
                nval.push_back(mx);
       }
       mx = 0;
       vector<int> val;
       for(int z = O-1 ; z >= 0 ; --z ){
             if(z%P == (P-1))
               mx = vec[z];
               else
               mx = max( mx , vec[z]);
               val.push_back(mx);

       }
       for(int z = 0 ; z < vec.size()-P+1  ; ++z )
             cout << max( nval[z+P-1] , val[val.size()-z-1]) <<" ";
             cout << endl;
             }
             return 0;

}
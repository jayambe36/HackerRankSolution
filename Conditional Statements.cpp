
//SMITPATEL9898
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int Z;
    cin >> Z;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr[9] = {"one","two","three","four","five","six","seven","eight","nine"};
   
    if(Z >=1 && Z <= 9 ){

        cout << arr[Z-1] << endl;

    }else{
        cout << "Greater than 9" << endl;
    }
    return 0;
}

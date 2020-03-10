      
//SMITPATEL9898
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<string> arr;
    arr.push_back("zero");
    arr.push_back("one");
    arr.push_back("two");
    arr.push_back("three");
    arr.push_back("four");
    arr.push_back("five");
    arr.push_back("six");
    arr.push_back("seven");
    arr.push_back("eight");
    arr.push_back("nine");
    int U, I;
    cin >> U >> I;
    for(int Z = U;Z<=I;Z++){
        if(Z > 9){
            if(Z % 2 == 0) cout << "even" << endl;
            else cout << "odd" << endl;
        }
        else cout << arr[Z] << endl;
    }
    return 0;
}

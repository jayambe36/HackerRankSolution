
//SMITPATEL9898
#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream o(str);
    vector<int> answer;
    char r = ',';
    int n;
    do
    {
        o >> n;
        answer.push_back(n);
    } while(o >> r);
    return answer;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int z = 0; z < integers.size(); z++) {
        cout << integers[z] << "\n";
    }
    
    return 0;
}
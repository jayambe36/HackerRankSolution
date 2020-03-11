
//SMITPATEL9898
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct  Student{
    int ag;
    string first_nam;
    string last_nam;
    int standard;
    
};
int main() {
    Student st;
    
    cin >> st.ag >> st.first_nam >> st.last_nam >> st.standard;
    cout << st.ag << " " << st.first_nam << " " << st.last_nam << " " << st.standard;
    
    return 0;
}
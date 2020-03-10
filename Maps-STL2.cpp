
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    cin >> Q;
    
    map<string,int> student_marks;
    
    while ( Q-- ) {
        int qtype;
        cin >> qtype;
        
        string name;
        cin >> name;
        
        switch ( qtype ) {
            case 1 : {
                
                int marks;
                cin >> marks;
                
                int oldmarks = student_marks[name];
                oldmarks += marks;
                student_marks[name] = oldmarks;
                
                break;
            }
            case 2 : {
                student_marks[name] = 0;
                break;
            }

            case 3 : {
                cout << student_marks[name]  << endl;
                break;
            }

        }
    }
    
    return 0;
}

//SMITPATEL9898
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int U, int I, int O, int P){
    return max(max(U, I), max(O,P));
}
int main() {
    int U, I, O, P;
    scanf("%d %d %d %d", &U, &I, &O, &P);
    int ans = max_of_four(U, I, O, P);
    printf("%d", ans);
    
    return 0;
}
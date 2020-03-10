
//SMITPATEL9898
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
void update(int *U,int *I) {
int O = *U;
    *U = *U + *I;
*I = fabs(O-*I);
    
}

int main() {
    int U, I;
    int *pU = &U, *pI = &I;
    
    scanf("%d %d", &U, &I);
    update(pU, pI);
    printf("%d\n%d", U, I);

    return 0;
}
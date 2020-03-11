//SMITPATEL9898
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char u,i[100],o[100];
    scanf("%c",&u);
    scanf("%s ",i);
    scanf("%[^\n]%*c",o);
    printf("%c\n%s\n%s",u,i,o);
    return 0;
}
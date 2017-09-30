#include <stdio.h>
#include <string.h>
char a[20];
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)if(a[i]=='i'){printf("N");return 0;}
    printf("S");
}

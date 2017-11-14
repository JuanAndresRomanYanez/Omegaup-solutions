#include <stdio.h>
#include <string.h>
char a[1001];
int main(){
    scanf("%s", a);
    for(int i=0,j=strlen(a)-1;i<strlen(a);++i,--j)if(a[i]!=a[j]){printf("No");return 0;}
    printf("Si");
}

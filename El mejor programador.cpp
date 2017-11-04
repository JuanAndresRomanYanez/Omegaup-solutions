#include <stdio.h>
#include <string.h>
char a[5000],b[5000];
long long a1,b1;
int main(){
    scanf("%s%lld%s%lld", a, &a1, b, &b1);
    if(a1>b1)for(int i=0;i<strlen(a);++i)printf("%c", a[i]);
    else for(int i=0;i<strlen(b);++i)printf("%c", b[i]);
}

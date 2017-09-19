#include <stdio.h>
#include <string.h>
char a[1001];
long long sum=0;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i)sum+=(a[i]-48);
    printf(sum%3==0?"SI es divisible":"NO es divisible");
}

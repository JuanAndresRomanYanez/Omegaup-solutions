#include <stdio.h>
#include <string.h>
char v[1000000];
int sum=0;
int main(){
    scanf("%[^\n]", v);
    for(int i=0;i<strlen(v);++i)if(v[i]>47 && v[i]<58)sum+=(v[i]-48);
    printf("%i", sum);
}

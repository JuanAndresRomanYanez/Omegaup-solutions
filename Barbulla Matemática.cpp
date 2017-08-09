#include <stdio.h>
int main(){
    int n,sum=0,res=0;
    scanf("%i", &n);
    for(int i=1;i<=n;++i)sum+=i,res+=sum;
    printf("%i\n", res);
}

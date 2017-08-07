#include <stdio.h>
int res[80],r=1,n;
void mul(){
    int pot,x=0;
    for(int i=0;i<r;i++)pot=2*res[i],res[i]=(pot%10)+x,x=pot/10;
    if(x>0)r++,res[r-1]=x;
}
int main(){
    scanf("%i", &n);
    if(n==0)printf("1");
    else{
        res[r-1] = 2;
        for(int i=2;i<=n;i++)mul();
        for(int i=r-1;i>=0;i--)printf("%i", res[i]);
    }
}

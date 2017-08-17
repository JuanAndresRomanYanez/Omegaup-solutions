#include <stdio.h>
int main(){
    int a,x,b,c,d,res=0,l;
    scanf("%i%i", &a, &b);
    c=-1,d=a%2==0?a+2:a+1;
    l=a%2==0?a/2:a/2+1;
    for(int i=0;i<a;++i){
        scanf("%i", &x);
        if(i<l)c+=2;
        if(i>=l)d-=2;
        if((c==b || d==b) && res==0)res=i+1;
    }
    printf("%i\n", res);
}

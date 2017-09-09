#include <stdio.h>
int t,c,s,p,b,total=0,sum=0;
char a[1];
bool ban=false;
int main(){
    scanf("%i%i%i%i%i", &t, &c, &s, &p, &b);
    for(int i=0;i<c;++i){
        scanf("%s", a);
        if(ban==false){
            if( a[0]=='U' || a[0]=='D'){ if(t-(s+b)>=0)t-=(s+b),total++;else ban=true;}
            if( a[0]=='F' ){ if(t-(p+p)>=0)t-=(p+p),total++;else ban=true;}
        }
    }
    printf("%i", total);
}

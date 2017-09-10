#include <stdio.h>
bool m[8]={0,0,0,0,0,0,0,0};
int n,it=0;
int main(){
    scanf("%i", &n);
    while(n>0){
        if(n%2!=0)m[it]=1;
        n/=2;
        it++;
    }
    for(int i=7;i>=0;--i)printf("%i", m[i]);
}

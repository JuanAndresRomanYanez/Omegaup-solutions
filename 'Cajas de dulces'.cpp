#include <stdio.h>
int l,x,y=0,number,res=0,it=0;
bool ban=false;
int main(){
    scanf("%i%i", &l, &number);
    long long G[l];
    for(int i=0;i<l;++i){
        scanf("%i", &x);
        y+=x;
        G[i]=y;
        if(ban==true)res=res<G[i]-G[it-1]?G[i]-G[it-1]:res,it++;
        if(i==number-1)res=G[i],ban=true,it++;
    }
    printf("%i", res);
}

#include <stdio.h>
#include <math.h>
int a[5];
int it=0,sum=0;
char b[1];
int main(){
    scanf("%c", &b);
    for(int i=0;i<5;++i)scanf("%i", &a[i]);
    if(b[0]=='R'){
            for(int i=0;i<5;++i,it++)if(a[i])sum+=pow(2,it);
    }
    else{
            it=4;
            for(int i=0;i<5;++i,it--)if(a[i])sum+=pow(2,it);
    }
    printf("%i\n", sum);
}

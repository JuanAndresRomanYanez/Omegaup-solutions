#include <stdio.h>
int v[10],cases,number;
int main(){
    for(int i=0;i<10;++i)v[i]=0;
    scanf("%i", &cases);
    while(cases--){
        scanf("%i", &number);
        while(number>0)v[number%10]++,number/=10;
    }
    for(int i=0;i<10;++i)printf("%i-%is\n", v[i], i);
}

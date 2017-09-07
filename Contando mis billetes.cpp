#include <stdio.h>
long long a,cont=0;
int main(){
    scanf("%lld", &a);
        while(a>=1000000)cont++,a-=1000000;
        while(a>=100000)cont++,a-=100000;
        while(a>=10000)cont++,a-=10000;
        while(a>=1000)cont++,a-=1000;
        while(a>=100)cont++,a-=100;
        while(a>=10)cont++,a-=10;
        while(a>=1)cont++,a--;
    printf("%lld", cont);
}

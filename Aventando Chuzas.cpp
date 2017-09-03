#include <stdio.h>
int x,m=-1,sum=0;
int main(){
    for(int i=0;i<7;++i){
        scanf("%i", &x);
        sum+=x;
        if(x>m)m=x;
    }
    printf("%i\n%i", sum/7, m);
}

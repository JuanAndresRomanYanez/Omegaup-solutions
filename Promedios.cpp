#include <stdio.h>
int main(){
    int a,sum=0;
    for(int i=0;i<5;++i){
        scanf("%i", &a);
        sum+=a;
    }
    printf("%i\n", sum/5);
}

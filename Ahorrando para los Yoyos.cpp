#include <stdio.h>
int n,x,cont=0;
int main(){
    scanf("%i", &n);
    for(int i=0;i<7;++i){
            scanf("%i", &x);
            if(x>n)cont++;
    }
    printf("%i\n", cont);
}

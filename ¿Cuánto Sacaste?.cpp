#include <stdio.h>
int a,b;
int main(){
    scanf("%i", &a);
    for(int i=0;i<3;++i){
        scanf("%i", &b);
        if(b==a)printf("Te gano en la siguiente\n");
        else if(b>a)printf("Shh\n");
        else printf("Soy mejor\n");
    }
}

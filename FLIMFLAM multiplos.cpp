#include <stdio.h>
int main(){
    int n;
    scanf("%i", &n);
    for(int i=1;i<=n;++i){
        if(i%3==0 && i%7==0)printf("FLIMFLAM\n");
        else if(i%3==0)printf("FLIM\n");
        else if(i%7==0)printf("FLAM\n");
        else printf("%i\n", i);
    }
}

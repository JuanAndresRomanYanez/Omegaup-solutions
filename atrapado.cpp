#include <stdio.h>
int h,m;
int main(){
    while(scanf("%i%i", &h, &m)!=EOF){
        h=(h*60)+m;
        if( (h>=420 && h<=525) || (h>=615 && h<=690) || (h>=810 && h<=1165) || (h>=1185 && h<=1320) )printf("a salvo\n");
        else printf("atrapado\n");
    }
}

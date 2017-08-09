#include <stdio.h>
int main(){
    bool x[1000000];
    int a,g;
    scanf("%i", &a);
    for(int i=0;i<a*a;++i){
        scanf("%i", &g);
        x[g]=true;
    }
    scanf("%i", &a);
    while(a--){
        scanf("%i", &g);
        if(x[g]==true)printf("SI\n");
        else printf("NO\n");
    }
}

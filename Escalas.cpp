#include <stdio.h>
int n,a=0,d=9;
int main(){
    for(int i=0;i<8;++i){
        scanf("%i", &n);
        if(n>a)a++;
        if(n<d)d--;
    }
    if(a==8)printf("ascending\n");
    else if(d==1)printf("descending\n");
    else printf("mixed\n");
}

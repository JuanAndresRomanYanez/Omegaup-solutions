#include <stdio.h>
int main(){
    long long v[6]={6,28,496,8128,33550336,137438691328};
    long long a;
        scanf("%lld", &a);
        for(int i=0;i<6;++i){
                if(v[i]<a)printf("%lld ", v[i]);
                else break;
        }
        printf("\n");
}

#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j)printf("%i", i+j);
        printf("\n");
    }
}

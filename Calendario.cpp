#include <stdio.h>
int n,m,cont=0;
int main(){
    scanf("%i%i", &n, &m);
    printf("Sun Mon Tue Wed Thr Fri Sat\n");
    for(int i=1;i<m+n;++i){
        if(i<n)printf("    ");
        else {
                cont++;
                if(cont<10)printf("  ");
                else printf(" ");
                printf("%i ", cont);
        }
        if(i%7==0)printf("\n");
    }
}

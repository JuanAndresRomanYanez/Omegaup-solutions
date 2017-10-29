#include <stdio.h>
int n,aux,x;
int main(){
        scanf("%i", &n);
        aux=n/2+1;
        for(int i=0;i<n/2+1;++i,aux--){
            x=aux;
            for(int j=1;j<=(n/2)+1+i;++j){
                if(j<aux)printf(" ");
                else printf("%c", x+96),x++;
            }
            printf("\n");
        }
}

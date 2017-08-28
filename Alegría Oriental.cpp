#include <stdio.h>
int n,x;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        while(x--)printf("w");
        printf("\n");
    }
}

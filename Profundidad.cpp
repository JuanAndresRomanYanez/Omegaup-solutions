#include <stdio.h>
int n,k,x;
int main(){
    scanf("%i%i", &n, &k);
    while(n--){
        scanf("%i", &x);
        if(x>k){printf(":(");return 0;}
    }
    printf(":)");
}

#include <stdio.h>
int a;
int solve(int n){
        int cont=2;
        for(int i=2;i<=a/2;++i)if(a%i==0)cont++;
        return cont;
}
int main(){
    scanf("%i", &a),printf("%i", solve(a));
}

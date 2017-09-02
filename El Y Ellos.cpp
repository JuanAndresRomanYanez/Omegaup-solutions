#include <stdio.h>
int n,m,x;
int main(){
    scanf("%i%i%i", &n, &m, &x);
    printf(m-n>x?"seremos famosos":(m-n==x?"si se puede":"Pancho se la come :v") );
}

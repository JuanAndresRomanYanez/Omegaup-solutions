#include <stdio.h>
int main(){
    int a,x,c=0;
    scanf("%i", &a);
    for(int i=0;i<a;++i){
        scanf("%i", &x);
        c+=x;
    }
    printf("%i\n", c);
    return 0;
}

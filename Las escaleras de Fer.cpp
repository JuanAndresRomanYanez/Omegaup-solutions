#include <stdio.h>
int a,x=0;
int main(){
    scanf("%i", &a),a/=10;
    for(int i=1;i<=a;++i)x+=i,printf("%i ", x);
}

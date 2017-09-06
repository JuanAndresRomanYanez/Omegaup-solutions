#include <stdio.h>
#include <algorithm>
int a,b;
int main(){
    scanf("%i%i", &a, &b);
    int c[a];
    for(int i=0;i<a;++i)scanf("%i", &c[i]);
    std::sort(c,c+a);
    for(int i=0;i<a;++i)if(c[i]==b){printf("%i", i+1);return 0;}
}

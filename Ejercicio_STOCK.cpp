#include <stdio.h>
int main(){
    int a;
    scanf("%i", &a);
    int v[a];
    for(int i=0;i<a;++i)scanf("%i", &v[i]);
    for(int i=a-1;i>=0;--i)printf("%i\n", v[i]);
}

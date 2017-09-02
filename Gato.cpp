#include <stdio.h>
bool a[9];
int main(){
    for(int i=0;i<9;++i)scanf("%i", &a[i]);
    if(a[0]==a[4] && a[8]==a[0] || a[2]==a[4] && a[6]==a[2]){printf(a[4]==0?"0":"1");return 0;}
    for(int i=0;i<9;i+=3)if(a[i]==a[i+1] && a[i]==a[i+2]){printf(a[i]==0?"0":"1");return 0;}
    for(int i=0;i<3;++i)if(a[i]==a[i+3] && a[i]==a[i+6]){printf(a[i]==0?"0":"1");return 0;}
    printf("GATO");
}

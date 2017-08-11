#include <stdio.h>
int main(){
    int a;
    while(scanf("%i", &a)!=EOF)printf(a<4?"0\n":(a>=4 && a<9?"7\n":"10\n"));
}

#include <stdio.h>
#include <string.h>
char a[1000000];
int c=0,v=0;
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i){
            if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')v++;
            else c++;
    }
    printf("%i %i", c, v);
}

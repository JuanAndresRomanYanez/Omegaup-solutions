#include <stdio.h>
#include <string.h>
char a[1000000],b[1000000];
int  main(){
    scanf("%[^\n] %[^\n]", &a, &b);
    for(int i=0;i<strlen(a);++i)if(b[i]=='0')printf("%c", a[i]);
}

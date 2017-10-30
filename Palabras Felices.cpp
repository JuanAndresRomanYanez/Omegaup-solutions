#include <stdio.h>
#include <string.h>
int a[256];
char b[1000000];
int main(){
    scanf("%s", b);
    for(int i=0;i<strlen(b);++i)a[b[i]]=1;
    printf(a['a']==1 && a['e']==1 && a['i']==1  && a['o']==1  && a['u']==1?"que felicidad":"los odio a todos");
}

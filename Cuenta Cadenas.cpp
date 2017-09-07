#include <stdio.h>
#include <string.h>
int cases,cont;
bool abe[256];
char a[1000];
int main(){
    scanf("%i", &cases);
    while(cases--){
        cont=0;
        for(int i=1;i<256;++i)abe[i]=false;
        scanf("%s", a);
        for(int i=0;i<strlen(a);++i)if(abe[a[i]]==false)cont++,abe[a[i]]=true;
        printf("%i\n", cont);
    }
}

#include <stdio.h>
#include <string.h>
int n,aux,v[3]={1,0,0};
char b[1000000];
int main(){
    scanf("%i%s", &n, b);
    for(int i=0;i<strlen(b);++i){
        if(b[i]=='A')aux=v[0],v[0]=v[1],v[1]=aux;
        if(b[i]=='B')aux=v[1],v[1]=v[2],v[2]=aux;
        if(b[i]=='C')aux=v[0],v[0]=v[2],v[2]=aux;
    }
    printf(v[0]?"1":(v[1]?"2":"3"));
}

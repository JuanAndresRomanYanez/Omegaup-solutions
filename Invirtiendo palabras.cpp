#include <stdio.h>
#include <string.h>
char a[1001],b[1001];
int it=0;
int main(){
    scanf("%[^\n]", a);
    for(int i=0;i<strlen(a);++i){
        if(a[i]!=',')b[it]=a[i],it++;
        if(a[i]==',' || i==strlen(a)-1){
                for(int j=it-1;j>=0;--j)printf("%c", b[j]);
                if(a[i]==',')printf("%c", a[i]);
                it=0;
        }
    }
}

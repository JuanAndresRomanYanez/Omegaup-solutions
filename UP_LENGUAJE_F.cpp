#include <stdio.h>
#include <string.h>
char a[1000000];
int main(){
    scanf("%s", a);
    for(int i=0;i<strlen(a);++i){
        printf("%c", a[i]);
        if(a[i]=='a')printf("fa");
        if(a[i]=='e')printf("fe");
        if(a[i]=='i')printf("fi");
        if(a[i]=='o')printf("fo");
        if(a[i]=='u')printf("fu");
    }
}

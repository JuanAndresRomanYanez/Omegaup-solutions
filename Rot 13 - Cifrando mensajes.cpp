#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1000];
int main(){
    scanf("%[^\n]", a);
    for(int i=0;i<strlen(a);++i){
        if(isupper(a[i]))printf("%c", ((a[i]-65+13)%26)+65);
        else if(islower(a[i]))printf("%c", ((a[i]-97+13)%26)+97);
        else printf("%c", a[i]);
    }
}

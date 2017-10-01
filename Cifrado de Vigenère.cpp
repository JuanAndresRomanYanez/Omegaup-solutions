#include <stdio.h>
#include <string.h>
#include <ctype.h>
char a[1000000],b[1000000];
int n,it=0;
int main(){
    scanf("%i%s%s", &n, a, b);
    for(int i=0;i<strlen(a);++i){
        if(isupper(a[i])){
                if(n==1)printf("%c", ( ((a[i]-65+b[it]-65)%26)+65));
                else {
                        if(a[i]-b[it]>=0)printf("%c", ( ( (a[i]-65)-(b[it]-65)%26 )+65 ) );
                        else printf("%c", ((((a[i]-65)-(b[it]-65)+26)%26)+65));
                }
        }
        if(it+1<strlen(b))it++;
        else it=0;
    }
}

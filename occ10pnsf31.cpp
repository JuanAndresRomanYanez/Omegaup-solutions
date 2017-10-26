#include <stdio.h>
char a[2];
int main(){
    scanf("%s", a);
    if(((a[0]=='A' || a[0]=='C' || a[0]=='E' || a[0]=='G') && (a[1]=='2' || a[1]=='4' || a[1]=='6' || a[1]=='8') ) ||
       ( (a[0]=='B' || a[0]=='D' || a[0]=='F' || a[0]=='H')&& (a[1]=='1' || a[1]=='3' || a[1]=='5' || a[1]=='7' ) ) )printf("BLANCA");
    else printf("NEGRA");
}

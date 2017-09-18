#include <stdio.h>
int n;
int main(){
    scanf("%i", &n);
    printf(n==1?"ichi":(n==2?"ni":(n==3?"zan":(n==4?"yong":(n==5?"go":(n==6?"loku":(n==7?"nana":(n==8?"hatchi":(n==9?"qiu":"yu")))))))));
}

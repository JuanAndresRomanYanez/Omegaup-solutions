#include <stdio.h>
char a[1000000];
int n,cont=0;
bool v[26];
int solve(int n){
    while(n--){
        scanf("%s", a);
        v[(char)a[0]-'a']=true;
    }
    for(int i=0;i<26;++i)if(v[i])cont++;
    printf("%i", cont);
}
int main(){
    scanf("%i", &n),solve(n);
}

#include <stdio.h>
bool mar[1000001];
int n,x;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        mar[x]=true;
    }
    scanf("%i", &x);
    printf(mar[x]==true?"Si":"No");
}

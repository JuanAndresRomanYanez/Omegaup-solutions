
#include <stdio.h>
int n,x,y,res=-1;
int main(){
    scanf("%i%i", &n, &x);
    for(int i=0;i<n;++i){
            scanf("%i", &y);
            if(y==x)res=i+1;
    }
    printf("%i", res);
}

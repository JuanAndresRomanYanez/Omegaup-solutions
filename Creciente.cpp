#include <stdio.h>
int n,x,in;
bool t=false,f=false,d=false;
int main(){
    scanf("%i%i", &n, &in);
    for(int i=1;i<n;++i){
            scanf("%i", &x);
            if(x>in)t=true;
            else if(x<in)f=true;
            else d=true;
            in=x;
    }
    if(t==true && f==true)d=true;
    printf(d==true?"desorden":(t==true && f==false?"creciente":"decreciente") );
}

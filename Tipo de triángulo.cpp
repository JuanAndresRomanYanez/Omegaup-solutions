#include <stdio.h>
long long a,b,c,aux;
int main(){
    scanf("%lld%lld%lld", &a, &b, &c);
        if(a>b)aux=a,a=b,b=aux;
        if(b>c)aux=b,b=c,c=aux;
        if(a>b)aux=a,a=b,b=aux;
        if( (a>0) && (b>0) && (c>0) && a+b>c && b+c>a && c+a>b){
            if(a==b && a==c)printf("1 0\n");
            else if(a==b || b==c || a==c)printf("2 0\n");
            else printf("3 0\n");
        }
        else {
            for(long long i=1;;++i){
                    a++,b++,c++;
                    if(a+b>c && b+c>a && c+a>b){printf("0 %lld\n", i);break;}
            }
        }
}

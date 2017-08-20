#include <stdio.h>
int main(){
    int x,uno=0,dos=0;
    for(int i=0;i<10;++i){
        scanf("%i", &x);
        if(i%2==0)uno+=x;
        else dos+=x;
    }
    printf(uno==dos?"EMPATE\n":(uno>dos?"1\n":"2\n") );
}

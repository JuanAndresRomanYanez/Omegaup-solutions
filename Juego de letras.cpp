#include <stdio.h>
int main(){
    int cont=0;
    char a;
    while((a=getchar())!='\n'){
        if(a=='Q' || a=='A' || a=='Z')cont++;
        if(a=='W' || a=='S' || a=='X')cont+=2;
        if(a=='E' || a=='D' || a=='C')cont+=3;
        if(a=='R' || a=='F' || a=='V')cont+=4;
        if(a=='T' || a=='G' || a=='B')cont+=5;
        if(a=='Y' || a=='H' || a=='N')cont+=6;
        if(a=='U' || a=='J' || a=='M')cont+=7;
        if(a=='I' || a=='K' )cont+=8;
        if(a=='O' || a=='L' )cont+=9;
    }
    printf("%i\n", cont);
}

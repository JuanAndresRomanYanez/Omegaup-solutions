#include <stdio.h>
int main(){
    int A,E,I,O,U,a,e,i,o,u,num,esp;
    A=E=I=O=U=a=e=i=o=u=num=esp=0;
    char x;
    while((x=getchar())!='\n'){
        if(x=='A')A++;
        if(x=='E')E++;
        if(x=='I')I++;
        if(x=='O')O++;
        if(x=='U')U++;
        if(x=='a')a++;
        if(x=='e')e++;
        if(x=='i')i++;
        if(x=='o')o++;
        if(x=='u')u++;
        if(x>47 && x<58)num++;
        if(x==' ')esp++;
    }
    printf("A: %i\nE: %i\nI: %i\nO: %i\nU: %i\na: %i\ne: %i\ni: %i\no: %i\nu: %i\nnumeros: %i\nespacios: %i\n", A,E,I,O,U,a,e,i,o,u,num,esp);
}

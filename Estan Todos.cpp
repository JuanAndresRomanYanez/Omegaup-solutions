#include <stdio.h>
int x,c1,c2,c3,c4,c5,conta;
int main(){
    c1=c2=c3=c4=c5=conta=0;
    for(int i=0;i<100;++i){
        scanf("%i", &x);
        if(x>=1 && x<=55){
                if(x>=1 && x<=12)c1++;
                if(x>=13 && x<=30)c2++;
                if(x>=31 && x<=40)c3++;
                if(x>=41 && x<=46)c4++;
                if(x>=47 && x<=55)c5++;
                conta++;
        }
    }
    if(conta==0)printf("No existe algun estudiante dentro de esta aula\n");
    else{
        printf("%i ", conta);
        printf(c1>=c4 && c1>=c3 && c1>=c2 && c1>=c5?"Cobach\n":(c2>=c5 && c2>=c3 && c2>=c4 && c2>=c1?"Cbtis37\n":(c3>=c5 && c3>=c4 && c3>=c2 && c3>=c1?"CecyteEsperanza\n":(c4>=c5 && c4>=c2 && c4>=c3 && c4>=c1?"Cecyte24\n":"Dgeti\n") ) ) );
    }
}

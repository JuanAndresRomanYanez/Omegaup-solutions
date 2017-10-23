#include <stdio.h>
int d,m;
void solve(){
    if(m==3 && d>=21 || m>=4 && m<=5 || m==6 && d<21){
            if(m==3 && d>=21 || m==4 && d<=19)printf("Aries\n");
            else if(m==4 && d>=20 || m==5 && d<=20)printf("Tauro\n");
            else printf("Geminis\n");
            printf("Primavera\n");
    }
    else if(m==6 && d>=21 || m>=7 && m<=8 || m==9 && d<21){
            if(m==6 && d>=21 || m==7 && d<=22)printf("Cancer\n");
            else if(m==7 && d>=23 || m==8 && d<=22)printf("Leo\n");
            else printf("Virgo\n");
            printf("Verano\n");
    }
    else if(m==9 && d>=21 || m>=10 && m<=11 || m==12 && d<21){
                 if(m==9 && (d==21 || d==22))printf("Virgo\n");
            else if(m==9 && d>=23 || m==10 && d<=22)printf("Libra\n");
            else if(m==10 && d>=23 || m==11 && d<=21)printf("Escorpion\n");
            else printf("Sagitario\n");
            printf("Otono\n");
    }
    else {
            if(m==12 && d==21)printf("Sagitario\n");
            else if(m==12 && d>=22 || m==1 && d<=19)printf("Capricornio\n");
            else if(m==1 && d>=20 || m==2 && d<=18)printf("Acuario\n");
            else printf("Piscis\n");
            printf("Invierno\n");
    }
}
int main(){
    scanf("%i%i", &d, &m);
    solve();
}



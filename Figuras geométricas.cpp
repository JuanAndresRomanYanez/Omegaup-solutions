#include <stdio.h>
int n;
int main(){
    scanf("%i", &n),printf(n==1?"PUNTO":(n==2?"LINEA":(n==3?"TRIANGULO":(n==4?"CUADRILATERO":"POLIGONO"))));
}

#include <stdio.h>
int x;
int main(){
    scanf("%i", &x),printf(x==1?"I":(x==2?"II":(x==3?"III":(x==4?"IV":(x==5?"V":(x==6?"VI":(x==7?"VII":(x==8?"VIII":(x==9?"IX":"X")))))))));
}

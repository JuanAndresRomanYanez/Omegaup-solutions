#include <stdio.h>
#include <string.h>
char lol[50];
int c1,c2,c3,c4,c5,c6,c7,c8;
int main(){
    c1=c2=c3=c4=c5=c6=c7=c8=0;
    scanf("%s", lol);
    for(int i=0;i<strlen(lol);++i){
        if(lol[i]=='1' || lol[i]=='Q' || lol[i]=='A' || lol[i]=='Z')c1++;
        if(lol[i]=='2' || lol[i]=='W' || lol[i]=='S' || lol[i]=='X')c2++;
        if(lol[i]=='3' || lol[i]=='E' || lol[i]=='D' || lol[i]=='C')c3++;
        if(lol[i]=='4' || lol[i]=='5' || lol[i]=='R' || lol[i]=='T' || lol[i]=='F' || lol[i]=='G' || lol[i]=='V' || lol[i]=='B')c4++;
        if(lol[i]=='6' || lol[i]=='7' || lol[i]=='Y' || lol[i]=='U' || lol[i]=='H' || lol[i]=='J' || lol[i]=='N' || lol[i]=='M')c5++;
        if(lol[i]=='8' || lol[i]=='I' || lol[i]=='K' || lol[i]==',')c6++;
        if(lol[i]=='9' || lol[i]=='O' || lol[i]=='L' || lol[i]=='.')c7++;
        if(lol[i]=='0' || lol[i]=='P' || lol[i]==';' || lol[i]=='/' || lol[i]=='-' || lol[i]=='[' || lol[i]==']' || lol[i]==39 || lol[i]=='=' )c8++;
    }
    printf("%i\n%i\n%i\n%i\n%i\n%i\n%i\n%i\n", c1, c2, c3, c4, c5, c6, c7, c8);
}

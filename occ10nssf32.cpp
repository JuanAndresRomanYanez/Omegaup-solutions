#include <stdio.h>
#include <string.h>
char a[1000000];
int main(){
    scanf("%[^\n]", a);
    for(int i=0;i<strlen(a);++i){
        if(a[i]>64 && a[i]<68){
            printf("2-");
            if(a[i]=='A')printf("1 ");
            if(a[i]=='B')printf("2 ");
            if(a[i]=='C')printf("3 ");
        }
        else if(a[i]>67 && a[i]<71){
            printf("3-");
            if(a[i]=='D')printf("1 ");
            if(a[i]=='E')printf("2 ");
            if(a[i]=='F')printf("3 ");
        }
        else if(a[i]>70 && a[i]<74){
            printf("4-");
            if(a[i]=='G')printf("1 ");
            if(a[i]=='H')printf("2 ");
            if(a[i]=='I')printf("3 ");
        }
        else if(a[i]>73 && a[i]<77){
            printf("5-");
            if(a[i]=='J')printf("1 ");
            if(a[i]=='K')printf("2 ");
            if(a[i]=='L')printf("3 ");
        }
        else if(a[i]>76 && a[i]<80){
            printf("6-");
            if(a[i]=='M')printf("1 ");
            if(a[i]=='N')printf("2 ");
            if(a[i]=='O')printf("3 ");
        }
        else if(a[i]>79 && a[i]<84){
            printf("7-");
            if(a[i]=='P')printf("1 ");
            if(a[i]=='Q')printf("2 ");
            if(a[i]=='R')printf("3 ");
            if(a[i]=='S')printf("4 ");
        }
        else if(a[i]>83 && a[i]<87){
            printf("8-");
            if(a[i]=='T')printf("1 ");
            if(a[i]=='U')printf("2 ");
            if(a[i]=='V')printf("3 ");
        }
        else if(a[i]>86 && a[i]<91){
            printf("9-");
            if(a[i]=='W')printf("1 ");
            if(a[i]=='X')printf("2 ");
            if(a[i]=='Y')printf("3 ");
            if(a[i]=='Z')printf("4 ");
        }
        else if(a[i]==' ')printf("0-1 ");
    }
}

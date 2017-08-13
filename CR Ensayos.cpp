#include <stdio.h>
#include <iostream>
int main(){
    bool punto=true;
    char x;
    while((x=getchar())!='\n'){
          if(isalpha(x)){
                if(punto==true)x=toupper(x),punto=false;
                else x=tolower(x);
                printf("%c", x);
          }
          else {
                if(x=='.' || x=='!' || x=='?')punto=true;
                printf("%c", x);
          }
    }
    printf("\n");
}

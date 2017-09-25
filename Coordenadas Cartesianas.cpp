#include <stdio.h>
int n,x,y;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i%i", &x, &y);
        if(x>0 && y>0)printf("I\n");
        else if(x<0 && y>0)printf("II\n");
        else if(x<0 && y<0)printf("III\n");
        else printf("IV\n");
    }
}

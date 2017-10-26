#include <stdio.h>
int n,it=0;
char x=97;
int main(){
    scanf("%i", &n);
    for(int i=1;i<=n;++i,x++){
          if(i<=n/2+1)it++;
          else it--;
          for(int j=0;j<it;++j)printf("%c", (char)x);
          printf("\n");
    }
}

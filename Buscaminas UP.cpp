#include <stdio.h>
int n,m,c,x,y;
char v;
int main(){
    scanf("%i%i%i", &n, &m, &c);
    char game[n][m];
    for(int i=0;i<n;++i)for(int j=0;j<m;++j)game[i][j]='0';
    while(c--)scanf("%i%i", &x, &y),game[x][y]='*';
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            v=48;
            if(game[i][j]!='*'){
                    if(i-1>=0 && game[i-1][j]=='*')v++;
                    if(i+1<n && game[i+1][j]=='*')v++;
                    if(j-1>=0 && game[i][j-1]=='*')v++;
                    if(j+1<m && game[i][j+1]=='*')v++;
                    game[i][j]=v;
            }
            printf("%c", game[i][j]);
        }
        printf("\n");
    }
}

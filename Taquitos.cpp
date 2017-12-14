#include <stdio.h>
#include <queue>
int n,x,y,tv=0;
std::queue<int>lol;
int main(){
    scanf("%i", &n);
    while(n--){
        scanf("%i", &x);
        if(x==1){
            scanf("%i", &y);
            lol.push(y);
        }
        if(x==2 && !lol.empty()){
            tv+=lol.front();
            lol.pop();
        }
        if(x==3)printf("%i\n", (int)lol.size());
        if(x==4)printf("%i\n", tv);
    }
}

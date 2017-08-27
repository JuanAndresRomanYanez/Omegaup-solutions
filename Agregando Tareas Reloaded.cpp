#include <stdio.h>
#include <queue>
int n,x,y,cont=0;
int main(){
    scanf("%i%i", &n, &x);
    std::priority_queue<int>lol;
    for(int i=0;i<n;++i){
        scanf("%i", &y);
        lol.push(y);
    }
    while(!lol.empty()){
        if(lol.top()<x){printf("%i\n", cont);return 0;}
        else lol.pop();
        cont++;
    }
    printf("%i\n", cont);
}

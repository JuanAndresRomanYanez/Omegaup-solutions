#include <stdio.h>
#include <queue>
int n,x;
std::priority_queue<int>q;
int main(){
    scanf("%i", &n);
    while(n--)scanf("%i", &x),q.push(x);
    printf("%i ", q.top()),q.pop(),printf("%i", q.top());
}

#include <stdio.h>
#include <vector>
std::vector<long long>V;
long long a;
bool criba[10000000];
void g(){
    for(int i=2;i*i<=10000000;i++)if(criba[i]==false)for(int j=i+i;j<10000000;j+=i)criba[j]=true;
    for(int i=2;i<9832718;i++)if(criba[i]==0)V.push_back(i);
}
int main()
{
    scanf("%lld", &a);
    g();
    printf("%lld", V[a-1]);
}

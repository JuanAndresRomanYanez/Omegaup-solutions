#include <stdio.h>
int main(){
    bool ban=false;
    int a;
    scanf("%i", &a);
    int v[a];
    for(int i=0;i<a;++i){
            scanf("%i", &v[i]);
            if( (i==0 || i==a-1) && v[i]==0)ban=true;
    }
    if(ban==true)printf("NO\n");
    else{
        for(int i=0,j=a-1;i<a/2;++i,--j)if(v[i]!=v[j]){printf("NO\n");return 0;}
        printf("SI\n");
    }
}

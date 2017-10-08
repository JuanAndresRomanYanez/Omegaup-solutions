#include<stdio.h>
int n,a[200000],index,temp,test;
int main(){
    scanf("%i", &test);
        while(test--){
        a[0]=1;
        index=0;
        scanf("%i",&n);
        for(;n>=2;n--){
            temp=0;
            for(int i=0;i<=index;i++)temp=(a[i]*n)+temp,a[i]=temp%10,temp/=10;
            while(temp>0)a[++index]=temp%10,temp/=10;
        }
        for(int i=index;i>=0;i--)printf("%i",a[i]);
        printf("\n");
    }
}

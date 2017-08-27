#include <stdio.h>
int nums[1000001],q,n;
int main(){
    for(int i=4;i<1000001;++i)nums[i]=-1;
    nums[0]=0;nums[1]=1;nums[2]=2;nums[3]=3;
    for(int i=0;i<1000001;++i){
        if(nums[i]==-1 || nums[i]>(nums[i-1]+1) )nums[i]=nums[i-1]+1;
        for(int j=1;j<=i && j*i<1000001;++j)
            if(nums[j*i]==-1 || (nums[i]+1)<nums[j*i])nums[j*i]=nums[i]+1;
    }
    scanf("%i", &q);
    while(q--){
        scanf("%i", &n);
        printf("%i\n", nums[n]);
    }
}

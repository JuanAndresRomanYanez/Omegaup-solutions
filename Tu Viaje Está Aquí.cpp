#include <stdio.h>
#include <string.h>
long long cont=1,conti=1;
char a[72],b[72];
int main(){
    scanf("%s%s", a, b);
    for(int i=0;i<strlen(a);++i)cont=(cont  * ( a[i]-64) )%47;
    for(int i=0;i<strlen(b);++i)conti=(conti* ( b[i]-64) )%47;
    printf(cont==conti?"GO":"STAY");
}

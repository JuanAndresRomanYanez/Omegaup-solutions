#include <stdio.h>
long long a[101][101],n,m;
void calc(){
    //Genero mi triángulo de Pascal
    a[1][1]=a[1][0]=1;
	for (int i=2;i<=100;i++) {
		a[i][0]=1;
		for(int j=1;j<=i;j++)a[i][j]=a[i-1][j]+a[i-1][j-1];
	}
}
int main() {
    calc();
    scanf("%i%i", &n, &m),printf("%lld", a[n][m]);
}

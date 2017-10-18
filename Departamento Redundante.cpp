#include <stdio.h>
#include <map>
#include <vector>
std::vector<int>v;
std::map<int, int>lol;
int n;
int main() {
	while (scanf("%i", &n)!=EOF) {
		if (lol.count(n)==0)lol[n]=1,v.push_back(n);
		else lol[n]++;
	}
	for(int i=0;i<(int)v.size();i++)printf("%i %i\n",v[i], lol[v[i]]);
}

#include<iostream>
#include<cstdio>
using namespace std;
 
int main() {
	int T,n;
	scanf("%d",&T);
	while (T--) {
		scanf("%d",&n);
		if (n&1) printf("BOB\n");
		else printf("ALICE\n");
	}
	return 0;
}   

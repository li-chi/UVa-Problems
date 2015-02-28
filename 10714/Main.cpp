#include <stdio.h>

int max(int x, int y) {
	return x>y ? x : y;
}

int min(int x, int y) {
	return x>y ? y : x;
}

int main() {
	int tc,l,n,m,early,late;
	scanf("%d",&tc);
	while(tc-- > 0) {
		scanf("%d %d",&l,&n);
		early = 0;
		late = 0;
		while(n-- > 0) {
			scanf("%d",&m);
			early = max(min(m,l-m),early);
			late = max(max(m,l-m),late);
		}
		printf("%d %d\n",early, late);
	}
}
#include <stdio.h>

int maxOfThree(int x, int y, int z) {
	if(y>x) x = y;
	if(z>x) x = z;
	return x;
}

int main() {
	int n,m;
	int count0,count1,count2;
	int left;
	while(scanf("%d",&m)!=EOF) {
		count0 = n = m;
		while(n>=3) {
			left = n % 3;
			n = n / 3;
			count0 = count0 + n;
			n = n + left;
		}

		count1 = n = m;
		n = m + 1;
		while(n>=3) {
			left = n % 3;
			n = n / 3;
			count1 = count1 + n;
			n = n + left;
		}
		if (n < 1) count1 = 0;

		count2 = n = m;
		n = m + 2;
		while(n>=3) {
			left = n % 3;
			n = n / 3;
			count2 = count2 + n;
			n = n + left;
		}
		if (n < 2) count2 = 0;

		printf("%d\n",maxOfThree(count1,count2,count0));
	}
}
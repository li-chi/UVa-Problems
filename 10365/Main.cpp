#include <stdio.h>

/* LI Chi */

int main() {
	int tc,n,min,need,temp;
	scanf("%d",&tc);
	while (tc-- > 0) {
		min = 10000;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) {
			if(n%i != 0) continue;
			temp = n/i;
			for(int j=1;j<=temp;j++) {
				if(temp%j != 0) continue;
				need = (i*j+j*temp/j+temp/j*i)*2;
				if(need<min) min = need;
			}
		}
		printf("%d\n",min);
	}
}
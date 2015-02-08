#include <stdio.h>

/* LI Chi */

int main() {
	int tc,a,b,sum;
	scanf("%d",&tc);
	for(int j=1; j<=tc; j++) {
		sum = 0;
		scanf("%d",&a);
		scanf("%d",&b);
		if(a%2 ==0) {
			for(int i=a+1; i<=b; i=i+2) {
				sum += i;
			}
		} else {
			for(int i=a; i<=b; i=i+2) {
				sum += i;
			}
		}
		printf("Case %d: %d\n",j,sum);
	}
}
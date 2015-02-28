#include <stdio.h>

/* LI Chi */

int main() {
	int k,count;
	//std::string str;
	while(scanf("%d",&k)!=EOF) {
		count = 0;
		for(int i=k+1;i<=2*k;i++) {
			if((k*i)%(i-k)==0) {
				count++;
			}
		}
		printf("%d\n",count);
		for(int i=k+1;i<=2*k;i++) {
			if((k*i)%(i-k)==0) {
				printf("1/%d = 1/%d + 1/%d\n",k,(k*i)/(i-k),i);
			}
		}
	}
}
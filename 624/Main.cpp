#include <stdio.h>

/* LI Chi */

int sum;
bool ans[20];
int N;

void allSubset(bool A[], int k, int t, int dur[]) {
	if(k==t) {
		int temp = 0;
		for(int i=0; i<t; i++) {
			if(A[i]) {
				temp += dur[i];
			}
		}
		if(temp > sum && temp <= N) {
			sum = temp;
			for(int i=0; i<t; i++) {
				ans[i] = A[i];
			}
		}
	} else {
		A[k] = true;
		allSubset(A,k+1,t,dur);
		A[k] = false;
		allSubset(A,k+1,t,dur);
	}
}

int main() {
	int t;
	while(scanf("%d",&N) != EOF) {
		sum = 0;
		scanf("%d",&t);
		int dur[t];
		bool select[t];
		for(int i=0; i<t; i++)
			scanf("%d",&dur[i]);
		allSubset(select,0,t,dur);
		for(int i=0; i<t; i++) {
			if(ans[i])
				printf("%d ",dur[i]);
		}
		printf("sum:%d\n",sum);
	}
}


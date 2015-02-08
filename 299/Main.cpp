#include <stdio.h>

/* LI Chi */

int main() {
	int tc,tr,count,temp;
	scanf("%d",&tc);
	while(tc-- > 0) {
		count = 0;
		scanf("%d",&tr);
		int train[tr];
		for(int i=0;i<tr;i++) {
			scanf("%d",&train[i]);
		}

		for(int i=1; i<tr; i++) {
			for(int j=0; j<tr-i; j++) {
				if(train[j]>train[j+1]) {
					temp = train[j];
					train[j] = train[j+1];
					train[j+1] = temp;
					count++;
				}
			}
		}

		printf("Optimal train swapping takes %d swaps.\n", count);
	}
}
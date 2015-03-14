#include <stdio.h>

int main(){
	int count;
	int sum;
	int avg;
	int n;
	int tc;
	int h[110];
	while(scanf("%d",&n)!=EOF) {
		if(n==0)
			break;
		count = 0;
		sum = 0;
		tc++;
		for(int i=0;i<n;i++) {
			scanf("%d",&h[i]);
			sum += h[i];
		}
		avg = sum / n;
		for(int i=0;i<n;i++) {
			if(h[i]>avg)
				count += (h[i] - avg);
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",tc,count);
	}
	return 0;
}
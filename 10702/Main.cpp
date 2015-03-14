#include <stdio.h>
#include <algorithm>

/* LI Chi */

int profit[101][101];
int mem[101][1001];
int c,s,e,t;
bool end[105];

int max(int a, int b) {
	return a>b ? a : b;
}

int getProfit(int pos, int left) {
	if(left == 0)
		return end[pos] ? 0 : -99999;
	if(mem[pos][left] != -1)
		return mem[pos][left];

	mem[pos][left] = -10000;
	for(int i=1; i<=c; i++) 
		mem[pos][left] = max(mem[pos][left],
			profit[pos][i] + getProfit(i,left-1));
	return mem[pos][left];
}

int main() {
	int temp;
	while(scanf("%d %d %d %d",&c,&s,&e,&t)) {
		if(c==0 && s==0 && e==0 && t==0)
			break;
		for(int i=1; i<=c; i++) {
			for(int j=1; j<=c; j++)
				scanf("%d",&profit[i][j]);
		}
		for(int i=1; i<=c; i++)
			end[i] = false;
		for(int i=0; i<e; i++) {
			scanf("%d",&temp);
			end[temp] = true;
		}
		for(int i=1;i<=c;i++) {
			std::fill_n(mem[i],1001,-1);
		}
		printf("%d\n",getProfit(s,t));
	}
}
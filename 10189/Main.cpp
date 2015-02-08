#include <stdio.h>

/* LI Chi */

int main() {
	int m,n,count=1;
	char c;
	scanf("%d %d\n",&m,&n);
	while(m!=0 || n!=0) {
		int grid[m+2][n+2];
		for(int i=0; i<=m; i++)
			for(int j=0; j<=n; j++)
				grid[i][j] = 0;

		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				scanf("%c",&c);
				if(c=='*') {
					grid[i][j] = -1;
					if(grid[i-1][j-1]!=-1)
						grid[i-1][j-1]++;
					if(grid[i-1][j]!=-1)
						grid[i-1][j]++;
					if(grid[i-1][j+1]!=-1)
						grid[i-1][j+1]++;
					if(grid[i][j-1]!=-1)
						grid[i][j-1]++;
					if(grid[i][j+1]!=-1)	
						grid[i][j+1]++;
					if(grid[i+1][j-1]!=-1)
						grid[i+1][j-1]++;
					if(grid[i+1][j]!=-1)
						grid[i+1][j]++;
					if(grid[i+1][j+1]!=-1)
						grid[i+1][j+1]++;
				}			
			}
			scanf("\n");
		}

		printf("Field #%d:\n",count);
		for(int i=1; i<=m; i++) {
			for(int j=1; j<=n; j++) {
				if(grid[i][j]==-1)
					printf("*");
				else
					printf("%d", grid[i][j]);
			}
			printf("\n");
		}
		count++;
		scanf("%d %d\n",&m,&n);
		if(m==0 && n==0) break;
		else printf("\n");
	}
}
#include <stdio.h>

/* LI Chi */
int count;

void print(int *state) {
	if(count<9)
		printf(" %d     ",++count);
	else
		printf("%d     ",++count);

	for(int i=1; i<=8; i++) {
		printf(" %d",state[i]);
	}
	printf("\n");
}

bool isFeasible(int *state, int row) {
	bool can = true;
	for(int i=1; i<row; i++) {
		if(state[row] == state[i])
			return false;
		if((state[row] - row) == (state[i] - i))
			return false;
		if((state[row] + row) == (state[i] + i))
			return false;
	}
	return can;
}

void search(int *state, int row, int skiprow) {
	if(row >= 9) {
		print(state);
	} else {
		if(row == skiprow) {
			if(isFeasible(state,row))
				search(state,row+1,skiprow);
		} else {
			for(int i=1; i<=8; i++) {
				state[row] = i;
				if(isFeasible(state,row))
					search(state,row+1,skiprow);

			}
		}
	}
}

int main() {
	int tc;
	int a,b;
	scanf("%d",&tc);
	while(tc-- > 0) {
		count = 0;
		scanf("\n%d %d",&a, &b);
		int state[9];
		for(int i=0;i<=8;i++)
			state[i] = 0;
		state[b] = a;
		printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n");
		printf("\n");
		search(state,1,b);
		if(tc>0)
			printf("\n");
	}
}
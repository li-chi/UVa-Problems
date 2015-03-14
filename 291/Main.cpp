#include <stdio.h>

/* Li Chi */

int house[6][6] = {
	{-1,-1,-1,-1,-1,-1},
	{-1,-1,0,5,-1,3},
	{-1,0,-1,1,-1,4},
	{-1,5,1,-1,7,2},
	{-1,-1,-1,7,-1,6},
	{-1,3,4,2,6,-1}
};

void allSubset(bool edge[], int seq[], int k) {
	if(k==9) {
		for(int i=0; i<9; i++) {
			printf("%d",seq[i]);
		}
		printf("\n");
	} else {
		for(int i=1; i<=5; i++) {
			seq[k] = i;
			if(house[seq[k-1]][seq[k]] == -1)
				continue;
			if(edge[house[seq[k-1]][seq[k]]])
				continue;
			else {
				edge[house[seq[k-1]][seq[k]]] = true;
				allSubset(edge,seq,k+1);
				edge[house[seq[k-1]][seq[k]]] = false;
			}
		}
	}
}

int main() {
	bool edge[8];
	for(int i=0;i<8;i++)
		edge[i] = false;
	int seq[9];
	seq[0] = 1;
	allSubset(edge,seq,1);
}


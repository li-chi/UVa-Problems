#include <stdio.h>

/* LI Chi */

int main() {
	char *ans[6] = {"BCG","BGC","CBG","CGB","GBC","GCB"};
	int g1,g2,g3,b1,b2,b3,c1,c2,c3;
	int move[6];
	int index, min;
	while (scanf("%d%d%d%d%d%d%d%d%d",
		&g1,&b1,&c1,&g2,&b2,&c2,&g3,&b3,&c3) != EOF) {
		move[0] = b1 + c1 + g2 + b2 + g3 + c3;
		move[1] = b1 + c1 + g2 + c2 + g3 + b3;
		move[2] = g1 + b1 + b2 + c2 + g3 + c3;
		move[3] = g1 + b1 + g2 + c2 + b3 + c3;
		move[4] = g1 + c1 + b2 + c2 + g3 + b3;
		move[5] = g1 + c1 + g2 + b2 + b3 + c3;
		min = move[0];
		index = 0;
		for (int i=1; i<=5; i++) {
			if (move[i] < min) {
				index = i;
				min = move[i];
			}
		}
		printf("%s %d\n", ans[index], min);
	}
}
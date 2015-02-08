#include <stdio.h>

/* LI Chi */

char grid[3][3];

bool findWinner(char c) {
	int count = 0;
	for (int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (grid[i][j] == c)
				count ++;
		}

		if(count == 3)
			return true;

		count = 0;

		for(int j=0; j<3; j++) {
			if (grid[j][i] == c) {
				count++;
			}
		}

		if(count == 3) {
			return true;
		}

		count = 0;
	}

	for (int i=0; i<3; i++) {
		if (grid[i][i] == c)
			count++;
	}

	if(count == 3) {
		return true;
	}

	count = 0;

	for (int i=0; i<3; i++) {
		if (grid[i][2-i] == c) {
			count ++;
		} 
	}

	if(count == 3) {
		return true;
	}

	return false;
}

int main() {
	int num;
	int x,o;
	char c;
	bool is;
	bool wWin, oWin;
	scanf("%d",&num);
	for (int i=0;i<num;i++) {
		is = true;
		scanf("\n");
		x = o = 0;
		for (int j=0; j<3; j++) {
			for (int k=0; k<3; k++) {
				scanf("%c",&c);
				grid[j][k] = c;
				if (c=='X') {
					x++;
				} else if (c=='O') {
					o++;
				}
			}
			scanf("\n");
		}
		wWin = findWinner('X');
		oWin = findWinner('O');

		if(wWin && oWin) {
			is = false;
		} else if (wWin) {
			if (x != o+1) is = false;
		} else if (oWin) {
			if (x != o) is = false;
		} else {
			if (o>x) is = false;
			if (x>o+1) is = false;
		}
		
		if(is) printf("yes\n");
		else printf("no\n");
	}
}
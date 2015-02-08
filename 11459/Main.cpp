#include <stdio.h>

/* LI Chi */

int getPlayer(int p, int a) {
	if(p == a) {
		return 1;
	} else {
		return p+1;
	}
}

int main() {
	int tc;
	scanf("%d",&tc);
	int board[101];
	int bottom, top;
	int dice, player;
	int a,b,c,pos;
	bool finished;
	while(tc-- > 0) {
		scanf("%d %d %d",&a,&b,&c);
		player = 1;
		finished = false;
		int players[a+1];

		for(int i=1; i<=a; i++) {
			players[i] = 1;
		}

		for (int i=0; i<102; i++) {
			board[i] = i;
		}

		while (b-- >0) {
			scanf("%d %d",&bottom, &top);
			board[bottom] = top;
		}

		while (c-- > 0) {
			scanf("%d",&dice);
			if (finished) 
				continue;

			pos = players[player] + dice;
			if(pos >= 100)
				players[player] = 100;

			players[player] = board[pos];
			if (players[player] == 100)
				finished = true;
			
			player = getPlayer(player,a);
		} 

		for(int i=1; i<=a; i++) {
			printf("Position of player %d is %d.\n",i,players[i]);
		}
	}
}
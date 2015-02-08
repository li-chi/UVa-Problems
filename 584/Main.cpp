#include <stdio.h>

/* LI Chi */

int reduce(int n) {
	if (n>0)
		return n-1;
	else
		return 0;
}

int main() {
	char c;
	int total=0,plus=0,score,l,ll,round_;
	bool first;
	scanf("%c",&c);
	while(c!='G') {
		first = true;
		round_ = 1;
		while(c!='\n' && c!='G') {
			if(c==' '){
				scanf("%c",&c);
				continue;
			}

			plus = 1;
			if(l) plus++;
			if(ll) plus++;
			ll = reduce(l);

			if(c=='/') {
				score = 10 - score;
				l = 1;
			} else if (c=='X') {
				score = 10;
				l = 2;
			} else {
				score = c - '0';
				l = 0;
			}

			if (round_>=10) l = 0;
			total = total + score * plus;
			
			if(c=='/' || c=='X') {
				round_++;
				first = true;
			} else {
				if(first) {
					first = false;
				} else {
					first = true;
					round_++;
				}
			}
			scanf("%c",&c);

		}
		printf("%d\n",total);
		scanf("%c",&c);
		total = 0;
	}
}
#include <stdio.h>
#include <ctype.h>

/* LI Chi */
/* Unfinished */

int main() {
	char c;
	int i = 0;
	bool end = true;
	bool has = false;
	while(scanf("%c",&c) != EOF) {
		if(isalpha(c)) {
			if(end) {
				i++;
				end = false;
				continue;
			} else {
				continue;
			}
		} else if (c == '\n') {
			printf("%d\n",i);
			i = 0;
			end = true;
			has = false;
			continue;
			
		} else {
			if(end) {
		
			} else {
				end = true;
			}
		}
	}
	printf("%d\n", i);
}


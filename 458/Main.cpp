#include <stdio.h>

/* LI Chi */

int main() {
	char c;
	while (scanf("%c",&c) != EOF) {
		if (c=='\n') printf("\n");
		else printf("%c",c-7);
	}
}
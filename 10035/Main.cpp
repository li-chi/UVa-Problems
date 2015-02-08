#include <stdio.h>

/* LI Chi */

int main() {
	long a,b,carry,count;
	scanf("%ld %ld",&a,&b);
	while(a!=0 || b!=0) {
		count = carry = 0;
		while(a>0 || b>0) {
			if((a%10)+(b%10)+carry>=10){
				carry = 1;
				count ++;
			} else {
				carry = 0;
			}
			a = a/10;
			b = b/10;
		}
		if(count==0)
			printf("No");
		else 
			printf("%ld",count);
		printf(" carry operation");
		if(count>1)
			printf("s.\n");
		else 
			printf(".\n");
		scanf("%ld %ld",&a,&b);
	}
}
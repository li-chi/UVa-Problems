#include <stdio.h>

/* LI Chi */

int main() {
	int tc;
	scanf("%d\n",&tc);
	int count;
	long long num,num2,temp;
	while(tc-- > 0) {
		scanf("%lld",&num);
		count = 0;
		while(true) {
			count++;
			temp = num;
			num2 = 0;
			while(temp!=0) {
				num2 = num2 * 10 + (temp % 10);
				temp /= 10;
			}
			
			if(num == num2)
				break;
			num = num + num2;
		}
		printf("%d %lld\n",count-1,num);
	}
}
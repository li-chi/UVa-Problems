#include <stdio.h>

long minOfThree(long x, long y, long z) {
	if(y<x) x=y;
	if(z<x) x=z;
	return x;
}

int main() {
	long arr[1500];
	long num2=2;
	long num3=3;
	long num5=5;
	int i2=0;
	int i3=0;
	int i5=0;
	arr[0] = 1;
	for(int i=1;i<1500;i++) {
		
		arr[i] = minOfThree(num2,num3,num5);

		if(num2==arr[i]){
			num2 = 2 * arr[++i2];
		}
		if(num3==arr[i]) {
			num3 = 3 * arr[++i3];
		}
		if(num5==arr[i]) {
			num5 = 5 * arr[++i5];
		}

	}
	printf("The 1500'th ugly number is %ld.\n",arr[1499]);
}
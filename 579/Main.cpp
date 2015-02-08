#include <iostream>
#include <cmath> 
#include <string>
#include <stdlib.h>
#include <stdio.h>

/* LI Chi */

int main()
{	
	int i1,i2;
	float f1,f2,ans;
	scanf("%d:%d",&i1,&i2);
	while(true) {
		if(i1 == 0 && i2 == 0) {
			break;
		}
		f1 = i1*30 + ((float)i2)/2.0;
		f2 = i2 * 6;
		ans = fabs(f1-f2)>180 ? 360-fabs(f1-f2) : fabs(f1-f2);
		printf("%.3f\n",ans);
		scanf("%d:%d",&i1,&i2);
	}
	
}
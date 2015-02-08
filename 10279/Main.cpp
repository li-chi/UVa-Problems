#include <iostream>
#include <cmath> 
#include <string>
#include <stdlib.h>
#include <stdio.h>

/* LI Chi */

char pic[10][10];
char pic2[10][10];
char pic3[10][10];

int cal (int j, int k, int n) {
	int count = 0;
	if(j<n-1) {
		if(pic[j+1][k] == '*') {
			count++;
		}
		if(k<n-1) {
			if(pic[j+1][k+1] == '*')
				count++;
		}
		if(k>0) {
			if(pic[j+1][k-1] == '*')
				count++;
		}

	}

	if(j>0) {
		if(pic[j-1][k] == '*') {
			count++;
		}
		if(k<n-1) {
			if(pic[j-1][k+1] == '*')
				count++;
		}
		if(k>0) {				
			if(pic[j-1][k-1] == '*')
				count++;
		}

	}

	if(k<n-1) {
		if(pic[j][k+1] == '*')
			count++;
	}

	if(k>0) {
		if(pic[j][k-1] == '*')
			count++;
	}

	return count;
}

int main()
{	
	char c;
	int num,n;
	scanf("%d\n\n",&num);
	for(int i=0; i<num; i++) {
		bool die = false;
		scanf("%d\n",&n);
		//char pic[n][n];
		for(int j=0; j<n; j++) {
			scanf("%s\n",pic[j]);
		}
		//char pic2[n][n];
		for(int j=0; j<n; j++) {
			scanf("%s\n",pic2[j]);
		}

		//char pic3[n][n];

		for(int j=0; j<n; j++) {
			for(int k=0;k<n;k++) {
				if(pic2[j][k] == 'x') {
					if(pic[j][k] == '*') {
						die = true;
					} else {
						pic3[j][k] = (char)(((int)'0')+
							cal(j,k,n));
					}
				} else {
					pic3[j][k] = '.';
				}
			}
		}

		if (die) {
			for(int j=0; j<n; j++) {
				for(int k=0;k<n;k++) {
					if(pic[j][k] == '*') 
						pic3[j][k] = '*';
				}
			}
		}
		
		for(int j=0; j<n; j++) {
			for(int k=0;k<n;k++) {
				printf("%c",pic3[j][k]);
			}
			printf("\n");
		}

		if(i<num-1) {
			printf("\n");
		}
		
	}
	
}



#include <stdio.h>

/* LI Chi */

int main() {
	int tc,n1,n2,n3,n4,a1,a2;
	char color[7] = {'R','G','B','Y','O','V','\0'};
	char hole[4];
	char hole2[4];
	bool found;
	scanf("%d\n",&tc);
	while(tc-- > 0) {
		found = false;
		scanf("\n%c%c%c%c",&hole[0],&hole[1],&hole[2],&hole[3]);
		scanf("%d %d\n",&n1,&n2);
		scanf("\n%c%c%c%c",&hole2[0],&hole2[1],&hole2[2],&hole2[3]);
		scanf("%d %d\n",&n3,&n4);
		for(int i1=0;i1<6;i1++) {
			for(int i2=0;i2<6;i2++) {
				if(i2==i1) continue;
				for(int i3=0;i3<6;i3++) {
					if(i3==i2 || i3==i1) continue;
					for(int i4=0;i4<6;i4++) {
						if(i4==i3 || i4==i2 || i4==i1) continue;
						a1=a2=0;
						if(color[i1]==hole[0]) {
							a1++;
						} else if (color[i1]==hole[1] || color[i1]==hole[2] ||
							color[i1]==hole[3]) {
							a2++;
						}
						if(color[i2]==hole[1]) {
							a1++;
						} else if (color[i2]==hole[0] || color[i2]==hole[2] ||
							color[i2]==hole[3]) {
							a2++;
						}
						if(color[i3]==hole[2]) {
							a1++;
						} else if (color[i3]==hole[1] || color[i3]==hole[0] ||
							color[i3]==hole[3]) {
							a2++;
						}
						if(color[i4]==hole[3]) {
							a1++;
						} else if (color[i4]==hole[1] || color[i4]==hole[2] ||
							color[i4]==hole[0]) {
							a2++;
						}
						if(a1!=n1 || a2!=n2) continue;
						

						a1=a2=0;
						if(color[i1]==hole2[0]) {
							a1++;
						} else if (color[i1]==hole2[1] || color[i1]==hole2[2] ||
							color[i1]==hole2[3]) {
							a2++;
						}
						if(color[i2]==hole2[1]) {
							a1++;
						} else if (color[i2]==hole2[0] || color[i2]==hole2[2] ||
							color[i2]==hole2[3]) {
							a2++;
						}
						if(color[i3]==hole2[2]) {
							a1++;
						} else if (color[i3]==hole2[1] || color[i3]==hole2[0] ||
							color[i3]==hole2[3]) {
							a2++;
						}
						if(color[i4]==hole2[3]) {
							a1++;
						} else if (color[i4]==hole2[1] || color[i4]==hole2[2] ||
							color[i4]==hole2[0]) {
							a2++;
						}
						if(a1==n3 && a2==n4) found = true;
					}
				}
			}
		}

		if(found) printf("Possible\n");
		else printf("Cheat\n");
	}
}
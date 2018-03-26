#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int n[3];
	int i;	
	int maxhely;
	while (scanf ("%d",&n[0])!=EOF){
		scanf ("%d %d",&n[1],&n[2]);
		int osszeg = 0;
		int max = -1;
		for (i=0;i<3;i++){
			if (n[i]>max){
				max = n[i];
				maxhely = i;
			}
		}
		n[maxhely] = 0;
		for (i=0;i<3;i++){
			osszeg +=n[i]*n[i];
		}
		printf("%d ",osszeg);
		if (osszeg == max*max){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	
	return 0;
}

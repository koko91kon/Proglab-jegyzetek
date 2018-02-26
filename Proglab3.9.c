#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int igaze(int *tomb, int meret){
	int i;
	for (i=1;i<meret-1;i++){
			if ((tomb[i]<tomb[0] || tomb[i]>tomb[meret-1]) && (tomb[i]>tomb[0] || tomb[i]<tomb[meret-1])){
				return 0;
			}
		}
		return 1;
}

int main(){
	int n;
	int m;
	int j,k;
	scanf("%d",&n);
	for (j=0;j<n;j++){
		scanf("%d",&m);
		int tomb[m];
		for (k=0;k<m;k++){
			scanf("%d",&tomb[k]);
			
		}
		if (igaze(tomb,m)==1){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	
	}
	return 0;
}

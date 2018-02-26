#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
	int t;
	int n,m;
	scanf("%d",&t);
	int i,j,k,l;
	for (i=1;i<=t;i++){
		scanf("%d %d",&n,&m);
		for (j=1;j<=n;j++){
			if (j==1){
				for(k=1;k<=m;k++){
					printf("*");
				}
				printf("\n");
			}
			else if (j>1 && j<(n/2)+1){
				printf("*\n");
			}
			else if(j==(n/2)+1){
				for(k=1;k<=m;k++){
					printf("*");
				}
				printf("\n");
			}
			else if (j>(n/2)+1 && j<n){
				printf("*");
				for (l=1;l<=m-2;l++){
					printf(" ");
				}
				printf("*\n");
			}
			else {
				for(k=1;k<=m;k++){
					printf("*");
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}

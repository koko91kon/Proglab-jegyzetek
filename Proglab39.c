#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	int m;
	int i,j,k;
	int counter=0;
	scanf("%d",&n);
	for (j=0;j<n;j++){
		scanf("%d",&m);
		int tomb[m];
		for (k=0;k<m;k++){
			scanf("%d",&tomb[k]);
			
		}
		for (i=1;i<m-1;i++){
			if ((tomb[i]<tomb[0] || tomb[i]>tomb[m-1]) && (tomb[i]>tomb[0] || tomb[i]<tomb[m-1])){
				counter++;
			}
		}
		if (counter==0){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		counter=0;	
	}

	
	
	return 0;
}

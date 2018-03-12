#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
	
	int matrix [3][3]={1,2,3,4,5,6,7,8,9};
	int i,j;
	for (i=0;i<3;i++){ //sorfolytonos memoriaban ez hasznalatos
		for (j=0;j<3;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (j=0;j<3;j++){ //oszlopfolytonos
		for (i=0;i<3;i++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	//ha m[3][3] akkor m[2][1] = t[7] azaz i*oszlopszam+j
	
	
		
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

int main(){
	int a = 1;
	int b = 6;
	int boolean=1;
	srand(time(NULL));
	/*int n=rand()%(b-a+1)+a; //a és b kozott*/
	int matrix [4][4];
	int i,j;
	for (i=0;i<4;i++){ 
		for (j=0;j<4;j++){
			matrix[i][j] = rand()%(b-a+1)+a;
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<4;i++){
		for (j=0;j<4;j++){
			if (matrix[i][j]%2!=0){
				boolean=0;
			}
		}
		if (boolean==1){
			printf("YES");
			break;
		}
		boolean=1;
	}
	return 0;
}

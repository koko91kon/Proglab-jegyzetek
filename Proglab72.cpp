#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	int i;
	int j;
	int boolean = 0;
	int max = -1;
	int counter = 0;
	for (i=1;i<argc;i++){
		if (atoi(argv[i])>max){
			max = atoi(argv[i]);
		}
	}
	for (i=1;i<argc;i++){
		for (j=1;j<argc;j++){
			if (j!=i && atoi(argv[j])==atoi(argv[i]) && boolean == 0){
				printf("NO");
				boolean = 1;
			}
			
		}
		if (boolean == 0){
			for (j=1;j<=max;j++) {
				if (atoi(argv[i])==j){
					counter++;
				}
			}		
		}
		
	}
	if (counter!=max && boolean == 0){
		printf("NO");
		boolean = 1;
	}
	if (boolean == 0){
		printf("YES");
	}
	
	
	return 0;
}

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
		if (*argv[i]-48>max){
			max = *argv[i]-48;
		}
	}
	for (i=1;i<argc;i++){
		for (j=1;j<argc;j++){
			if (j!=i && *argv[j]-48==*argv[i]-48 && boolean == 0){
				printf("no");
				boolean = 1;
			}
			
		}
		if (boolean == 0){
			for (j=1;j<=max;j++) {
				if (*argv[i]-48==j){
					counter++;
				}
			}

		
			
		}
		
	}
	if (counter!=max){
		printf("no");
		boolean = 1;
	}
	if (boolean == 0){
		printf("yes");
	}
	
	
	return 0;
}

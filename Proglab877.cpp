#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char **foo(char **tomb, int n){
	int i;
	int j;
	int counter = 0;
	int seged = 0;
	int v=0;
	
	
	for (i=0;i<n;i++){
		for (j=0;j<strlen(tomb[i]);j++){
			if (!isupper(tomb[i][j])){
				seged++;
				break;
			}
		}
		if (seged == 0){
			counter++;
		}
		seged = 0;
	}
	
	
	char **tomb2 = (char **)malloc(sizeof(char*)*(counter+1));
	for (i=0;i<counter+1;i++){
		tomb2[i]=(char *)malloc(sizeof(char)*31);
	}
	
	
	for (i=0;i<n;i++){
		for (j=0;j<strlen(tomb[i]);j++){
			if (!isupper(tomb[i][j])){
				seged++;
				break;
			}
		}
		if (seged == 0){
			tomb2[v] = tomb[i];
			v++;
		}
		seged = 0;
	}
	tomb2[v]=NULL;
	return tomb2;
	
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char **tomb=(char **)malloc(sizeof(char)*21);
	int i;
	for(i=0;i<21;i++){
		tomb[i]=(char *)malloc(sizeof(char)*31);
	}
	int v=0;
	while (gets(tomb[v])!=NULL){
		v++;
	}
	for (i=v-1;i>=0;i--){
		puts(tomb[i]);
	}
	
	/*char tomb[3][7]={"alma","korte","szilva"};
	int i;
	for (i=0;i<7;i++){
		printf("%c",tomb[2][i]);
	}
	printf("\n");
	for (i=0;i<3;i++){
		puts(tomb[i]);
	}*/
	
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void rendez (char **b,int meret){
	int i;
	int j;
	char *seged;
	for (i=meret-1;i>0;i--){
		for (j=0;j<i;j++){
			if (strcmp(b[j],b[j+1]) == 1){
				/*char seged[31];
				strcpy(seged,b[j]);
				strcpy(b[j],b[j+1]);
				strcpy(b[j+1],seged);
				*/
				seged = b[j];
				b[j] = b[j+1];
				b[j+1] = seged;
			}
		}
	}
}

int main(){
	
	char **tomb=(char **)malloc(sizeof(char*)*21);
	int i;
	for(i=0;i<21;i++){
		tomb[i]=(char *)malloc(sizeof(char)*31);
	}
	int v=0;
	while (gets(tomb[v])!=NULL){
		v++;
	}

	rendez(tomb,v);
	for (i=0;i<v;i++){
		puts(tomb[i]);
	}
	
	return 0;
}

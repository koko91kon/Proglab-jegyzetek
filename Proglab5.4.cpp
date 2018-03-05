#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct orszagzaszlo{
	char orszagnev[46];
	int szinszam;
}orszagzaszlo;

int main(){
	char s[500];
	int i=0;
	orszagzaszlo tomb[100];
	int j;
	int count=0;
	int bcount=0;
	int maxcount=0;
	int seged=0;
	while(gets(s)!=NULL){
		
		char *token = strtok(s,":");
	
		strcpy(tomb[i].orszagnev,token);

		while (token != NULL){
		
			bcount++;
		
			if (strcmp(token,"piros")==0){
		
				count++;
				
			}
			token = strtok(NULL,":");
		
			
		
		}

		tomb[i].szinszam=bcount;
	
		if (bcount>maxcount){
		
			maxcount = bcount;
			
		}
	
		bcount=0;
	
		i++;
	

	}
	
	printf("%d\n",count);
	for (j=0;j<i;j++){
		if (tomb[j].szinszam==maxcount){
			printf("%s\n",tomb[j].orszagnev);
		}
	}
	
	
	return 0;
}

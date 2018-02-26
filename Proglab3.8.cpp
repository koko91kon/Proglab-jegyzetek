#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2015 apr 13. H12
int main()
{
	char s[101];
	int counter=0;
	int osszetevok=-1;
	int maxosszetevo=0;
	char maxnev[33];
	char nev[33];
	while(gets(s)!=NULL){
		gets(s);	
		char *token = strtok(s,";");
		while(token!=NULL){
			if (counter==0){
				strcpy(nev,token);
			}
			token = strtok(NULL,";");
			osszetevok++;
			counter++;
		}
		
		if (osszetevok>maxosszetevo){
			maxosszetevo=osszetevok;
			strcpy(maxnev,nev);
		}
		osszetevok=0;
		counter=0;
		
	}
	puts(maxnev);
	
	return 0;
}

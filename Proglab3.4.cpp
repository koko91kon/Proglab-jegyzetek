#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//melyik az elso leghosszabb token?
int main()
{
	char s[51];
	char leghosszabb[51];
	gets(s);
	int counter=0;
	
	char *token = strtok(s,":");
	while(token!=NULL){
		int hossz = strlen(token);
		if (hossz>counter){
			counter=hossz;
			strcpy(leghosszabb,token);
		}
		token = strtok(NULL,":");
	}
	puts(leghosszabb);
	
	return 0;
}

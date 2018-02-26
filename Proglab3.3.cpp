#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//hany karakter a leghosszabb token?
int main()
{
	char s[51];
	gets(s);
	int counter=0;
	
	char *token = strtok(s,":");
	while(token!=NULL){
		puts(token);
		if (strlen(token)>counter){
			counter = strlen(token);
		}
		token = strtok(NULL,":");
	}
	printf("%d",counter);
	
	return 0;
}

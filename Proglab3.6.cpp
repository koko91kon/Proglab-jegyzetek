#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//beolvasott szamok osszege
int main()
{
	char s[51];
	int osszeg=0;
	
	gets(s);
	char *token = strtok(s,":");
	while(token!=NULL){
		
		int n = atoi(token);
		osszeg+=n;
		token = strtok(NULL,":");	
	}
	printf("%d",osszeg);
	
	return 0;
}

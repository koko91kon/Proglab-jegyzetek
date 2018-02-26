#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//irja ki szavankent hogy hany db mgh van?
int main()
{
	char s[51];
	int counter=0;
	int i;
	
	gets(s);
	char *token = strtok(s,":");
	while(token!=NULL){
		printf("%s ",token);
		for (i=0;i<strlen(token);i++){
			if (token[i]=='a' || token[i]=='e' || token[i]=='i' || token[i]=='o' || token[i]=='u'){
				counter++;
			}
		}
		token = strtok(NULL,":");
		printf("%d\n",counter);
		counter=0;
	}
	
	return 0;
}

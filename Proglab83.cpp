#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char s[101];
	char s1[51];
	char s2[51];
	int i;
	while (gets(s)!=NULL){
		char *token = strtok(s," ");
		strcpy(s1,token);
		token = strtok(NULL," ");
		strcpy(s2,token);
		for (i=0;i<strlen(s1);i++){
			if (s1[i]!=s2[i]){
				break;
			}
		}
		printf("%d\n",s1[i]-s2[i]);
	}
	
	return 0;
}

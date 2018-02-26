#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int foo(char *s, int n){
	char *token = strtok(s,"!");
	int bigcounter=0;
	while (token!=NULL){
		int counter=0;
		int i;
		for (i=0;i<strlen(token);i++){
			if (isalpha(token[i])){
				counter++;
			}
		}
		if (counter>n){
			bigcounter++;
		}
		token = strtok(NULL,"!");
	}
	return bigcounter;
	
	
}




int main()
{
    char line[1000];
    int n;
    while (scanf("%s %d", line, &n) != EOF)
        printf("%d\n", foo(line, n));
    return EXIT_SUCCESS;
}

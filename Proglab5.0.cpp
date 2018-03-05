#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo(char *s){
	char *t = (char *)malloc(sizeof(char*)*(strlen(s)+1));
	char seged[strlen(s)+1];
	strcpy (t,s);
	char *token = strtok(t," ");
	strcpy(seged,token);
	token = strtok(NULL," ");
	strcpy(t,token);
	strcat(t," ");
	strcat(t,seged);
	return t;
	
}

int main()
{
    char name[50];
    while(gets(name) != NULL)
    {
        char *res = foo(name);
        printf("%s: %s\n", name, res);
        free(res);
    }
    return EXIT_SUCCESS;
}

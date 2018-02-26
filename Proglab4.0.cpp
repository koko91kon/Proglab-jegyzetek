#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//2016 marc 30 szerda 10
int foo(char *s, int n, int m){
	int hossz= strlen(s);
	int i;
	int counter=0;
	int bigcounter=0;
	for (i=0;i<hossz;i++){
		if (s[i]=='.'){
			counter++;
		}
		if (s[i]=='-'){
			if (counter>=n && counter<=m){
				bigcounter++;
			}
			counter=0;
		}
	}
	return bigcounter;
}








int main()
{
    char line[1000];
    int n, m;
    while (scanf("%s %d %d", line, &n, &m) != EOF)
        printf("%d\n", foo(line, n, m));
    return EXIT_SUCCESS;
}

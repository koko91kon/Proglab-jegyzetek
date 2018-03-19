#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int foo(int n){
	char s[100];
	int j;
	int i=0;
	int g=n;
	int counter = 0;
	while (g!=0){
		if (g%2==0){
			g = g/2;
			s[i]=0;
			i++;
		}
		else{
			g = floor(g/2);
			s[i]=1;
			i++;
		}
	}
	s[i]='\0';
	for (j=0;j<i;j++){
		if (s[j]==1){
			counter++;
		}
	}
	/*for (j=0;j<i;j++){
		printf("%d",s[j]);
	}*/
	return counter;
}
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%d\n", foo(n));
    return EXIT_SUCCESS;
}

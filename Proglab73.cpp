#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int kulonbkar(char *s){
	char tomb[27];
	int i;
	int j;
	int counter = 0;
	tomb[0]=s[0];
	int v=1;
	for (i=1;i<strlen(s);i++){	
		for (j=0;j<v;j++){
			if (s[i]==tomb[j]){
				counter = 1;
			}
		}
		if (counter==0){
			tomb[v]=s[i];
			v++;
		}
		counter = 0;

	}
	tomb[v]='\0';
	return strlen(tomb);
}

int main(){
	int d;
	char s[51];
	while (scanf("%d %s",&d,&s)!=EOF){
		if (kulonbkar(s)==d){
			printf("Good\n");
		}
		else if (kulonbkar(s)<d){
			printf("Bad\n");
		}
		else{
			printf("Average\n");
		}
	}
	return 0;
}

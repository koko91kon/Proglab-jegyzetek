#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int relativprime(int n1,int n2){
	int nagyobb;
	int i;
	if(n1>=n2){
		nagyobb = n1;
	}
	else{
		nagyobb = n2;
	}
	for (i=2;i<=nagyobb/2;i++){
		if(n1%i==0 && n2%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	int counter = 0;
	char s[100];
	scanf("%d\n",&n);
	gets(s);
	char *token = strtok(s," ");
	while (token!=NULL){
		if (!relativprime(atoi(token),n)){
			counter++;
		}
		token = strtok(NULL," ");
	}
	if (counter==0){
		printf("YES");
	}
	else{
		printf("NO");
	}
	
	return 0;
}

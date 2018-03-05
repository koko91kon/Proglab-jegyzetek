#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct orszagzaszlo{
	char orszagnev[46];
	int mind5karakter;
}orszagzaszlo;

char * substring(char *s,int n, int m){
	char *uj = (char *)malloc(sizeof(char *)*((m-n)+2));
	int v=0;
	int i;
	for (i=n;i<=m;i++){
		uj[v]=s[i];
		v++;
	}
	uj[v]='\0';
	return uj;
}

int utselketpo(char *s){
	int i;
	int count=0;
	int hely=-1;
	for (i=strlen(s+1);i>=0;i--){
		if (count==1 && s[i]==':'){
			hely=i;
		}
		if (s[i]==':'){
			count++;
		} 
	}
	return hely;
}

int main(){
	char s[500];
	int i=0;
	orszagzaszlo tomb[100];
	int j;
	int count=0;
	int bcount=0;
	int maxcount=0;
	int seged=0;
	int otkar=1;
	while(gets(s)!=NULL){
		otkar =1;
		char *substr = substring(s,0,utselketpo(s));
				
		char *token = strtok(substr,":");	
		strcpy(tomb[i].orszagnev,token);
		token = strtok(NULL,":");	
		while (token != NULL){		
			if (strlen(token)!=5){
				otkar = 0;
			}		
			token = strtok(NULL,":");		
		}
		if (otkar==1){
			count++;
		}
		tomb[i].mind5karakter = otkar;
		i++;	
	}
	printf("%d\n",count);
	for (j=0;j<i;j++){
		if (tomb[j].mind5karakter==1){
			printf("%s\n",tomb[j].orszagnev);
		}
	}
	
	
	return 0;
}

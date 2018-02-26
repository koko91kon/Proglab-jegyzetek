#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct ember{
	
	char vezeteknev[20];
	char keresztnev[20];
	char nem;
	int szulev;
	
}ember;

int hasonlit(ember e1,ember e2){
	if (e1.szulev>e2.szulev){
		return 1;
	}
	else if (e1.szulev<e2.szulev){
		return -1;
	}
	else{
		return 0;
	}
}

void rendez (ember *e,int meret){
	int i,j;
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(e[j],e[j+1]) == 1){
				ember seged = e[j];
				e[j] = e[j+1];
				e[j+1] = seged;
			}
		}
	}
}

int main(){
	
	char sor[150];
	ember e[100];
	int v = 0;
	int i;
	
	while (/*gets(sor)!=NULL*/scanf("%s %s %c %d",&e[v].vezeteknev,&e[v].keresztnev,&e[v].nem,&e[v].szulev)!=EOF){
		
		/*
		char *token = strtok(sor," ");
		strcpy(e[v].vezeteknev,token);
		token = strtok(NULL," ");
		strcpy(e[v].keresztnev,token);
		token = strtok(NULL," ");
		e[v].nem = token[0];
		token = strtok(NULL," ");
		e[v].szulev = atoi(token);
		v++;
		*/
		v++;		
	}
	rendez(e,v);
	for (i=0;i<v;i++){
		if (e[i].szulev<1996 && e[i].nem=='N'){
			printf("%s %s %d\n",e[i].vezeteknev,e[i].keresztnev,2014-e[i].szulev);
		}
	}
	return 0;
}

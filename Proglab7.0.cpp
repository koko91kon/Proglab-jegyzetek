#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct autok{
	char rendszam[8];
	int tankolas[12];
	int tankolasszam;
}autok;

int hasonlit(autok a,autok b){
	int i;
	if(a.tankolasszam != b.tankolasszam){	
		return b.tankolasszam-a.tankolasszam;
	}
	else{
		return strcmp(a.rendszam,b.rendszam);
	}
}
																			//SOHA NE HASZNALJ SCANF-ET

void rendez (autok *e,int meret){
	int i;
	int j;	
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(e[j],e[j+1]) > 0){
				autok seged = e[j];
				e[j] = e[j+1];
				e[j+1] = seged;
			}
		}
	}
}

int main(){
	char s[40];
	autok tomb[20];
	int i=0;
	int j;
	while (gets(s)!=NULL){
		char *token = strtok(s,"/");
		tomb[i].tankolasszam = 0;
		strcpy(tomb[i].rendszam,token);
		token = strtok(NULL,"/");
		for (j=0;j<12;j++){
			if (token[j]-48==1){
				tomb[i].tankolasszam ++;
			}
			
			tomb[i].tankolas[j]=(token[j]-48);
		}
		i++;
	}
	rendez(tomb,i);
	for (j=0;j<i;j++){
		if (tomb[j].tankolasszam>=3){
			printf("%s\n",tomb[j].rendszam);
		}
	}
	
	return 0;
}

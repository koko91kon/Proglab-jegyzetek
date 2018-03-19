#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct zene{
	int perc;
	int masodperc;
	char cim[101];
	int hossz;
}zene;

int hasonlit(zene a,zene b){
	if (a.hossz != b.hossz){
		return b.hossz-a.hossz;
	}
	else {
		return strcmp(a.cim,b.cim);
	}
}

void rendez (zene *e,int meret){
	int i;
	int j;	
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(e[j],e[j+1]) > 0){
				zene seged = e[j];
				e[j] = e[j+1];
				e[j+1] = seged;
			}
		}
	}
}

int main(){
	char s[110];
	zene tomb[20];
	int i=0;
	int j;
	int max=0;
	while (gets(s)!=NULL){
		char *token = strtok(s,";");
		tomb[i].perc = atoi(token);
		token = strtok(NULL,";");
		tomb[i].masodperc = atoi(token);
		token = strtok(NULL,";");
		if (token!=NULL){
			strcpy(tomb[i].cim,token);
		}
		i++;
	}
	for (j=0;j<i-1;j++){
		tomb[j].hossz=(((tomb[j+1].perc)*60)+tomb[j+1].masodperc)-(((tomb[j].perc)*60)+tomb[j].masodperc);
		tomb[i-1].hossz=0;
	}
	rendez(tomb,i);
	for (j=0;j<i-1;j++){
		if (tomb[j].hossz>max){
			max = tomb[j].hossz;
		}
	}
	for (j=0;j<i-1;j++){
		if (tomb[j].hossz==max){
			printf("%s\n",tomb[j].cim);
		}
	}
	
	return 0;
}

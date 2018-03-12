#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct szelveny{
	char nev[41];
	char sorozat[15];
}szelveny;

int egyestipp(szelveny a){
	int i;
	int counter=0;
	for (i=0;i<14;i++){
		if (a.sorozat[i]-48==1){
			counter++;
		}
	}
	return counter;
}
int kettestipp(szelveny a){
	int i;
	int counter=0;
	for (i=0;i<14;i++){
		if (a.sorozat[i]-48==2){
			counter++;
		}
	}
	return counter;
}

int hasonlit(szelveny a,szelveny b){
	if (egyestipp(a)>egyestipp(b)){
		return -1;
	}
	else if (egyestipp(a)<egyestipp(b)){
		return 1;
	}
	else {
		if(kettestipp(a)>kettestipp(b)){
			return-1;
		}
		else if(kettestipp(a)<kettestipp(b)){
			return 1;
		}
		else {
			return strcmp(a.nev,b.nev);
		}
	}
}

void rendez (szelveny *e,int meret){
	int i;
	int j;
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(e[j],e[j+1]) == 1){
				szelveny seged = e[j];
				e[j] = e[j+1];
				e[j+1] = seged;
			}
		}
	}
}



int main(){
	char s[56];
	szelveny tomb[20];
	int v=0;
	int i;
	while (gets(s)!=NULL && v<21){
		char *token=strtok(s,"/"); // "\" esetén: "\\"
		strcpy(tomb[v].nev,token);
		token = strtok(NULL,"/");
		strcpy(tomb[v].sorozat,token);
		v++;
	}
	rendez(tomb,v);
	for (i=0;i<v;i++){
		printf("%s\n",tomb[i].nev);
	}
	return 0;
}

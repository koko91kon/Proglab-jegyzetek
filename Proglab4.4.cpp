#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//2014 apr 8 k12
typedef struct zene{

	int sorszam;
	char eloado[31];
	char cim[101];
	int hossz;
	
}zene;

int main(){
	
	char sor[150];
	zene z[100];
	int v = 0;
	
	while (gets(sor)!=NULL){
		
		char *token = strtok(sor,";");
		z[v].sorszam = atoi(token);
		token = strtok(NULL,";");
		strcpy(z[v].eloado,token);
		token = strtok(NULL,";");
		strcpy(z[v].cim,token);
		token = strtok(NULL,";");
		
		char *token2 = strtok(token,":");
		char perc[4];
		char mp[3];
		strcpy(perc,token2);
		token2 = strtok(NULL,":");
		strcpy(mp,token2);
		int hossz;
		hossz = atoi(perc)*60+atoi(mp);
		z[v].hossz = hossz;
		v++;
				
	}
	int i;
	int maxhossz=0;
	char maxeloado[31];
	for (i=0;i<v;i++){
		if (z[i].hossz>maxhossz){
			maxhossz = z[i].hossz;
			strcpy(maxeloado,z[i].eloado);
		}
		printf("%d %s %s %d\n",z[i].sorszam,z[i].eloado,z[i].cim,z[i].hossz);
	}
	printf("%s",maxeloado);
	return 0;
}

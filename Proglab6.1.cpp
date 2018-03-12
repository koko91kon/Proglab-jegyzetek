#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int leghosszabbsor(char *ut){
	File *in;
	in = fopen(ut,"r");
	char c;
	int count;
	int max=-1;
	while(fscanf(in,"%c",&c)!=EOF){ // leggyorsabb mert karakterrol karakterre
		count++;
		if (c=='\n'){
			if (count>max){
				max = count;
			}
			count = 0;
		}
	}
	fclose(in);
	return max+1; // +1 mert '\0'
}

int main(){
	
	FILE *in; //fajl tipusu mutato
	in = fopen("gyuMOlcs.txt","r");	//r for read(kell fajl kulonben NULL pointer)
	 								//w for write(elkesziti a fajlt ha nincs)
	 								//a for append(letrehozza ha nincs)
									//abszolut eleresnel "/" helyett "//"
	if (in==NULL){
		printf("Nem letezik ilyen fajl!");
		return -1;
	}
	int maxhossz = leghosszabbsor("gyuMOlcs.txt");
	char sor[maxhossz];
	while (fgets(sor,maxhossz,in)!=NULL){
		if (sor[strlen(sor)-1]=='\n'){
			sor[strlen(sor)-1]='\0';		//dupla enter mert az fgets a sor vegi entert is beolvassa
		}
		printf("%s\n",sor);			
	}
	fclose(in); 					//zarni kell
	
	
	
	return 0;
}

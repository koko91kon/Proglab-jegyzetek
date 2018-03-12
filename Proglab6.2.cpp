#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int leghosszabbsor(char *ut){
	FILE *in;
	in = fopen(ut,"r");
	char c;
	int count=0;
	int max=-1;
	while(fscanf(in,"%c",&c)!=EOF){
		count++;
		if (c=='\n'){
			if (count>max){
				max = count;
			}			
			count = 0;
		}
	}
	if (count>max){
		max=count;
	}
	fclose(in);
	return max; 
}

int main(){
	
	FILE *in; 
	in = fopen("gyuMOlcs.txt","r");	
	 							
	if (in==NULL){
		printf("Nem letezik ilyen fajl!");
		return -1;
	}

	int maxhossz = leghosszabbsor("gyuMOlcs.txt");
	printf("%d\n",maxhossz);
	char sor[maxhossz+1];
	while (fgets(sor,maxhossz+1,in)!=NULL){
		if (strlen(sor)==maxhossz){
			printf("%s",sor);
		}
				
	}
	fclose(in); 					
	//rewind(in); visszateszi a mutatót az elejére a fájlnak
	
	
	return 0;
}

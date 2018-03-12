#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
typedef struct allatkert{
	char varos[41];
	int allatszam;
}allatkert;

int main(int argc, char*argv[]){ //argc: argumentumok száma
								 //argv: az argumentumokat tartalmazo sztringtomb
								 
	/*int i;
	for (i=0; i<argc; i++){
		printf("%s\n",argv[i]); //i=0 azaz nulladik argumentum az elérési helye
	}*/
	if (argc!=2){
		printf("hibas argumentumszam");
		return -1;
	}
	FILE *in; 
	in = fopen(argv[1],"r");
	if (in==NULL){
		printf("Nem letezik ilyen fajl!");
		return -1;
	}
	int i;	
	int v=0;
	int j;
	int counter=0;
	int max = -1;
	allatkert tomb[100]; 							


	char sor[256];
	while (fgets(sor,256,in)!=NULL){
		if (sor[strlen(sor)-1]=='\n'){
			sor[strlen(sor)-1]='\0';		
		}
		char *token = strtok(sor,";");
		strcpy(tomb[v].varos,token);
		token = strtok(NULL,";");
		
		while (token!=NULL){
			counter++;
			token = strtok(NULL,";");
		}
		if (counter>max){
			max = counter;
		}
		tomb[v].allatszam = counter;
		counter = 0;
		v++;
				
	}
	fclose(in); 					
	printf("%d\n",max-2);
	for (j=0;j<v;j++){
		if (tomb[j].allatszam==max){
			printf("%s\n",tomb[j].varos);
		}
	}
	
	return 0;

}

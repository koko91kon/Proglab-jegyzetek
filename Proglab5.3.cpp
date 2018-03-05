#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*typedef struct orszagzaszlo{
	char orszagnev[46];
	int szinszam;
	int szelesseg;
	int magassag;
	
}orszagzaszlo;*/

int main(){
	char s[500];
	//int i=0;
	//orszagzaszlo tomb[100];
	//	int szinszam=0;
	//int j;
	//int maxszin=0;
	//int hely;
	int count=0;
	int maxcount=0;
	char orszagnev[100];
	char maxorszagnev[100];
	while(gets(s)!=NULL){
		char *token = strtok(s,":");
		strcpy(orszagnev,token);
		while (token != NULL){
			count++;
			token = strtok(NULL,":");
		
		}
		if (count>maxcount){
			maxcount = count;
			strcpy(maxorszagnev,orszagnev);
		}
		count =0;
		
		/*strcpy(tomb[i].orszagnev,token);
		token = strtok(NULL,":");
		szinszam++;
		token = strtok(NULL,":");
		while (!isdigit(token[0])){
			token = strtok(NULL,":");
			szinszam++;
		}
		tomb[i].szinszam=szinszam;
		tomb[i].szelesseg = atoi(token);
		token = strtok(NULL,":");
		tomb[i].magassag = atoi(token);
		i++;
		szinszam=0;
		*/
	}
	/*for (j=0;j>i;j++){
		if (tomb[j].szinszam>maxszin){
			maxszin = tomb[j].szinszam;
			hely = j;
		}
	}*/
	printf("%s",maxorszagnev);
	
	
	return 0;
}

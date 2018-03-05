#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct bakt{
	char azon[11];
	int egyes;
}bakt;

int hasonlit(bakt a,bakt b){
	if (a.egyes>b.egyes){
		return -1;
	}
	else if (a.egyes<b.egyes){
		return 1;
	}
	else {
		return strcmp(a.azon,b.azon);
	}
}

void rendez (bakt *b,int meret){
	int i;
	int j;
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(b[j],b[j+1]) == 1){
				bakt seged = b[j];
				b[j] = b[j+1];
				b[j+1] = seged;
			}
		}
	}
}

int main(){
	char s1[100];
	char azon[8];
	char dupl[100];
	int v=0;
	int i;
	int j;
	int counter = 0;
	bakt tomb[20];
	while(scanf("%s/%s",&azon,&dupl)!=EOF){
		for (i=0;i<strlen(dupl);i++){
			if (dupl[i]==1){
				counter++;
			}
		}
		strcpy(tomb[v].azon,azon);
		tomb[v].egyes = counter;
		v++;
	}
	for (j=0;j<v;j++){
		if (tomb[j].egyes>7){
			printf("buznyák az nem brunyak");
		}
	}
	
	return 0;
}

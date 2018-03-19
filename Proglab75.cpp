#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct karakter{
	char betu;
	int eloford;
}karakter;
void legtobbkar(char *s){
	karakter tomb[27];
	int i;
	int j;
	int max=10000;
	int maxhely;
	int counter = 0;
	tomb[0].betu=s[0];
	tomb[0].eloford = 1;
	int v=1;
	for (i=1;i<strlen(s);i++){	
		for (j=0;j<v;j++){
			if (s[i]==tomb[j].betu){
				counter = 1;
				tomb[j].eloford++;
			}
		}
		if (counter==0){
			tomb[v].eloford = 1;
			tomb[v].betu=s[i];
			v++;
		}
		counter = 0;

	}
	for (i=0;i<v;i++){
		if (tomb[i].eloford<max){
			max = tomb[i].eloford;
			maxhely = i;
		}
	}
	for (i=0;i<v;i++){
		if (tomb[i].eloford==max){
			printf("%c ",tomb[i].betu);
		}
	}
}

int main(){
	char s[51];
	while (scanf("%s",&s)!=EOF){
	legtobbkar(s);
	}
	return 0;
}

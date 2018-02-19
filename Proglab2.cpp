#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int vaneszokoz(char s[]){
	for (int i=0;i<strlen(s);i++){
		if (s[i]==' '){
			return 1;
		}
	}
	return 0;
}

char * szokoztorles(char *s){
	char *uj=(char *)malloc(sizeof (char*)*strlen(s)+1);
	int i;
	int n=0;
	for (i=0;i<strlen(s);i++){
		if (s[i]!=' '){
			uj[n]=s[i];
			n++;
		}
	}
	uj[n]='\n';
	return uj;
}
char * beszur(char *s, int n){
	int h = strlen(s)/n+1+strlen(s)+1;
	char *uj=(char *)malloc(sizeof (char*)*h);
	int i;
	int v=0;
	for (i=0;i<strlen(s);i++){
		if (i%n==0){
			uj[v]=s[i];
			v++;
			uj[v]=48+n; //int-bõl char -->+48
			v++;
		}
		else{
			uj[v]=s[i];
			v++;
		}
	}
	uj[v]='\n';
	return uj;
}
int main(){
	/* "a" betû számláló
	char c;
	int counter=0;
	while(1){
		scanf("%c",&c);
		if (c=='*'){
			break;
		}
		if(c=='a'){
			counter++;
		}
	}
	printf("%d",counter);
	
	*/
	
	//toupper(c) tolower(c) Újat hoz létre
	//isalpha(c) -> betû-e
	/* ctype.h függvények
	char c;
	int lowercase=0;
	int uppercase=0;
	int digit=0;
	int whitespace=0;
	int other;
	while(1){
		scanf("%c",&c);
		if (c=='*'){
			break;
		}
		if(islower(c)){
			lowercase++;
		}
		else if(isupper(c)){
			uppercase++;
		}
		else if(isdigit(c)){
			digit++;
		}
		else if(isspace(c)){
			whitespace++;
		}
		else {
			other++;
		}
	}
	printf("%d %d %d %d %d",lowercase,uppercase,digit,whitespace,other);
	*/
	
	//10 elembõl álló tömb elemei 1-100 véletlenszerû számok
	/*
	srand(time(NULL));
	int n[100];
	for (int i=0;i<100;i++){
		n[i]=rand()%100+1;
	}
	for (int j=0;j<100;j++){
		if (j==99){
			printf("%d",n[j]);
		}
		else{
		
		printf("%d ",n[j]);
		}
	}
	printf("a");
	*/
	
	//uj tomb elemei eredeti tomb paros elemei
	/*
	srand(time(NULL));
	int eredetitomb[10];
	int counter=0;
	for (int i=0;i<10;i++){
		eredetitomb[i]=rand()%100+1;
	}
	for (int j=0;j<10;j++){
		if (eredetitomb[j]%2==0){
			counter++;
		}
		if (j==9){
			printf("%d",eredetitomb[j]);
		}
		else{
		
		printf("%d ",eredetitomb[j]);
		}
	}
	printf("\n");
	int ujtomb[counter];
	int ujtombhely=0;
	for (int g=0;g<10;g++){
		if(eredetitomb[g]%2==0){
			ujtomb[ujtombhely]=eredetitomb[g];
			printf("%d ",ujtomb[ujtombhely]);
			ujtombhely++;
			
		}
	}*/
	/*
	char s[20];
	scanf("%s",&s);
	printf("%s",s);
	gets(s);
	puts(s);
	*/
	/*
	char s[21];
	int n=0;
	while(1){
		gets(s);
		if (strcmp(s,"THE END")==0){
			break;
		}
		if (strlen(s)>=10 ){
			if (vaneszokoz(s)==0){
				puts(s);
			}
		}
	}*/
	/*	
	char s[31];
	char s1[31];
	int n=1;
	int g;
	int d=0;
	while (1){
		gets(s);
		if(n==1){
		
			strcpy(s1,s);
		}
		
		
			if (strcmp(s,s1)!=0 && n!=1){
				n++;
			}
			else{
				break;
			}
		
		
		
	}
	printf("%d",n);
	
	*/
	/*
	int t[6]={2,4,10,7,1,0};
	for (int i=0;i<6;i++){
		printf("%d ",*(t+i));
	}
	*/
	
	//50 hosszu szo, irjon fuggvenyt mely a bekert szot tartalmazza paramként, allitson elo uj szot mely a bemeneti stringbol torli a szokozoket
	/*char s[51];
	gets(s);
	char *s1 = szokoztorles(s);
	puts(s1);*/
	
	
	char s[51];
	gets(s);
	char *s1 = beszur(s,3);
	puts(s1);
	return 0;
}

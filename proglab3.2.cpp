#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Tokenizálás
/*be: alma:korte:szilva
ki:alma
korte
szilva*/
// !!!Modosul az eredeti string!!!
int main()
{
	char s[51];
	gets(s);
	
	char *token = strtok(s,":");
	//puts(token);
	//puts(s);
	
	//tudjuk elore hogy hany token lesz?
	
	//nem ---> while
	while(token!=NULL){//null pointer
		puts(token);
		token = strtok(NULL,":"); //NULL azaz ott folytatja ahol az elõbb abbahagyta
	}
	
	return 0;
}

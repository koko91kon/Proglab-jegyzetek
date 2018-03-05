#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char s[500];
    int euro;
    double cent;
    double osszeg=0;
    while(gets(s) != NULL)
    {
    	  if (strcmp(s,"END")==0){
        	printf("%.2f",osszeg);
        	osszeg = 0;
        	
		}
        char *token = strtok(s,".");
        euro = atoi(token);
        token = strtok(NULL,".");
        cent = atoi(token);
        
        osszeg += euro + cent/100;
       
    }
    return EXIT_SUCCESS;
}

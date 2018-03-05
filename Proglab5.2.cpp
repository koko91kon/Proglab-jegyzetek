#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char s[500];
    int ora;
    double perc;
    double osszegora=0;
    double osszegperc=0;
    int percbolora;
    double percek;
    while(gets(s) != NULL)
    {
    	percek = osszegperc-(percbolora*60);
    	
    	  if (strcmp(s,"END")==0){
    	  	if (percek>=10){		
        	printf("Ez itten az osszeg vazze: %.0f.%.0f\n",osszegora,percek);
        	}
        	else{
        		printf("Ez itten az osszeg vazze: %.0f.0%.0f\n",osszegora,percek);
			}
        	osszegperc = 0;
        	osszegora = 0;
        	
		}
        char *token = strtok(s,".");
        ora = atoi(token);
        token = strtok(NULL,".");
        perc = atof(token);
        
        osszegora += ora;
		osszegperc += perc;
		percbolora = (int) osszegperc/60;
		osszegora +=percbolora; 
	
       
    }
    return 80085;
}

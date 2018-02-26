#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int amper( char *s){
	char *token=strtok(s," ");
	int n;
	int i;
	for (i=1;i<3;i++){
		if (i==1){
			n = atoi(token);
		}
		else {
			if (!strcmp(token,"A")){
				return n;
			}
			else if(!strcmp(token,"kA")){
				return n*1000;
			}
			else if (!strcmp(token,"mA")){
				return n/1000;
			}
		}
		token = strtok(NULL," ");
	}
	
}


int main()
{
  char line[ 1000 ];
  int amper( char * );
  while ( gets( line ) != NULL )
    printf( "%d\n", amper( line ) );
  return EXIT_SUCCESS;
}

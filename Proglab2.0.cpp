#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int is_c_identifier(char *s){
	for (int i=0;i<strlen(s);i++){
		if (!islower(s[i]) || s[i]==0){
			return 0;
		}
	}
	if (s[0]=='_' || s[strlen(s-1)]=='_'){
		return 0;
	}
	for (int j=0;j<strlen(s-1);j++){
		if (s[j]=='_' && s[j+1]=='_'){
			return 0;
		}
	}
	
	return 1;
}

int main()
{
  char line[ 50 ];
  int is_c_identifier( char * );
  while ( gets( line ) != NULL )
    if ( is_c_identifier( line ) )
      puts( "YES" );
    else
      puts( "NO" );
  return EXIT_SUCCESS;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *cdecl( char *s, int n){
	char szam[11];
	itoa(n,szam,10);
	
	char *uj = (char *)malloc(sizeof(char *)*strlen(s)+strlen(szam)+8);
	char *vmi = "int ";
	char *sc = " = ";
	char *vesszo = ";";
	strcpy(uj,vmi);
	strcat(uj,s);
	strcat(uj,sc);
	strcat(uj,szam),
	strcat(uj,vesszo);
	return uj;
	
}
int main()
{
  char s[ 1000 ];
  int n;
  char *cdecl( char *, int );
  while ( scanf( "%s%d", s, &n ) != EOF )
  {
    char *p = cdecl( s, n );
    n=0;
    puts( p );
    free( p );
  }
  return EXIT_SUCCESS;
}

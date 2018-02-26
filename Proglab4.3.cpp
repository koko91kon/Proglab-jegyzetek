#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int all_before(char *s, char c1, char c2){
	int i;
	int c2hely=201;
	for (i=0;i<strlen(s);i++){
		if (s[i]==c2 && c2hely==201){
			c2hely=i;
		}
		if (s[i]==c1 && i>c2hely){
			return 0;
		}
	}
	return 1;
}



int main()
{
  char line[200];
  int all_before(char *, char, char);
  while (gets(line) != NULL)
  {
    char a, b, str[200];
    int res;
    strcpy(str, line);
    gets(line);
    a = line[0];
    b = line[2];
    res = all_before(str, a, b);
    puts(res ? "YES" : "NO");
  }
  return EXIT_SUCCESS;
}

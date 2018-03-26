#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int foo(int n){
	int counter=0;
	while (n!=0){
		if (n%2==1){
			counter++;
		}
		else {
			counter = 0;
		}
		if (counter>1){
			return 1;
		}
		n /= 2;
		
	}
	return 0;
}

int foo2(int n){
	int seged = n;
	int counter = 0;
	int i=0;
	int j;
	while(seged!=0){
		seged /= 2;
		counter++;
	}
	char tomb[counter];
	while(n!=0){
		tomb[i] = (n%2)+48;
		n /= 2;
		i++;
	}
	int tomb2[counter];
	for (i=counter-1;i>=0;i--){
		for (j=0;j<counter;j++){
			tomb2[j]=tomb[i];
				printf("%c",tomb2[j]);
		}
	}
	for (i=0;i<counter-1;i++){
		if (tomb2[i]==49 && tomb2[i+1]==49){
			return 1;
		}
	}
	return 0;
}


int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        puts(foo2(n) ? "YES" : "NO");
    return EXIT_SUCCESS;
}

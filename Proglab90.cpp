#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct listaelem{
	
	int adat;
	struct listaelem *kov; 
	
}elem;

elem * ujelem(int adat){
	
	elem *uj = (elem *)malloc(sizeof(elem));
	uj->adat = adat;
	uj->kov = NULL;
	return uj;
	
}

elem * elorebeszur(elem *a,elem *fej){
	
	if (fej==NULL){
		return a;
	}
	a->kov = fej;
	fej = a;
	return fej;
	
}

elem * hatrabeszur(elem *a,elem *fej){
	elem *seged = fej;
	
	if (fej==NULL){
		return a;
	}
	while (seged->kov!=NULL){
		seged = seged->kov;
	}
	seged->kov = a;
	return fej;
}

void kiir(elem *fej){
	elem *seged = fej;
	while(seged!=NULL){
		printf("%d",seged->adat);
		seged = seged->kov;
	}
}


int main(){

	elem *fej = NULL;
	int n;
	while (1){
		scanf("%d",&n);
		if (n==0){
			break;
		}
		fej = hatrabeszur(ujelem(n),fej);
	}
	kiir(fej);
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct listaelem{
	
	int adat;
	struct listaelem *kov; 
	
}elem;

elem* ujelem(int adat){
	
	elem *uj = (elem *)malloc(sizeof(elem));
	uj->adat = adat;
	uj->kov = NULL;
	return uj;
	
}

elem* elorebeszur(elem *a,elem *fej){
	
	if (fej==NULL){
		return a;
	}
	a->kov = fej;
	fej = a;
	return fej;
	
}

elem* hatrabeszur(elem *a,elem *fej){
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
		printf("%d\n",seged->adat);
		seged = seged->kov;
	}
}

elem* lista_get(int index,elem *fej){
	elem *seged = fej;
	int counter=0;
	while (seged!=NULL){
		if(counter == index){
			return seged;
		}
		seged = seged->kov;
		counter++;
	}
	return NULL;
}

elem* toroleleje(elem *fej){
	elem *seged = fej;
	fej = fej->kov;
	free(seged);
	return fej;
}

elem* torolvege(elem *fej){
	elem *seged = fej;
	elem *seged1 = NULL;
	
	if (fej==NULL){
		return NULL;
	}
	while (seged->kov!=NULL){
		seged1 = seged;
		seged = seged->kov;
	}
	seged1->kov = NULL;
	free(seged);
	
	return fej;
}

elem* keres(elem *fej,int adat){
	elem *seged = fej;
	if (fej==NULL){
		return NULL;
	}
	while (seged!=NULL){
		if (seged->adat==adat){
			return seged;
		}
		seged = seged->kov;
	}

	return NULL;
}

int keresIndex(elem *fej,int adat){
	elem *seged = fej;
	int counter = 0;
	if (fej==NULL){
		return NULL;
	}
	while (seged!=NULL){
		if (seged->adat==adat){
			return counter;
		}
		counter++;
		seged = seged->kov;
	}

	return -1;
}s

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
	torolvege(fej);
	kiir(fej);
	
	return 0;
}




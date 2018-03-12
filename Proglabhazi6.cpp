#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct versenyzo{
    char kereszt[20];
    char vezet[20];
    int eredm[8];
}versenyzo;

int eredmosszegez(versenyzo v){
    int i;
    int osszeg=0;
    for (i=0;i<8;i++){
        osszeg += v.eredm[i];
    }
    return osszeg;
}


int hasonlit(versenyzo a,versenyzo b){
    int osszega = eredmosszegez(a);
    int osszegb = eredmosszegez(b);
    if (osszega>osszegb){
        return 1;
    }
    else if (osszega<osszegb){
        return -1;
    }
    if (osszega == osszegb){
        if (strcmp(a.vezet,b.vezet)==0){
            return strcmp(a.kereszt,b.kereszt);
        }
        return strcmp(a.vezet,b.vezet);
    }
}

void rendez (versenyzo *e,int meret){
	int i;
	int j;
	for (i=meret-1;i>1;i--){
		for (j=0;j<i;j++){
			if (hasonlit(e[j],e[j+1]) == 1){
				versenyzo seged = e[j];
				e[j] = e[j+1];
				e[j+1] = seged;
			}
		}
	}
}


int main() {

    char s[45];
    versenyzo tomb[20];
    int k=0;
    int g=0;
    int i;
    int j;
    int n;
    int dobogo=0;
    while (gets(s)!=NULL && k<21){
        char *token = strtok(s," ");
        strcpy(tomb[k].vezet,token);
        token = strtok(NULL," ");
        char *token2 = strtok(token,":");
        strcpy(tomb[k].kereszt,token2);
        token2 = strtok(NULL,":");
        char *token3 = strtok(token2,",");
        tomb[k].eredm[g]=atoi(token3);
        g++;
        for (i=0;i<7;i++){
            token3 = strtok(NULL,",");
            tomb[k].eredm[g]=atoi(token3);
            g++;
        }
        k++;
        g=0;
    }
    rendez(tomb,k);
    for (j=0;j<k;j++){
        for (n=0;n<8;n++){
            if (tomb[j].eredm[n]<4){
                dobogo++;
            }
        }
        if (dobogo>2){
            printf("%s %s (%d)\n",tomb[j].vezet,tomb[j].kereszt,eredmosszegez(tomb[j]));
        }
        dobogo = 0;
    }


return 0;
}

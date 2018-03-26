#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int prime(int n){
    int i;
    int counter = 0;
    double felso = (double) n/2;
    for (i=2;i<=felso;i++){
        if (n%i==0){
            counter++;
        }
    }
    if (counter == 0){
        return 1;
    }
    return 0;
}

int joszamoke(int n[],int meret){
    int i;
    int j;
    int counter = 0;
    for (i=1;i<=meret;i++){
        for (j=0;j<meret;j++){
            if (n[j]==i){
                counter++;
                break;
            }
        }
    }
    if (counter == meret){
        return 1;
    }
    return 0;


}

int main(int argc, char *argv[]){
    int meret = argc-1;
    int tomb[meret];
    int i;
    int counter = 0;
    int osszeg = 0;
    for (i=0;i<meret;i++){
        tomb[i] = atoi(argv[i+1]);

    }
    osszeg += tomb[meret-1];
    for (i=0;i<meret-1;i++){
        osszeg += tomb[i];
        if (!prime(tomb[i]+tomb[i+1])){
            counter++;
        }
    }
    if (argc>2 && counter == 0 && joszamoke(tomb,meret)){
        printf("%d YES",osszeg);
    }
    else {
        printf("NO");
    }


return 0;
}

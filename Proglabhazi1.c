#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    int max=INT_MIN;
    int counter=0;
    int i,j;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int tomb[n];
        for (i=0;i<n;i++){
            scanf("%d",&tomb[i]);
            if (tomb[i]>max){
                max=tomb[i];
            }
        }
        for (j=0;j<n;j++){
            if (tomb[j]==max){
                counter++;
            }
        }
        printf("%d\n",counter);
        counter=0;
        max=INT_MIN;
    }
return 0;}

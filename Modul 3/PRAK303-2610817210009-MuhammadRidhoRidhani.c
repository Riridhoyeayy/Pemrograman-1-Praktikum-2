#include <stdio.h>
int main () {
int N;
printf("\n");
scanf("%d", &N);

if(N>=1){
    printf("positif");
}    
else if (N<0){
    printf("negatif");
}
else{
    printf("nol");
}
return 0;
}
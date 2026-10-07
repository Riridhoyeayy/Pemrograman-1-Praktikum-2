#include <stdio.h>
#include <math.h>
int main () {
int tinggi, miring;
    scanf("%d %d", &tinggi, &miring);
int Alas=sqrt(miring*miring-tinggi*tinggi);
int Keliling= Alas+tinggi+miring;
int Luas= (Alas*tinggi)/2;
printf("Alas = %d cm\n", Alas);
printf("Tinggi = %d cm\n", tinggi);
printf("Keliling = %d cm\n", Keliling);
printf("Luas = %d cm^2\n", Luas);
return 0;
}
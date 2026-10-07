#include <stdio.h>
int main () {
float Nilai_pertama, Nilai_kedua;
printf("Masukkan Nilai Pertama: ");
    scanf("%f", &Nilai_pertama);
printf("Masukkan Nilai Kedua: ");
    scanf("%f", &Nilai_kedua);
    float sum = Nilai_pertama + Nilai_kedua;
printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", Nilai_pertama, Nilai_kedua, sum);
return 0;
}
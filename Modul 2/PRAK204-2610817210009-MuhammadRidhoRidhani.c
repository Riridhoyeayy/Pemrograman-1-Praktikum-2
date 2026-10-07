#include <stdio.h>
int main () {
float phi=22.0 / 7.0;
float r, t;
    scanf("%f %f", &r, &t);
float volume= phi*r*r*t;
float luas= 2*phi*r*(r+t);
float keliling=2*phi*r;
printf("Volume = %.2f\n", volume);
printf("Luas = %.2f\n", luas);
printf("Keliling = %.2f\n", keliling);
return 0;
}
#include <stdio.h>
int main () {
int bilangan;

printf("\n");
scanf("%d", &bilangan);

if (bilangan>=1 && bilangan<=9){
    printf("Satuan");
}
else if (bilangan>=20&&bilangan<=99){
    printf("Puluhan");
}
else if (bilangan>=10&&bilangan<=20){
    printf("Belasan");
}
else if (bilangan>99){
    printf("Anda Menginput Melebihi Limit Bilangan");
}
else{
    printf("Nol");
}
return 0;
}
#include <stdio.h>
int main () {
char nama[20];
char nim[20];
char paralel[20];
char ttl[20];
char alamat[20];
char hobby[50];
char no_hp[20];
    printf("Nama                    :");
        scanf(" %[^\n]", nama);
    printf("NIM                     :");
        scanf("%s", nim);
    printf("Kelas Paralel           :");
        scanf(" %[^\n]", paralel);
    printf("Tempat/Tanggal Lahir    :");
        scanf(" %[^\n]", ttl);
    printf("Alamat                  :");
        scanf(" %[^\n]", alamat);
    printf("Hobby                   :");
        scanf(" %[^\n]", hobby);
    printf("No. HP                  :");
        scanf("%s", no_hp);
    printf("Nama                    :%s\n", nama);
    printf("NIM                     :%s\n", nim);
    printf("Kelas Paralel           :%s\n", paralel);
    printf("Tempat/Tanggal Lahir    :%s\n", ttl);
    printf("Alamat                  :%s\n", alamat);
    printf("Hobby                   :%s\n", hobby);
    printf("No. Hp                  :%s\n", no_hp);
    return 0;
}
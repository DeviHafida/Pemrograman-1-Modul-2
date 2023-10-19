#include <stdio.h>
int main (){
    char nama[30];
    char nim[20];
    char kelas_paralel[3];
    char tempat_lahir[10];
    char tanggal_lahir[20];
    char alamat[30];
    char hobby[20];
    char no_hp[20];
    printf("Nama : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM : ");
    fgets(nim, sizeof(nama), stdin);
    printf("Kelas Paralel : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    printf("Tempat Lahir : ");
    fgets(tempat_lahir, sizeof(tempat_lahir), stdin);
    printf("Tanggal Lahir (dd-mm-yyyy) : ");
    fgets(tanggal_lahir, sizeof(tanggal_lahir), stdin);
    printf("Alamat : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No.Hp : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    printf("Nama : %s", nama);
    printf("NIM : %s", nim);
    printf("Kelas Paralel : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir : %s/%s", tempat_lahir,tanggal_lahir);
    printf("Alamat : %s", alamat);
    printf("Hobby : %s", hobby);
    printf("No.Hp : %s", no_hp);
    return 0;
}
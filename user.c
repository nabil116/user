
#include <stdio.h>

int main() {
    
    printf("Input Data Mahasiswa\n");

    char nama[100];
    char npm[100];
    char jurusan[100];
    char usia[100];
    char hobi[100];
    char alamat[100];

    printf("Nama : ");
    scanf("%[^\n]", nama);

    printf("NPM : ");
    scanf(" %[^\n]", npm);
    
    printf("Jurusan : ");
    scanf(" %[^\n]", jurusan);
    
    printf("usia : ");
    scanf(" %[^\n]", usia);
    
    printf("hobi : ");
    scanf(" %[^\n]", hobi);
    
    printf("alamat : ");
    scanf(" %[^\n]", alamat);


    printf("\nData berhasil disimpan");

    return 0;
}
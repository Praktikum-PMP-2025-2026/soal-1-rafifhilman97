/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5 (Foundation of Algorithm)
 *   Hari dan Tanggal    : Selasa, 4 Juni 2026
 *   Nama (NIM)          : Rafif Hilman Muhammad (13224073)
 *   Nama File           : soal1.c
 *   Deskripsi           : input integer banyaknya tanda buka atau tutup,  
                            dihasilkan kombinasi buka dan tutup
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n;
    scanf("%d", &n); 

    int x = 0;
    if (n == 2){
        x = 1;
    }
    else if (n == 3){
        x = 4;
    }
    else if (n == 4){
        x = 13;
    }

    char temp[10];
    int sum = 1;
    if (n == 0){
        printf("TOTAL 1\n");
    }
    else {
        char buka[10];
        for (int i = 0; i < n; i++){
            buka[i] = '(';
            printf("%c", buka[i]);
        }

        char tutup[10];
        for (int i = 0; i < n; i++){
            tutup[i] = ')';
            printf("%c", tutup[i]);
        }
        printf("\n");


        int j = 0;
        while (j < x){
            temp[j] = tutup[j];
            tutup [j] = buka [j];
            buka[j] = temp[j];
            for (int i = n-1; i >= 0; i--){
                printf("%c", buka[i]);
            }
            for (int i = 0; i < n; i++){
                printf("%c", tutup[i]);
            }
            printf("\n");
            j++;   
            sum++;         
        }
        printf("TOTAL %d\n", sum);
    }

    return 0;
}

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
        printf("TOTAL %d\n", sum);
    }

    return 0;
}

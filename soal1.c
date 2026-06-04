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
            printf("c", tutup[i]);
        }
        
        /*for (int i = 0; i < n; i++){
            for (int j = n; j >= 0; j--){
                printf("%c", buka[j]);
            }
            for (int j = n; j >= 0; j--){
                printf("%c", tutup[j]);
            }
            sum++;
        }*/
        printf("TOTAL %d", sum);
    }

    return 0;
}

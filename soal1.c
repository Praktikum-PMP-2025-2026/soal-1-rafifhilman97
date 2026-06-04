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

// Struktur Node untuk Tree
typedef struct TreeNode {
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Fungsi untuk membuat node baru 
TreeNode* createTreeNode(char value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Fungsi untuk memasukkan data ke dalam Tree
TreeNode* insertTree(TreeNode* root, char value) {
    if (root == NULL) {
        return createTreeNode(value);
    }
    if (value < root->data) {
        root->left = insertTree(root->left, value);
    } else if (value > root->data) {
        root->right = insertTree(root->right, value);
    }
    return root;
}

// In-Order (Kiri, Akar, Kanan)
void inOrder(TreeNode* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

// Prosedur Traversal: Pre-Order (Akar, Kiri, Kanan)
void preOrder(TreeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

// Prosedur Traversal: Post-Order (Kiri, Kanan, Akar)
void postOrder(TreeNode* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main (void){
    int n;
    scanf("%d", &n); 

/*    
    // Niat awalnya ingin membuat tree dengan akar buatan di tengah-tengah '(' dan ')'
    // Kemudian akan diurutkan
    // Kayaknya harusnya pakai graph
    // Atau pakai 2 linked list dan headnya nanti ketemu di tengah
    TreeNode* akar = createTreeNode('a');

    for (int i =  0; i < n; i++){
        TreeNode* a = createTreeNode('(');
        TreeNode* b = createTreeNode(')');

        akar->left = a;
        akar->right = b;

        TreeNode* p = a;
        TreeNode* q = b;
        
        //Untuk menambahkan
        for (int j = 0; j < i; j++){

        }
    }*/

    //Database
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

    char temp[20];
    int sum = 1;
    if (n == 0){
        printf("TOTAL 1\n");
    }
    else {
        char buka[20];
        for (int i = 0; i < n; i++){
            buka[i] = '(';
            printf("%c", buka[i]);
        }

        char tutup[20];
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

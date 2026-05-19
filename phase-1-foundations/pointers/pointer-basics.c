#include <stdio.h>

/**
 * Programme de base sur les pointeurs
 */
int main() {
    int num = 10;

    printf("Valeur de num : %d\n", num);
    printf("Adresse de num : %p\n", &num);

    int *p = &num;

    printf("Valeur via pointeur avant modification : %d\n", *p);

    *p = 20;

    printf("Nouvelle valeur de num : %d\n", num);
    printf("Valeur via pointeur après modification : %d\n", *p);

    return 0;
}
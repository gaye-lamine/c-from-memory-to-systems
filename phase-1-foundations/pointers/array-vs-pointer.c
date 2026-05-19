#include <stdio.h>

int main() {
    int tab[5] = {10, 20, 30, 40, 50};

    int *ptr = tab;

    printf("tab        : %p\n", tab);
    printf("&tab[0]    : %p\n", &tab[0]);
    printf("ptr        : %p\n\n", ptr);

    printf("tab[0]     = %d\n", tab[0]);
    printf("*ptr       = %d\n\n", *ptr);

    if (tab[0] == *ptr) {
        printf("OK: tab[0] == *ptr\n\n");
    }

    printf("Acces via pointeur:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nVerification notation:\n");
    printf("tab[2]     = %d\n", tab[2]);
    printf("*(tab + 2) = %d\n", *(tab + 2));

    return 0;
}
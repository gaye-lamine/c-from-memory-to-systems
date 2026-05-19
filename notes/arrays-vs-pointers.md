# Arrays vs Pointers in C

## Concept clé
Un tableau (array) et un pointeur sont liés, mais ne sont pas identiques.

---

## Relation fondamentale

En C :

tab[i] == *(tab + i)
tab == &tab[0]

 L’indexation est une opération sur pointeur.

---

## Exemple

```c
int tab[3] = {10, 20, 30};

int *p = tab;

printf("%d\n", tab[0]);     // 10
printf("%d\n", *p);         // 10
printf("%d\n", *(p + 1));   // 20

## À retenir

 Un tableau se comporte comme un pointeur vers son premier élément dans les expressions.

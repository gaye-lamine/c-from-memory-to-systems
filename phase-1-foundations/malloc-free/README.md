# malloc-free

Objectif :
Comprendre comment fonctionne la mémoire dynamique en C (heap), et apprendre à gérer correctement l’allocation et la libération de mémoire.

---

# Exercices

## basic-allocation.c
Créer un programme qui :
- alloue un entier avec malloc
- vérifie si l’allocation a réussi
- stocke une valeur dans la mémoire allouée
- affiche cette valeur
- libère la mémoire avec free
- met le pointeur à NULL après free

---

## calloc-vs-malloc.c
Créer un programme qui :
- alloue un tableau de 5 entiers avec malloc
- alloue un tableau de 5 entiers avec calloc
- affiche les valeurs des deux tableaux
- observe la différence d’initialisation
- libère les deux blocs mémoire

---

## dynamic-arrays.c
Créer un programme qui :
- demande une taille (fixe dans le code ou via variable)
- alloue dynamiquement un tableau d'entiers
- remplit le tableau avec des valeurs
- affiche les valeurs
- libère la mémoire
- (bonus) réalloue avec realloc pour agrandir le tableau

---

## memory-leaks.c
Créer un programme qui :
- alloue de la mémoire avec malloc
- oublie volontairement de free dans un cas
- crée plusieurs allocations successives
- observer le comportement avec valgrind
- corriger ensuite toutes les fuites

---

## use-after-free.c
Créer un programme qui :
- alloue une zone mémoire avec malloc
- libère cette mémoire avec free
- tente d’accéder à cette mémoire après free
- observe le comportement (undefined behavior)
- vérifier avec valgrind ou gdb

---

# À maîtriser à la fin

- différence stack vs heap (pratique)
- fonctionnement de malloc / calloc / realloc / free
- gestion correcte de la mémoire dynamique
- détection de memory leaks
- compréhension du undefined behavior mémoire

---

# Règles importantes

- toute mémoire allouée doit être libérée
- après free, un pointeur doit être considéré invalide
- toujours vérifier malloc (NULL)
- utiliser valgrind régulièrement

---

# Objectif final du module

Être capable de :
- écrire du code sans fuite mémoire
- comprendre exactement où est stockée chaque donnée
- anticiper les erreurs mémoire avant qu’elles arrivent
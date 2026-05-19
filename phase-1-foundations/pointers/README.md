# Pointers

Objectif :
Comprendre comment la mémoire est manipulée via les pointeurs en C.

---

# Exercices

## pointer-basics.c
Créer un programme qui :
- déclare un int
- affiche sa valeur
- affiche son adresse
- crée un pointeur vers cet int
- modifie la valeur via le pointeur
- affiche le résultat final

---

## array-vs-pointer.c
Créer un programme qui :
- déclare un tableau d'entiers
- affiche l'adresse du tableau et du premier élément
- compare avec un pointeur sur le tableau
- montre que arr == &arr[0]
- montre l'accès aux éléments via pointeur

---

## pointer-arithmetic.c
Créer un programme qui :
- parcourt un tableau avec un pointeur
- affiche chaque valeur et son adresse
- montre que p + 1 avance selon sizeof(type)

---

## double-pointers.c
Créer un programme qui :
- modifie une variable via une fonction
- utilise un int**
- explique pourquoi un simple int* ne suffit pas

---

## dangling-pointers.c
Créer un programme qui :
- crée un pointeur vers une variable locale
- utilise ce pointeur après la sortie du scope
- observe un comportement indéfini
- (optionnel) vérifier avec gdb

---

# À maîtriser à la fin

- compréhension des adresses mémoire
- différence stack / heap (introduction)
- pointeurs simples et doubles
- arithmétique de pointeur
- comportements indéfinis (UB)
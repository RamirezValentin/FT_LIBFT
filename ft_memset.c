#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    unsigned int i = 0;            // utilisation de unsigned int pour que ca fonctionne avec size_t lors de i < n
    while(i < n) {
        p[i] = (unsigned char)c;
        i++;
    }
    return s;
}

// int main() {
//     char buffer[50];
//     ft_memset(buffer, 'A', sizeof(buffer));
//     buffer[sizeof(buffer) - 1] = '\0'; // Fait que le tampon est terminé par null
//     printf("%s\n", buffer);
//     return 0;
// }
////EXPLICATZION MAIN //////////
// MOI : Voici le descriptif de memset. quand il disent ca : "the memory area pointed to by s " ca veut dire quoi exactement ? explique moi comment la mémoire fonctionne et du coup ce que représente le pointeur s. explique moi vraiment tout en détails

// GitHub Copilot
// Un pointeur est une variable qui stocke l'adresse d'une autre variable. En C, la mémoire de l'ordinateur est organisée comme un grand tableau de bytes. Chaque byte a une adresse unique, qui est un nombre entier. Un pointeur stocke l'une de ces adresses, donc il "pointe" vers un emplacement spécifique en mémoire.

// Quand on dit "the memory area pointed to by s", cela signifie l'emplacement en mémoire où la variable s pointe. Si s est un pointeur vers un byte en mémoire, alors s pointe vers cet emplacement en mémoire. Si s est un pointeur vers un tableau, alors s pointe vers le premier élément du tableau.

// Dans le contexte de la fonction memset, s est un pointeur vers la première byte d'une zone de mémoire que vous voulez remplir avec une certaine valeur. La fonction memset va à l'adresse mémoire que s pointe, et remplit n bytes à partir de cet emplacement avec la valeur c.

// Par exemple, si vous avez un tableau de 50 caractères, et que vous passez un pointeur vers le début de ce tableau à memset, avec n égal à 50 et c égal à 'A', alors memset remplira le tableau avec le caractère 'A'.

// Il est important de noter que les pointeurs en C sont très puissants, mais aussi très dangereux. Si vous faites une erreur avec un pointeur (par exemple, en écrivant à une adresse mémoire que vous n'êtes pas censé), vous pouvez causer des bugs très difficiles à déboguer, ou même faire crasher votre programme. C'est pourquoi il est très important de toujours être très prudent lorsque vous travaillez avec des pointeurs.



// Il est aussi possible de le faire avec un tableau de int (array) à la place du char buffer. ca donnerais ca : 
// #include <stdio.h>

// void *ft_memset(void *s, int c, size_t n) {
//     unsigned char *p = s;
//     unsigned int i = 0;
//     while(i < n) {
//         p[i] = (unsigned char)c;
//         i++;
//     }
//     return s;
// }

// int main() {
//     int buffer[50];
//     ft_memset(buffer, 'A', sizeof(buffer));
//     for (int i = 0; i < 50; i++) {
//         printf("%d ", buffer[i]);
//     }
//     printf("\n");
//     return 0;
// }


// sizeof(buffer) serait de 200 octets car 50 x 4. et apres on doit ajouter une boucle for car avant c'etait comme une string donc ca printait direct tout. mais la c'est une array donc pas une string


///////////////fin explication main ///////

//autre façon de la fair :
// #include <stddef.h>

// void *ft_memset(void *s, int c, size_t n) {
//     unsigned char *p = s;
//     while(n--) {
//         *p++ = (unsigned char)c;
//     }
//     return s;
// }



// sizeof(char)        // 1 octet
// sizeof(short)       // 2 octets
// sizeof(int)         // 4 octets
// sizeof(long)        // 8 octets
// sizeof(long long)   // 8 octets
// sizeof(float)       // 4 octets
// sizeof(double)      // 8 octets
// sizeof(long double) // 16 octets
// sizeof(void*)       // 8 octets (sur une architecture 64 bits)


//////////////////////////////////////////EXPLICATGION 1 ///////////////////////////////


// MOI : Pourquoi il faut passer par un unsigned char ? on ne peut pas passer par autre chose ?

// GitHub Copilot
// La raison pour laquelle on utilise unsigned char dans memset est liée à la façon dont les données sont stockées en mémoire en C.

// En C, un char est le plus petit type de données adressable et occupe généralement 1 octet de mémoire. Cela signifie que si vous avez un pointeur vers un char, vous pouvez accéder à chaque octet individuel de la mémoire.

// Lorsque vous utilisez memset, vous voulez généralement remplir un bloc de mémoire avec une certaine valeur, octet par octet. C'est pourquoi vous convertissez le pointeur void * en unsigned char *: cela vous permet d'accéder à chaque octet de la mémoire et de le remplir avec la valeur c.

// Pourquoi unsigned char et non char? Parce que memset est censé remplir la mémoire avec la valeur c interprétée comme un unsigned char. Cela signifie que si c est une valeur négative, elle sera convertie en une valeur positive correspondante dans le bloc de mémoire. Par exemple, si c est -1, alors chaque octet du bloc de mémoire sera rempli avec 255 (la représentation unsigned char de -1).

// En théorie, vous pourriez utiliser un autre type de données pour remplir la mémoire, mais cela ne serait pas aussi précis et pourrait conduire à des comportements inattendus. Par exemple, si vous utilisiez un int * au lieu d'un unsigned char *, vous rempliriez la mémoire par blocs de 4 octets (sur une machine où int est de 4 octets), ce qui n'est probablement pas ce que vous voulez.



///////////////////EXPLICATION 2 /////////////////////////////////////


// MOI : mais avant tu as dit " *p[i] : Cela causerait une erreur de compilation car p[i] est un unsigned char, pas un pointeur. Vous ne pouvez pas déréférencer un unsigned char." alors pourquoi maintenant on peut déréférencer un unsigned char

// GitHub Copilot
// Je m'excuse pour la confusion. Lorsque je disais "Vous ne pouvez pas déréférencer un unsigned char", je voulais dire que vous ne pouvez pas utiliser l'opérateur de déréférencement * sur un unsigned char comme si c'était un pointeur.

// Dans le contexte de *p[i], cela impliquerait que p[i] est un pointeur, ce qui n'est pas le cas ici. p[i] est un unsigned char, pas un pointeur.

// Cependant, dans le contexte de *p, p est un pointeur, donc *p déréférence le pointeur, c'est-à-dire qu'il accède à la valeur à laquelle p pointe.

// Donc, pour résumer :

// *p est correct car p est un pointeur, et *p accède à la valeur à laquelle p pointe.
// p[i] est correct car cela accède à l'i-ème unsigned char à partir de p.
// *p[i] serait incorrect car cela impliquerait que p[i] est un pointeur, ce qui n'est pas le cas.




///////////////// EXPLICATION 3//////////

// MOI : unsigned char *p = s; quand on met ca qu'est ce qui est un unsigned char ? *p ou s ?

// GitHub Copilot
// Dans cette ligne de code unsigned char *p = s;, p est déclaré comme un pointeur vers un unsigned char.

// Cela signifie que p est un pointeur qui est censé pointer vers un unsigned char. Lorsque vous déréférencez p avec *p, vous obtenez un unsigned char (car définit dans le code).

// La variable s est un pointeur void, ce qui signifie qu'elle peut pointer vers n'importe quel type de données. Dans cette ligne de code, vous affectez s à p, ce qui signifie que vous faites pointer p vers la même adresse que s. Cependant, puisque p est un pointeur vers un unsigned char, vous traitez les données à cette adresse comme si elles étaient un unsigned char.

// Donc, pour répondre à votre question, *p est un unsigned char, tandis que s est simplement un pointeur vers l'adresse de la mémoire qui est maintenant traitée comme si elle contenait un unsigned char.




////// explication 4 /////////

// Moi : p[i] = (unsigned char)c; quand on fait ca on passe c d'un int à un unsigned char ?

// GitHub Copilot
// Oui, c'est exact. Dans cette ligne de code p[i] = (unsigned char)c;, vous convertissez c, qui est un int, en unsigned char.

// Le (unsigned char)c est une opération de cast. Cela signifie que vous dites explicitement au compilateur de traiter c comme un unsigned char pour cette opération.

// Si c est une valeur qui peut être représentée comme un unsigned char (c'est-à-dire une valeur entre 0 et 255), alors elle sera simplement réduite à cette valeur. Si c est une valeur en dehors de cette plage, alors le résultat sera c modulo 256, qui est la plage de valeurs qu'un unsigned char peut représenter.

// Par exemple, si c est 257, alors (unsigned char)c serait 1, car 257 modulo 256 est 1.


//////// MOI : les parenthèse sont necessaire dans la notation ?

//// GitHub Copilot
// Oui, les parenthèses sont nécessaires lors de l'utilisation de la notation de cast en C. Elles indiquent au compilateur que vous voulez convertir la valeur qui suit en le type spécifié.

// Par exemple, dans (unsigned char)c, les parenthèses autour de unsigned char indiquent que vous voulez convertir c en unsigned char. Sans les parenthèses, le compilateur ne comprendrait pas que vous essayez de faire un cast.

// Voici un exemple de code qui illustre cela :

// Dans ce code, c est un int qui vaut 257. Lorsque nous faisons (unsigned char)c, nous convertissons c en unsigned char, ce qui donne 1, car 257 modulo 256 est 1. Nous stockons ensuite cette valeur dans uc.


///////////////////////explication 5/////////////////

// MOI : ca se passe dans la stack ou la heap ?

// GitHub Copilot
// La fonction ft_memset que vous avez écrite opère sur un bloc de mémoire qui lui est passé en argument. Que ce bloc de mémoire se trouve dans la pile (stack) ou le tas (heap) dépend de l'endroit où il a été alloué dans le code qui appelle ft_memset.

// Par exemple, si vous appelez ft_memset comme ceci :

// Dans ce cas, ft_memset opère sur un tableau alloué sur la pile.

// Mais si vous l'appelez comme ceci :

// Dans ce cas, ft_memset opère sur un tableau alloué sur le tas.

// Donc, que ft_memset opère sur la pile ou le tas dépend de comment et où le bloc de mémoire passé à ft_memset a été alloué.
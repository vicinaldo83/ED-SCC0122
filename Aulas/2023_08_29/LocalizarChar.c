/*LocalizarChar.c*/

#include <stdio.h>

char *acharchar (char *str, char target) {
    char *p;
    p = str;

    for (p =str; p != '\0'; p++ ) {
        if (*p == target) {
            break;
        }
    }

    return *p ? p : NULL;
}

int main() {
    char str[] = "abcd5678";
    char target = 'c';

    char *p = acharchar(str, target);
    printf("valor: %c - ponteiro: %p", *p, p);

    int mano = 0;
    return 0;
}
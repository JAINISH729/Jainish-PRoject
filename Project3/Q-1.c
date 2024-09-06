#include <stdio.h>

int main() {
    char c = 'a';
    int i = 0;

    do {
        printf("%c, ", c);
        c = c + 4; 
        i++;
    } while (i < 26/4); \

    return 0;
}
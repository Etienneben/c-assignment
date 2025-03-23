#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *x, int n, int seed);
int main() {
    int deck[] = {
        1, 1, 1, 1,
        2, 3, 4, 2,
        3, 3, 3, 3,
        4, 4, 4, 4,
        5, 5, 5, 5,
        6, 6, 6, 6,
        7, 7, 7, 7,
        8, 8, 8, 8,
        9, 9, 9, 9,
        10, 10, 10, 10,
        11, 11, 11, 11,
        12, 12, 12, 12,
        13, 13, 13, 13,
    };
    shuffle(deck, 52, -1);
    for (int i = 0; i < 52; i++) {
        printf("%d\n", deck[i]);
    }
}
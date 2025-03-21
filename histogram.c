#include <stdio.h>
#include <math.h>

// prints a histogram given 
void histogram(int *x, double *y, int n, int width) { 
    int maxValue = *y;
    for (int i = 1; i < n; i++) {
        if (maxValue < *(y + i)) {
            maxValue = *(y + i);
        }
    }

    for (int j = 0; j < n; j++) {
        int stars = round(((double)width / (double)maxValue) * *(y + j)); // calculates number of stars needed for each percentage
        printf("%d ", *(x + j));
        for (int k = 1; k <= stars; k++) {
            printf("*");
        }
        printf(" %.1lf\n", *(y + j));
    }
}

/*
Write another function int *histogram
 lengths(char **strings, int n) that, given an array
 of n strings strings, returns an array of integers, H, where H[i] is the number of times that strings
 of length i occurred in strings.
*/

int *histogram_lengths(char **strings, int n) {
    
}
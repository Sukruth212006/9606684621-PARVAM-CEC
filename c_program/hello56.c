//generatea numerical pattern 5 4 3 2 1             5 4 3 2 1        
                              4 3 2 1                4 3 2 1 
                              3 2 1                    3 2 1
                              2 1                        2 1
                              1                            1  

                              
                              1                            1
                              1 2                        1 2 
                              1 2 3                    1 2 3
                              1 2 3 4                1 2 3 4
                              1 2 3 4 5            1 2 3 4 5 
#include <stdio.h>

int main() {
    int i, j;

    // First pattern (Countdown)
    for (i = 5; i >= 1; i--) {
        // Print leading spaces for right alignment
        for (j = 5; j > i; j--) {
            printf("  "); // Two spaces for alignment
        }
        // Print countdown numbers
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        // Print spaces between the two patterns
        printf("             "); // Space between patterns
        // Print the same countdown numbers again
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n"); // New line between the two patterns

    // Second pattern (Countup)
    for (i = 1; i <= 5; i++) {
        // Print leading spaces for right alignment
        for (j = 5; j > i; j--) {
            printf("  "); // Two spaces for alignment
        }
        // Print countup numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Print spaces between the two patterns
        printf("             "); // Space between patterns
        // Print the same countup numbers again
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
        return 0;
}


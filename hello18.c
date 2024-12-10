//C PROGRAM TO GENRATE FIBONACCI SERIES OF N NUMBER OF TERMS
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long f1 = 0, f2 = 1, f0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 0; i < n; i++) {
        if (i <= 1) {
             f0 = i;
        } else {
            f0 = f1 + f2;
            f1= f2;
            f2 = f0;
        }
        printf("%llu ", next);
    }
    return 0;
}

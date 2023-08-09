#include <stdio.h>

int main() {
    int n;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print the table
    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

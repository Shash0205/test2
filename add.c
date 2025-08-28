#include <stdio.h>

fibonacci(){
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // For the first two terms (0 and 1)
        } else {
            next = first + second; // Calculate the next term
            first = second;        // Update first to the previous second
            second = next;         // Update second to the newly calculated next
        }
        printf("%d ", next);
    }

    printf("\n"); // Newline for better formatting
    //return 0;
}

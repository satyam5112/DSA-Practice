#include <stdio.h>

int main() {
    int rows, i, j, k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate over each row
    for (i = 0; i < rows; i++) {
        // Print spaces
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) 
    {
        for (j = rows-1; j > i; j--) 
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

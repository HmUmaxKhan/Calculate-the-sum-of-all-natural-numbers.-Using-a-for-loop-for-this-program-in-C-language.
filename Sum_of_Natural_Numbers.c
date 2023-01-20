#include <stdio.h> // SUM OF NATURAL NUMBERS
int main() {

// Initialize the Variables
    int n, i, sum = 0;

// Enter the number which sum you want to know 
    printf("Enter a natural number:\n");

//Take input from the user
    scanf("%d", &n);

// Using for loop
    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
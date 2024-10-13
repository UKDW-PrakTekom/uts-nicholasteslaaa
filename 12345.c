#include <stdio.h>

int main() {
    int user_input, result = 0;

    // Take input from user
    scanf("%d", &user_input);

    // Calculate the sum of integers from 1 to user_input
    for (int i = 1; i <= user_input; i++) {
        result += i;
    }

    // Print the result
    printf("%d", result);

    return 0;
}

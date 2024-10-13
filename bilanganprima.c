#include <stdio.h>

int main() {
    int inpt, base = 0, result;

    // Take input from user
    scanf("%d", &inpt);

    // Loop from 2 to inpt and check divisibility
    for (int i = 2; i <= inpt; i++) {
        if (inpt % i == 0) {
            base += 1;
        }
    }

    // Determine the result (1 if base == 1, else 0)
    result = (base == 1) ? 1 : 0;

    // Print the result
    printf("%d\n", result);

    return 0;
}

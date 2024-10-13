#include <stdio.h>

int main() {
    int item, jumlah;

    printf("Enter item: ");
    scanf("%d", &item);

    printf("Enter jumlah: ");
    scanf("%d", &jumlah);

    if (item == 0) {
        printf("%d\n", jumlah * 3);
    } else if (item == 1) {
        printf("%d\n", jumlah * 5);
    }

    return 0;
}

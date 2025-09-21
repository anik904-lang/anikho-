#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    double price;
    if (X == 1) price = 4.00;
    else if (X == 2) price = 4.50;
    else if (X == 3) price = 5.00;
    else if (X == 4) price = 2.00;
    else if (X == 5) price = 1.50;

    double total = price * Y;
    printf("Total: R$ %.2lf\n", total);

    return 0;
}

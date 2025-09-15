#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coinsVal[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int coinCents[] = {100, 50, 25, 10, 5, 1};

    int value = (int)N;
    int cents = (int)((N - value) * 100 + 0.5);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int x = value / notes[i];
        printf("%d nota(s) de R$ %d.00\n", x, notes[i]);
        value %= notes[i];
    }

    cents += value * 100;

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int y = cents / coinCents[i];
        printf("%d moeda(s) de R$ %.2f\n", y, coinsVal[i]);
        cents %= coinCents[i];
    }

    return 0;
}

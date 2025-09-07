#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int Maior = (a + b + abs(a - b)) / 2;
    Maior = (Maior + c + abs(Maior - c)) / 2;
    printf("%d eh o maior\n", Maior);
    return 0;
}

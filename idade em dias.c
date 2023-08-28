#include <stdio.h>

int main() {
    int idade;
    scanf("%d", &idade);

    int anos = idade / 365;
    int diasrestantes = idade % 365;
    int meses = diasrestantes / 30;
    int dias = diasrestantes % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}

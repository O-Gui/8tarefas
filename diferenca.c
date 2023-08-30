// link do beecrowd https://www.beecrowd.com.br/judge/en/runs/code/35252878

#include <stdio.h>

int main() {
    int A;
	int B;
	int C;
	int D;
    int diferenca;

    printf("Digite quatro numeros (A B C D): \n");
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

   diferenca = (A * B) - (C * D);

    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}

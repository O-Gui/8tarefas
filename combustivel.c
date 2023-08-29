// link do beecrowd https://www.beecrowd.com.br/judge/en/runs/code/35249119

#include <stdio.h>

int main() {
    int distancia;
    float combustivelgasto;

    scanf("%d", &distancia);

    scanf("%f", &combustivelgasto);

   
    float consumomedio = distancia / combustivelgasto;

  
    printf("%.3f km/l\n", consumomedio);

    return 0;
}

// link do beecrowd https://www.beecrowd.com.br/judge/en/runs/code/35209853

#include <stdio.h>

    int main() {

    int segundos;
    int horas;
    int minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos %= 3600;
    minutos = segundos / 60;
    segundos %= 60;

   
    printf("%d:%d:%d\n", horas, minutos, segundos);


  return 0;
}

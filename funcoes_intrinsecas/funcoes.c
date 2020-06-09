#include <stdio.h>
#include <math.h>

int main() {
    float numero = 2.3;
    int numeroNegativo = -12;
    float potencia = 0.0;
    
    // Arredonda o número real para cima.
    numero = ceil(numero);
    printf("%f\n", numero);

    // Exibe o valor absoluto.
    numeroNegativo = abs(numeroNegativo);
    printf("%i\n", numeroNegativo);

    // Calcula a potência.
    potencia = pow(2, 3);
    printf("%f\n", potencia);

    // Mostra a raiz quadrada do número.
    printf("%f\n", sqrt(9));

    // Valor de PI
    printf("%f\n", M_PI);
}

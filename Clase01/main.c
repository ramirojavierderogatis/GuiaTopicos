/// DIRECTIVAS AL PRE-COMPILADOR
#include "matematicas.h"
#define RESTA(a, b) ((a) - (b))

/// FUNCIÓN MAIN
int main()
{
    int variable1 = 5, variable2 = 4, rta = 0, rta2 = 0;
    int *pVarible1 = &variable1;

    float variable3 = 7.3;
    rta = suma(variable1, variable2);
    printf("El resultado de la suma es %d\n", rta);
    printf("Resta: %.2f\n", RESTA(rta, variable3));
    /// PARTE DE PUNTEROS
    printf("Valor original: %d\n", variable1);
    rta2 = cambia_valor(pVarible1);
    printf("Valor cambiado: %d\n", rta2);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

#define MAX_NOMBRE 100

// Función para validar la entrada de la edad
bool validarEdad(int *edad) {
    printf("Introduzca su edad: ");
    if (scanf("%d", edad) != 1) {
        printf("Edad no válida. Intente nuevamente.\n");
        // Limpiamos el búfer de entrada en caso de que haya ocurrido un error en la lectura
        while (getchar() != '\n');
        return false;
    }
    return true;
}

int main() {
    char nombre[MAX_NOMBRE + 1]; // +1 para el carácter nulo \0

    int edad;
    bool edad_valida = false;

    printf("Introduzca su nombre (%d letras máximo): ", MAX_NOMBRE);
    scanf("%"  xstr(MAX_NOMBRE) "s", nombre);

    // Validamos la entrada de la edad hasta que sea un número válido
    while (!edad_valida) {
        edad_valida = validarEdad(&edad);
    }

    printf("Hola mucho gusto, %s\n", nombre);

    if (edad >= 70) {
        printf("Ya mero te mueres\n");
    } else {
        printf("Ya puedes votar\n");
    }

    return 0;
}

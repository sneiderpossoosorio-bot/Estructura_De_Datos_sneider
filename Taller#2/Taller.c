// Inclusión de librería estándar para printf y scanf
#include <stdio.h>

typedef struct {
    int codigo;
    float nota;
} Estudiante;

#define NUM_ESTUDIANTES 6

Estudiante estudiantes[NUM_ESTUDIANTES] = {
    {2024101, 4.5},
    {2024102, 3.2},
    {2024103, 2.9},
    {2024104, 4.0},
    {2024105, 3.8},
    {2024106, 4.7}
};
// Función para mostrar estudiantes
void mostrarEstudiantes(const Estudiante arr[], int n) {
    printf("\nCod\tNota\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%.2f\n", arr[i].codigo, arr[i].nota);
}

// Opciones del menú
enum OpcionesMenu {
    NOTA_MAX = 1,
    PROMEDIO,
    ORDENAR_COD,
    MOSTRAR,
    SALIR
};

int mostrarMenu() {
    int op;
    printf("\n=== MENÚ ===\n");
    printf("1. Nota máxima (recursivo)\n");
    printf("2. Promedio (recursivo)\n");
    printf("3. Ordenar por código (Selection Sort Recursivo)\n");
    printf("4. Mostrar estudiantes\n");
    printf("5. Salir\n");
    printf("Opción: ");
    scanf("%d", &op);
    return op;
}

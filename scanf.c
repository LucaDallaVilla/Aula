#include <stdio.h>

int main() {
    int x;
    int y;

    int n = scanf("%d %d", &x, &y);
    // n mi indica se l'utente ha inserito i dati correttamente
    // se l'utente inserisce un numero decimale, viene convertito
    // in int e n assume valore positivo

    printf("Scanf con successo: %d\n", n);
    printf("Numeri: %d, %d\n", x, y);
}
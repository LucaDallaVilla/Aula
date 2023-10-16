#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a, b;
    printf("Inserisci due numeri: ");
    scanf("%d%d", &a, &b);

    // a) dati i due interi a e b, stampa 1 se il primo intero 
    //    è multiplo del secondo, 0 altrimenti;

    // b) dato l'intero a (un voto), stampa "true" se a 
    //    è compreso fra 1 e 30 (inclusi), "false" altrimenti;

    bool b1 = a > 10;
    bool b2 = b <= 5;
    // c) dati i due booleani b1 e b2, stampa a video il booleano 
    //    "false" se b1 e b2 sono entrambi veri, "true" altrimenti;

    // d) dati i due interi a e b, stampa a video il massimo; se sono 
    //    uguali stampa a video "I due valori sono uguali".

    int c = 20;
    // e) dati tre interi a, b e c, stampa a video il massimo 
    //    (si usi una variabile di supporto max); 

    // f) dati tre interi a, b e c, stampa a video "ordinati" se questi sono 
    //    ordinati in modo crescente, altrimenti non stampare nulla.
}

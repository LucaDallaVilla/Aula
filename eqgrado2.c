#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

struct Soluzioni {
    double x1;
    double x2;
};

struct Soluzioni calc() {
    int a, b, c, delta;
    double x1, x2;

    printf("Inserisci i vari valori.\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4*a*c;
    if (delta < 0) {
        printf("Il delta e' negativo, non ci sono soluzioni in R.\n");
        struct Soluzioni soluzioni = {0.0, 0.0};
        return soluzioni;
    }

    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);

    struct Soluzioni soluzioni = {x1, x2};
    return soluzioni;
}

int main() {
    int run = 1;
    strin answer;
    printf("Continuare? (si/no)");
    scanf("%s", &answer);
    if (answer == "no") {
        run = 0;
    }

    while (run) {
        struct Soluzioni soluzioni = calc();
        printf("Soluzioni: %f, %f", soluzioni.x1, soluzioni.x2);
        return 0;
    }
}
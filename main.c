#include "foret.h"

int main() {
    Foret foret;
    Enfants enfants;
    initialiserForet(foret);
    initialiserEnfants(enfants, foret);
    faireVivreForet(foret, enfants);
    return 0;
}
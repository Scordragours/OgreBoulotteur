#include "foret.h"

int main() {
    Foret foret;
    Enfants enfants;
    Ogre ogre;
    initialiserForet(foret);
    initialiserEnfants(enfants, foret);
    initialiserOgre(&ogre, foret);
    faireVivreForet(foret, enfants, &ogre);
    return 0;
}
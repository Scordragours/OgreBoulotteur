//
// Created by scordragours on 22/09/2020.
//
#define FORET_HAUTEUR 30
#define FORET_LONGUEUR 30

#define SOL ' '
#define ARBRE '%'
#define DENSITE 5

typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

void afficherForet(Foret foret);
void initialiserForet(Foret foret);
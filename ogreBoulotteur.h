//
// Created by scordragours on 25/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FORET_HAUTEUR 30
#define FORET_LONGUEUR 30

#define SOL ' '
#define ARBRE '%'
#define DENSITE 5

#define CharEnfant 'a'
#define NombreEnfants 5

typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

typedef struct Enfant{
    int X, Y;
} Enfant;

typedef Enfant Enfants[NombreEnfants];

typedef enum Direction{
    HAUT,
    DROITE,
    BAS,
    GAUCHE
} Direction;
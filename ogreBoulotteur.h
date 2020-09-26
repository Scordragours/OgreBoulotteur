//
// Created by scordragours on 25/09/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef OGREBOULOTTEUR_H_INCLUDED
#define OGREBOULOTTEUR_H_INCLUDED

#define FORET_HAUTEUR 15
#define FORET_LONGUEUR 15

#define SOL ' '
#define ARBRE '%'
#define DENSITE 5

#define CharEnfant 'A'
#define CharOgre 'O'
#define CharMort '+'
#define NombreEnfants 5

typedef char Foret[FORET_HAUTEUR][FORET_LONGUEUR];

typedef enum Etat{
    VIVANT,
    MORT
} Etat;

typedef struct Enfant{
    int X, Y;
    Etat etat;
} Enfant;

typedef Enfant Enfants[NombreEnfants];

typedef struct Ogre{
  int X, Y;
} Ogre;

typedef enum Direction{
    HAUT,
    DROITE,
    BAS,
    GAUCHE
} Direction;

#endif
//
// Created by scordragours on 26/09/2020.
//
#include "ogre.h"

void initialiserOgre(Ogre *ogre, Foret foret){
    int x, y;
    do{
        x = rand() % FORET_LONGUEUR;
        y = rand() % FORET_HAUTEUR;
    }while (foret[y][x] != SOL);
    ogre->X = x;
    ogre->Y = y;
}


void deplacerOgre(Ogre *ogre, Foret foret){
    int X, Y;
    Direction direction;
    direction = rand() % 4;

    Y = ogre->Y;
    X = ogre->X;

    switch(direction){
        case HAUT:
            Y--;
            break;
        case BAS:
            Y++;
            break;
        case GAUCHE:
            X--;
            break;
        case DROITE:
            X++;
            break;
    }

    if(foret[Y][X] == SOL){
        ogre->X = X;
        ogre->Y = Y;
    }
}

Ogre *ogrePresent(Ogre *ogre, int X, int Y){
    if((ogre->X == X)&&(ogre->Y == Y)){
        return ogre;
    }else{
        return NULL;
    }
}
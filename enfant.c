//
// Created by scordragours on 25/09/2020.
//

#include "enfant.h"

void initialiserEnfants(Enfants enfants, Foret foret){
    for(int i = 0; i < NombreEnfants; i++){
        initialiserEnfant(&enfants[i], foret);
    }
}
void initialiserEnfant(Enfant *enfant, Foret foret){
    int x, y;
    do{
        x = rand() % FORET_LONGUEUR;
        y = rand() % FORET_HAUTEUR;
    }while (foret[y][x] != SOL);
    enfant->X = x;
    enfant->Y = y;
}

Enfant *isEnfantPresent(Enfants enfants, int x, int y){
    for(int i = 0; i < NombreEnfants; i++){
        if((enfants[i].X == x)&&(enfants[i].Y == y)){
            return &enfants[i];
        }
    }
    return NULL;
}

void deplacerEnfants(Enfants enfants, Foret foret){
    for(int i = 0; i < NombreEnfants; i++){
        deplacerEnfant(&enfants[i], foret);
    }
}
void deplacerEnfant(Enfant *enfant, Foret foret){
    int X, Y;
    Direction direction;
    direction = rand() % 4;

    Y = enfant->Y;
    X = enfant->X;

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
        enfant->X = X;
        enfant->Y = Y;
    }
}
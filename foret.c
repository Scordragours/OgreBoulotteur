//
// Created by scordragours on 22/09/2020.
//

#include "foret.h"

void afficherForet(Foret foret, Enfants enfants){
    int x, y;
    for(y=0; y < FORET_HAUTEUR; y++){
        for(x=0; x < FORET_LONGUEUR; x++){
            Enfant *enfant = isEnfantPresent(enfants, x, y);
            if(enfant != NULL){
                printf("%c", CharEnfant);
            }else{
                printf("%c", foret[y][x]);
            }
        }
        printf("\n");
    }
}

void initialiserForet(Foret foret){
    int x, y;
    srand(time(NULL));
    for(y=0; y < FORET_HAUTEUR; y++){
        for(x=0; x < FORET_LONGUEUR; x++){
            if((y == 0)||(y == FORET_HAUTEUR - 1)||(x == 0)||(x == FORET_LONGUEUR - 1)||(rand()%DENSITE == 0) ){
                foret[y][x] = ARBRE;
            }else{
                foret[y][x] = SOL;
            }
        }
    }
}
//
// Created by scordragours on 22/09/2020.
//
#include "ogreBoulotteur.h"

#ifndef ENFANT_H_INCLUDED
#define ENFANT_H_INCLUDED

void initialiserEnfants(Enfants enfants, Foret foret);
void initialiserEnfant(Enfant *enfant, Foret foret);
Enfant *isEnfantPresent(Enfants enfants, int x, int y);

void deplacerEnfants(Enfants enfants, Foret foret);
void deplacerEnfant(Enfant *enfant, Foret foret);

#endif
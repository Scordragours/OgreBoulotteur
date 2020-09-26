//
// Created by scordragours on 22/09/2020.
//
#include "ogreBoulotteur.h"
#include "enfant.h"
#include "ogre.h"

#ifndef FORET_H_INCLUDED
#define FORET_H_INCLUDED

void afficherForet(Foret foret, Enfants enfants, Ogre *ogre);
void initialiserForet(Foret foret);
void faireVivreForet(Foret foret, Enfants enfants, Ogre *ogre);

#endif
//
// Created by scordragours on 26/09/2020.
//
#include "ogreBoulotteur.h"

#ifndef OGRE_H_INCLUDED
#define OGRE_H_INCLUDED

void initialiserOgre(Ogre *ogre, Foret foret);
void deplacerOgre(Ogre *ogre, Foret foret, Enfants enfants);
void boulotterEnfants(Enfants enfants, Ogre *ogre);
Ogre *ogrePresent(Ogre *ogre, int X, int Y);

#endif
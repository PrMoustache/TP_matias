//
// Created by Matias on 26/09/2021.
//
#ifndef PARTIEL_TP_PORTEFEUILLE_H
#define PARTIEL_TP_PORTEFEUILLE_H
#include <iostream>
#include "actif.h"

using namespace std;

class Portefeuille
{
public:

    Portefeuille();
private:

    int nba, nbat;
    Actif actifs[10];
};

#endif //PARTIEL_TP_PORTEFEUILLE_H

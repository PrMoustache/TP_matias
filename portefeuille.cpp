//
// Created by Matias on 26/09/2021.
//

#include <iostream>
#include "actif.h"
#include "portefeuille.h"


Portefeuille::Portefeuille(int arg):
    nba(0),
    nbat(0)
{
    actifs = NULL;
}

Portefeuille::Portefeuille(const Portefeuille &source)
{
    //shallow copy
    //deep copy
    //copy par ref partagée
    this->nba = source.nba;
    this->nbat = source.nbat;
    // et pour actif
    //TODO implémenter la copie profonde de actif
}

Portefeuille::~Portefeuille()
{
    //descrution en fonction du type de copie
}

void Portefeuille::achatActif(std::string nom, double prix, int qte)
{
//    ajoute un nouvel actif en actifs[nba] ; nba est ensuite incrémenté ;
//    Attention : si l’actif existe déjà dans le portefeuille, il ne faut pas créer de
    //    nouvel actif, mais mettre à jour la quantité de l’actif existant ;
}

double Portefeuille::venteActif(string nom, int qte)
{

}

void Portefeuille::redimensionneTableauActifs(int nouvelleTaille)
{

}

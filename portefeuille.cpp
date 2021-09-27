//
// Created by Matias on 26/09/2021.
//

#include <iostream>
#include "actif.h"
#include "portefeuille.h"



Portefeuille::Portefeuille(int arg):
        nba(0),
        nbat(arg)
{
    this->actifs = new Actif[arg];
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
    //destruction en fonction du type de copie
}

void Portefeuille::achatActif(std::string nom, double prix, int qte)
{
    /* Ajoute un nouvel actif en actifs[nba] ; nba est ensuite incrémenté ;
    Attention : si l’actif existe déjà dans le portefeuille, il ne faut pas créer de
    nouvel actif, mais mettre à jour la quantité de l’actif existant ;*/
    int r=false;
    if(nba > 0){
        for(int i=0; i<= nba ; i++) {
            if(actifs[i].getNom()==nom) {
                actifs[i].setQuantiteTotal(actifs[i].getquantiteTotal()+qte);
                r=true;
            }
        }
        if(!r){
            std::cout << "Nba quand creation nouveau actif: " << nba << std::endl;
            actifs[nba]= Actif(nom,prix,qte);
            nba++;
        }


    } else {
        actifs[nba]= Actif(nom,prix,qte);
        nba++;
    }

}


//double Portefeuille::venteActif(std::string nom, int qte)
//{

//}

void Portefeuille::redimensionneTableauActifs(int nouvelleTaille)
{

}

void Portefeuille::afficherListeActif(){
    if(nba==0){
        std::cout << "Ce portefeuille possède aucun actif." << std::endl;
    } else {
        std::cout << "Liste des actifs:" << std::endl;
        std::cout << nba << std::endl;
        for (int i = 0; i < nba; i++) {
            std::cout << "Actif " << i + 1 << ":" << std::endl;
            actifs[i].afficher();
        }
    }
}

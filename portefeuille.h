//
// Created by Matias on 26/09/2021.
//
#ifndef PARTIEL_TP_PORTEFEUILLE_H
#define PARTIEL_TP_PORTEFEUILLE_H

#include <iostream>
#include "actif.h"


class Portefeuille
{
public:

    Portefeuille(int arg = 1);
    Portefeuille(const Portefeuille &source);
    ~Portefeuille();

    /**
     * @brief achatActif
     * @param nom
     * @param prix
     * @param qte
     */
    void achatActif(std::string nom, double prix, int qte);
    /**
     * @brief venteActif
     * @param nom nom de l'actif
     * @param qte quantité d'actif
     * @return valeur totale de ce qui a été vendue
     */
    double venteActif(std::string nom, int qte);

private :
    /**
     * @brief redimensionneTableauActifs réorganise le tbl actif si nba change
     * @param nouvelleTaille nouvelle valeur de nba après opération
     * @note nouvelleTaille ne peut être que >0
     */
    void redimensionneTableauActifs(int nouvelleTaille);


private:

    int nba; //Nombre d'actif différents
    int nbat; //Somme de tous les actifs confondus
    Actif *actifs; //Tableau de 'nbat' actifs
};

#endif //PARTIEL_TP_PORTEFEUILLE_H

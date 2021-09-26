//
// Created by Matias on 26/09/2021.
//

#ifndef PARTIEL_TP_ACTIF_H
#define PARTIEL_TP_ACTIF_H
#include <iostream>

using namespace std;

class Actif {
    int id, quantiteTotal;    
    string nom;
    double prixRevientUnitaire;
    static int idAttribut;

    Actif(Actif const& act);

public:
    Actif(string n, double PRU, int qtInit);
    int getId();
    string getNom();
    double getPrixUnitaire();
    int getPrixTotal();
    void setId(int i);
    void setNom(string n);
    void setquantiteTotal(int qt);
    void afficher();
    void vente(int quantDemander);
    void achat(int quantDemander);

};


#endif //PARTIEL_TP_ACTIF_H

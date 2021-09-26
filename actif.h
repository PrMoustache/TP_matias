//
// Created by Matias on 26/09/2021.
//
#include <iostream>
#ifndef PARTIEL_TP_ACTIF_H
#define PARTIEL_TP_ACTIF_H

#endif //PARTIEL_TP_ACTIF_H

using namespace std;

class Actif {
    int id, quantiteTotal;
    string nom;
    double prixRevientUnitaire;
    static int idAttribut;
    Actif(Actif const& act){
        this->id = act.idAttribut;
        this->nom = act.nom;
        this->prixRevientUnitaire = act.prixRevientUnitaire;
        this->quantiteTotal=0;
    }

public:
    Actif(string n, double PRU, int qtInit){
        this->id = idAttribut;
        this->nom = n;
        this->prixRevientUnitaire = PRU;
        this->quantiteTotal=qtInit;
        idAttribut++;
    };
    int getId(){
        return this->id;
    };
    string getNom(){
        return this->nom;
    };
    double getPrixUnitaire(){
        return this->prixRevientUnitaire;
    };
    int getPrixTotal(){
        return this->quantiteTotal;
    };

    void setId(int i){
        this->id=i;
    };
    void setNom(string n){
        this->nom = n;
    };
    void setquantiteTotal(int qt){
        this->quantiteTotal=qt;
    };

    void afficher(){
        cout << "Id de l'actif = " << this->id << "\n";
        cout << "Nom de l'actif = " << this->nom << "\n";
        cout << "prixRevientUnitaire de l'actif = " << this->prixRevientUnitaire << "\n";
        cout << "quantiteTotal de l'actif = " << this->quantiteTotal << "\n";
    };

    void vente(int quantDemander){
        int diff = this->quantiteTotal-quantDemander;
        cout << "\nVente de "<< quantDemander <<" actifs";
        if(diff<=0){
            cout << "\nPas assez d'actif\n";
        } else {
            this->quantiteTotal = diff;
            cout <<" \nNouveau solde = " << diff << "\n";
        }
    }
    void achat(int quantDemander){
        this->quantiteTotal = this->quantiteTotal+quantDemander;
        cout << "\nAchat de " << quantDemander << " actifs";
        cout <<"\nNouveau solde = " << this->quantiteTotal<<"\n";
    }

};
int Actif::idAttribut = 0;


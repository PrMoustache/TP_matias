//
// Created by Matias on 26/09/2021.
//

#include "actif.h"

Actif::Actif(string n, double PRU, int qtInit){
    this->id = idAttribut;
    this->nom = n;
    this->prixRevientUnitaire = PRU;
    this->quantiteTotal=qtInit;
    idAttribut++;
}

int Actif::getId(){
    return this->id;
}
string Actif::getNom(){
    return this->nom;
}
double Actif::getPrixUnitaire(){
    return this->prixRevientUnitaire;
}
int Actif::getPrixTotal(){
    return this->quantiteTotal;
}

void Actif::setId(int i){
    this->id=i;
}
void Actif::setNom(string n){
    this->nom = n;
}
void Actif::setquantiteTotal(int qt){
    this->quantiteTotal=qt;
}
void Actif::afficher(){
    cout << "Id de l'actif = " << this->id << "\n";
    cout << "Nom de l'actif = " << this->nom << "\n";
    cout << "prixRevientUnitaire de l'actif = " << this->prixRevientUnitaire << "\n";
    cout << "quantiteTotal de l'actif = " << this->quantiteTotal << "\n";
}

void Actif::vente(int quantDemander){
    int diff = this->quantiteTotal-quantDemander;
    cout << "\nVente de "<< quantDemander <<" actifs";
    if(diff<=0){
        cout << "\nPas assez d'actif\n";
    } else {
        this->quantiteTotal = diff;
        cout <<" \nNouveau solde = " << diff << "\n";
    }
}
void Actif::achat(int quantDemander){
    this->quantiteTotal = this->quantiteTotal+quantDemander;
    cout << "\nAchat de " << quantDemander << " actifs";
    cout <<"\nNouveau solde = " << this->quantiteTotal<<"\n";
}


int Actif::idAttribut = 0;


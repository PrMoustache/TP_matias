//
// Created by Matias on 26/09/2021.
//

#include "actif.h"

Actif::Actif(std::string nom, double PRU, int qtInit)
{
    int retour;

    //controle sur la longueur de nom
    if(nom.length()<1)
    {
        std::cerr<<"nom d actif incorrect"<<std::endl;
        return;
    }

    //Gestion de l'id si l'actif est déjà existant ou non
    for(int i=1;i<=idAttribut;i++)
    {
        if(nom.compare(idLUT[i]) == 0) {
            retour=i;
            break;
        } else {
            retour=-1;

        }
    }

    if(retour==-1){
        this->id = idAttribut;
        idLUT[idAttribut]=nom;
        idAttribut++;
    } else {
        this->id = retour;
    }
    this->nom = nom;
    this->prixRevientUnitaire = PRU;
    this->quantiteTotal=qtInit;
}

int Actif::getId(){
    return this->id;
}
std::string Actif::getNom(){
    return this->nom;
}
double Actif::getPrixUnitaire(){
    return this->prixRevientUnitaire;
}
unsigned int Actif::getPrixTotal(){
    return this->quantiteTotal;
}

int Actif::getquantiteTotal() {
    return this->quantiteTotal;
}

void Actif::setId(int i){
    this->id=i;
}
void Actif::setNom(std::string n){
    this->nom = n;
}
void Actif::setQuantiteTotal(unsigned int qt){
    this->quantiteTotal=qt;
}
void Actif::afficher()
{
    std::cout << "***************************"<< std::endl;
    std::cout << "Id[" << id <<"]"<< std::endl;
    std::cout << "Nom[" << nom <<"]"<< std::endl;
    std::cout << "Prix de revient :" << prixRevientUnitaire << std::endl;
    std::cout << "Quantitee totale: " << quantiteTotal << std::endl;
    std::cout << "***************************"<< std::endl;
}

void Actif::vente(unsigned int quantDemander)
{
    int diff = quantiteTotal-static_cast<int>(quantDemander);
    std::cout << "Vente de "<< quantDemander <<" actifs"<<std::endl;
    if(diff<=0){
        std::cout << "Pas assez d'actif"<<std::endl;
    } else {
        this->quantiteTotal = diff;
        std::cout <<" Nouveau solde = " << diff << std::endl;
    }
}
void Actif::achat(unsigned int quantDemander)
{
    quantiteTotal += quantDemander;
    std::cout << "Achat de " << quantDemander << " actifs"<<std::endl;
    std::cout <<"Nouveau solde = " << quantiteTotal<<std::endl;
}

Actif::Actif(){}


int Actif::idAttribut = 1;
std::string Actif::idLUT[] = {};


//
// Created by Matias on 26/09/2021.
//

#include "actif.h"

Actif::Actif(std::string nom, double PRU, int qtInit)
{
    //controle sur la longueur de nom
    if(nom.length()<1)
    {
        std::cerr<<"nom d actif incorrect"<<std::endl;
        return;
    }

    //Gestion de l'id
    for(int i=0;i<idAttribut;i++)
    {
        if(nom.compare(idLUT[i]))
        {
            break;
        }
    }

    this->nom = nom;

    this->prixRevientUnitaire = PRU;
    this->quantiteTotal=qtInit;

    this->id = idAttribut;
    idAttribut++;

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
        std::cout << "\nPas assez d'actif\n";
    } else {
        this->quantiteTotal = diff;
        std::cout <<" \nNouveau solde = " << diff << std::endl;
    }
}
void Actif::achat(unsigned int quantDemander)
{
    quantiteTotal += quantDemander;
    std::cout << "\nAchat de " << quantDemander << " actifs"<<std::endl;
    std::cout <<"\nNouveau solde = " << quantiteTotal<<std::endl;
}


int Actif::idAttribut = 0;


//
// Created by Matias on 26/09/2021.
//

#ifndef PARTIEL_TP_ACTIF_H
#define PARTIEL_TP_ACTIF_H
#include <iostream>
#include <string>

class Actif
{
    /**
     * @brief Actif construteur privé de recopie de la class Actif
     * @param act
     */
    Actif(Actif const& act);

    int id;
    unsigned quantiteTotal;
    std::string nom;
    double prixRevientUnitaire;

    static int idAttribut;
    static std::string idLUT[]; //Tableau de verrouillage entre "Id" et le nom de l'actif

public:
    /**
     * @brief Actif représente un actif
     * @param nom nom de l'actif un nom ne peut pas être vide (minimum 1 caractère affichable)
     * @param PRU prix de revient unitaire
     * @param qtInit quantité initiale
     */
    Actif(std::string nom, double PRU, int qtInit);
    /**
     * @brief getId
     * @return retourne l'id de l'actif
     */
    int getId();
    /**
     * @brief getNom
     * @return nom de l'actif
     */
    std::string getNom();
    /**
     * @brief getPrixUnitaire
     * @return prix unitaire en € de l'action
     */
    double getPrixUnitaire();
    /**
     * @brief getPrixTotal
     * @return valeur des actifs
     */
    unsigned int getPrixTotal();
    /**
     * @brief setId change l'id de l'actif
     * @param i
     */
    void setId(int i);
    /**
     * @brief setNom
     * @param n
     */
    void setNom(std::string n);
    /**
     * @brief setquantiteTotal
     * @param qt
     */
    void setQuantiteTotal(unsigned int qt);
    /**
     * @brief afficher affiche un résumé textuel de l'actif
     */
    void afficher();
    /**
     * @brief vente
     * @param quantDemander
     */
    void vente(unsigned int quantDemander);
    /**
     * @brief achat
     * @param quantDemander
     */
    void achat(unsigned int quantDemander);
    
    friend class Portefeuille;

};


#endif //PARTIEL_TP_ACTIF_H

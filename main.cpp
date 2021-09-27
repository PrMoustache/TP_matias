#include <iostream>
#include "actif.h"
#include "portefeuille.h"


int main() {
    /*Actif a("Orange",12.60,30);
    Actif b("Sfr",10.3,10);
    Actif c("Sfr",10.3,23);
    Actif d("Free",5.25,15);
    Actif e("Orange",13.6,20);

    a.afficher();
    b.afficher();
    c.afficher();
    d.afficher();
    e.afficher();
    */

    Portefeuille p(1);
    p.achatActif("Orange",12.50,15);
    p.achatActif("Sfr",15.3,10);
    p.achatActif("Free",4.50,13);
    p.achatActif("Orange",12.50,5);
    p.afficherListeActif();
    
    return 0;
}

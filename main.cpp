#include <iostream>
#include "actif.h"


int main()
{

    Actif A("Orange",12.50,15);
    Actif B("SFR",10.30,14);

    A.afficher();
    A.achat(13);

    A.afficher();
    A.vente(29);

    return 0;
}

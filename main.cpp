#include <iostream>
#include "actif.h"


int main(int argc,char **argv,char **env )
{

    Actif A("Orange",12.50,15);
    Actif B("SFR",10.30,14);
    Actif C("Orange",12.50,300);
    Actif D("",12.50,300);

    A.afficher();
    A.achat(13);
    A.afficher();
    A.vente(29);
    std::cout<<"-------------------"<<std::endl;
    B.afficher();
    B.achat(13);
    B.afficher();
    B.vente(29);
    std::cout<<"-------------------"<<std::endl;
    C.afficher();
    C.achat(13);
    C.afficher();
    C.vente(29);
    return 0;
}

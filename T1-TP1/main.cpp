#include <iostream>
#include<stdio.h>
#include  "dominios.h"

using namespace std;

int main()
{

    Idioma* ptr1;
    ptr1 = new Idioma;

    ptr1->getDisp();

    std::cout << "\n";

    ptr1->setIdioma("Indonesio");

    ptr1->getIdioma();


    std::cout << "\n";

    /////////////

    Endereco* ptr2;

    ptr2 = new Endereco;

    ptr2->setEndereco("rua dos mundurucus, 1084.");

    ptr2->getEndereco();

    std::cout << "\n";

    //////////////////

    Data* ptr3;
    ptr3 = new Data;

    ptr3->setData(31, "Jan", 2001);

    ptr3->getData();

    std::cout << "\n";

    ////////////////////

    Horario* ptr4;
    ptr4 = new Horario;

    ptr4->setHorario(23, 59);

    ptr4->getHorario();


    return 0;
}

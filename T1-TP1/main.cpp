#include <iostream>
#include<stdio.h>
#include  "dominios.h"
#include "testes.h"


using namespace std;

int main()
{

//    Idioma* ptr1;
//    ptr1 = new Idioma;
//
//    ptr1->getDisp();
//
//    std::cout << "\n";
//
//    ptr1->setIdioma("Indonesio");
//
//    ptr1->getIdioma();
//
//
//    std::cout << "\n";
//
//    /////////////
//
//    Endereco* ptr2;
//
//    ptr2 = new Endereco;
//
//    ptr2->setEndereco("rua dos mundurucus, 1084.");
//
//    ptr2->getEndereco();
//
//    std::cout << "\n";
//
//    //////////////////
//
//    Data* ptr3;
//    ptr3 = new Data;
//
//    ptr3->setData(3, "Jan", 2001);
//
//    ptr3->getData();
//
//    std::cout << "\n";
//
//    ////////////////////
//
//    Horario* ptr4;
//    ptr4 = new Horario;
//
//    ptr4->setHorario(23, 59);
//
//    ptr4->getHorario();
//
//    std::cout << "\n";
//
//     ////////////////////
//
//    Email* ptr5;
//    ptr5 = new Email;
//
//    ptr5->setEmail("adriano@maaaaaail.com");

 TUIdioma testeIdioma;
    switch(testeIdioma.run()){
        case TUIdioma::SUCESSO : cout << "SUCESSO - Idioma" << endl;
            break;
        case TUIdioma::FALHA : cout << "FALHA - Idioma" << endl;
            break;
    }

TUEndereco testeEndereco;
    switch(testeEndereco.run()){
        case TUEndereco::SUCESSO : cout << "SUCESSO - Endereco" << endl;
            break;
        case TUEndereco::FALHA : cout << "FALHA - Endereco" << endl;
            break;
    }

TUData testeData;
    switch(testeData.run()){
        case TUData::SUCESSO : cout << "SUCESSO - Data" << endl;
            break;
        case TUData::FALHA : cout << "FALHA - Data" << endl;
            break;
    }

TUHorario testeHorario;
    switch(testeHorario.run()){
        case TUHorario::SUCESSO : cout << "SUCESSO - Horario" << endl;
            break;
        case TUHorario::FALHA : cout << "FALHA - Horario" << endl;
            break;
    }

TUEmail testeEmail;
    switch(testeEmail.run()){
        case TUEmail::SUCESSO : cout << "SUCESSO - Email" << endl;
            break;
        case TUEmail::FALHA : cout << "FALHA - Email" << endl;
            break;
    }




    return 0;
}

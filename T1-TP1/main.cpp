#include <iostream>
<<<<<<< HEAD
#include<stdio.h>
#include  "dominios.h"
#include "testes.h"

=======
#include "dominios.h"
#include "testes.h"
>>>>>>> main

using namespace std;

int main()
{
<<<<<<< HEAD

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



=======
    TUNota testeA;
    TUDuracao testeB;
    TUNome testeC;
    TUCidade testeD;
    TUTitulo testeE;
    TUDescricao testeF;
    TUSenha testeG;
    TUCodigo testeH;

    switch(testeA.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA - NOTA" << endl;
                                break;
    }

    switch(testeB.run()){
        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
                                break;
        case TUDuracao::FALHA  : cout << "FALHA - DURACAO" << endl;
                                break;
    }

    switch(testeC.run()){
        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA - NOME" << endl;
                                break;
    }

    switch(testeD.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
                                break;
        case TUCidade::FALHA  : cout << "FALHA - CIDADE" << endl;
                                break;
    }

     switch(testeE.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA - TITULO" << endl;
                                break;
    }

    switch(testeF.run()){
        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
                                break;
        case TUDescricao::FALHA  : cout << "FALHA - DESCRICAO" << endl;
                                break;
    }

    switch(testeG.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA - SENHA" << endl;
                                break;
    }

    switch(testeH.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA - CODIGO" << endl;
                                break;
    }

    Nome name;
    name.setValor("L. V. Cabral");
    cout << "\nNome: " << name.getValor() << endl;

    Cidade cidade;
    cidade.setCidade("Hong Kong");
    cout << "Cidade: " << cidade.getCidade() << endl;

    Senha senha;
    senha.setPassword("Ab123456");
    cout << "Senha: " << senha.getPassword() << endl;

    Codigo codigo;
    codigo.setValor("2615339");
    cout << "Codigo: " << codigo.getValor() << endl;
>>>>>>> main

    return 0;
}

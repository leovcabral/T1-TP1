#include <iostream>
#include<stdio.h>
#include  "dominios.h"
#include "testes.h"

using namespace std;

int main()
{

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

    return 0;
}

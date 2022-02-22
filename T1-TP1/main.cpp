#include <iostream>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUNota testeA;
    TUDuracao testeB;
    TUNome testeC;
    TUCidade testeD;

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


    Nome name;
    name.setValor("L. V. Cabral");
    cout << "Nome: " << name.getValor() << endl;

    Cidade cidade;
    cidade.setCidade("Hong Kong");
    cout << "Cidade: " << cidade.getCidade() << endl;

    Senha senha;
    senha.setPassword("Ab123456");
    cout << "Senha: " << senha.getPassword();

    return 0;
}

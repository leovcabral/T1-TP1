#include <iostream>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUNota testeA;
    TUDuracao testeB;
    TUNome testeC;

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

    Nome name;
    name.setValor("L. V. Cabral");
    cout << "Nome: " << name.getValor();

    return 0;
}

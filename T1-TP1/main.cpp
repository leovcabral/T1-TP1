#include <iostream>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUNota testeA;
    TUDuracao testeB;

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
    return 0;
}

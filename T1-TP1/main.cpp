#include <iostream>
#include "dominios.h"
#include "testes.h"

using namespace std;

int main()
{
    TUNota testeA;

    switch(testeA.run()){
        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
                                break;
        case TUNota::FALHA  : cout << "FALHA - NOTA" << endl;
                                break;
    }
    return 0;
}

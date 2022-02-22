#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>
#include <cstring>
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUNota {
private:
    const static int VALOR_VALIDO   = 3;
    const static int VALOR_INVALIDO = 6;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUDuracao {
private:
    const static int VALOR_VALIDO   = 90;
    const static int VALOR_INVALIDO = 110;
    Duracao *duracao;

    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


class TUNome {
private:
    const string VALOR_VALIDO   = "Leonardo";
    const string VALOR_INVALIDO = "Leo";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif

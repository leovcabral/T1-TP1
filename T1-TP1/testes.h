#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include <iostream>
#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUCidade {
private:
    const static int VALOR_VALIDO   = "Nova Iorque";
    const static int VALOR_INVALIDO = "Manaus";
    Cidade *cidade;
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


class TUDescricao {
private:
    const static int VALOR_VALIDO   = "Um exemplo";
    const static int VALOR_INVALIDO = "Um  exemplo";
    Descricao *descricao;
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

class TUTitulo {
private:
    const static int VALOR_VALIDO   = "Um titulo";
    const static int VALOR_INVALIDO = "um titulo1";
    Titulo *titulo;
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

class TUSenha {
private:
    const static int VALOR_VALIDO   = "Senha1";
    const static int VALOR_INVALIDO = "SENHAA!";
    Senha *senha;
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

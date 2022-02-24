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

class TUCidade {
private:
    const string VALOR_VALIDO   = "Nova Iorque";
    const string VALOR_INVALIDO = "Pequena Manaus";
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


class TUTitulo {
private:
    const string VALOR_VALIDO   = "Amor e Choppa";
    const string VALOR_INVALIDO = "a mais 2feinha...";
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

class TUDescricao {
private:
    const string VALOR_VALIDO   = "cidade das cidades";
    const string VALOR_INVALIDO = "muito  coitada...poxa";
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

class TUSenha {
private:
    const string VALOR_VALIDO   = "Ab123456";
    const string VALOR_INVALIDO = "aadriano!";
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

class TUCodigo {
private:
    const string VALOR_VALIDO   = "2615339";
    const string VALOR_INVALIDO = "2615338!";
    Codigo *codigo;
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

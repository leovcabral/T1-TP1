#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include <iostream>

using namespace std;

class TUIdioma{

    private:
        string VALOR_VALIDO   = "Ingles";
        string VALOR_INVALIDO = "portugues";
        Idioma* idioma;
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

class TUEndereco{

    private:
        string VALOR_VALIDO   = "Rua paraciacaiba, 1084";
        string VALOR_INVALIDO = "Rua dos bobos   ,666";
        Endereco* endereco;
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

class TUData{

    private:

        string VALOR_VALIDO = "01-Jan-2004";
        int VALOR_VALIDO_DIA = 1;
        string VALOR_VALIDO_MES  = "Jan";
        int VALOR_VALIDO_ANO = 2004;

        string VALOR_INVALIDO = "90-JANEIRO-1999";
        int VALOR_INVALIDO_DIA = 90;
        string VALOR_INVALIDO_MES = "JANEIRO";
        int VALOR_INVALIDO_ANO = 1999;

        Data* data;
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

class TUHorario{

    private:

        string VALOR_VALIDO = "23:59";
        int VALOR_VALIDO_HORAS = 23;
        int VALOR_VALIDO_MINUTOS  = 59;


        string VALOR_INVALIDO = "60:00";
        int VALOR_INVALIDO_HORAS = 60;
        int VALOR_INVALIDO_MINUTOS = 0;

        Horario* horario;
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

class TUEmail{

    private:

        string VALOR_VALIDO = "user@mail.com";
        string VALOR_INVALIDO = "user.@mail.com";

        Email* email;
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

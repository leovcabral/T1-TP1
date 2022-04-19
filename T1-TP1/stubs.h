#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "dominios.h"
#include "interfaces.h"

using namespace std;

//--------------------------------------------------------------------------------------------
// Declara��es de classes stub.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string EMAIL_VALIDO;
        static const string SENHA_VALIDO;
    public:
        bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------

class StubServicoConta:public IServicoConta{
    private:
        static const string INVALIDO;
    public:
        void consultarDadosConta(Email*);
        void editar(Usuario*);
        bool cadastrarUsuario(Usuario);
        bool descadastrarConta(Email*);
//        bool cadastrarConta(Usuario);
};

//--------------------------------------------------------------------------------------------

class StubServicoExcursao:public IServicoExcursao{
    private:

    public:
        void listar();
};

#endif // STUBS_H_INCLUDED

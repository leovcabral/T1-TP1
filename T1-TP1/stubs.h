#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include <string>
#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

using namespace std;


//--------------------------------------------------------------------------------------------
// Declara��es de classes stub.

class StubServicoAutenticacao:public IServicoAutenticacao {
    private:
        static const string EMAIL_VALIDO;
        static const string SENHA_VALIDO;

    public:
        ListaUsuarios* ptr;
        bool autenticar(Email, Senha);
};

//--------------------------------------------------------------------------------------------

class StubServicoConta:public IServicoConta{
    public:
        ListaUsuarios* ptr;
        int TamLista;
        void consultarDadosConta(Email*);
        void editar(Usuario*);
        void listarUsers();
        void cadastrarConta(Usuario*);
        bool descadastrarConta(Email*);

};

//--------------------------------------------------------------------------------------------

class StubServicoExcursao:public IServicoExcursao{
    private:

    public:
        void listar();
};



#endif // STUBS_H_INCLUDED

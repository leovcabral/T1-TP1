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
};

//--------------------------------------------------------------------------------------------
//
//class StubServicoProdutosFinanceiros:public IServicoProdutosFinanceiros {
//    private:
//        static const string INVALIDO;
//    public:
//        bool cadastrarConta(Conta);
//        bool consultarConta(Conta*);
//        bool cadastrarProdutoInvestimento(Produto);
//        bool descadastrarProdutoInvestimento(Codigo);
//        bool realizarAplicacao(Aplicacao);
//        bool recuperarAplicacao(Aplicacao*);                        // Adaptar assinatura.
//};

#endif // STUBS_H_INCLUDED

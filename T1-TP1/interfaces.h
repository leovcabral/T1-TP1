
#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
// NOSSO
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declarações das interfaces de acordo com as .necessidades
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

class IServicoAutenticacao;
class IServicoConta;
//class IServicoProdutosFinanceiros;

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.


// 200053523
class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Email*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

// 190046953
class IApresentacaoConta{
    public:
        virtual void executar(Email*) = 0;
//        virtual void cadastrar() = 0;
//        virtual void editar(Email*) = 0;
//        virtual void descadastrar(Email*) = 0;
        virtual void setCntrServicoConta(IServicoConta*) = 0;
//        virtual void setCntrServicoExcursao(IServicoExcursao*) = 0;
        virtual ~IApresentacaoConta(){}
};

//// 202061421
//class IApresentacaoExcursao{
//    public:
//        virtual void executar() = 0;
//        virtual void executar(Email) = 0;
//        virtual void setCntrServicosExcursao(IServicoExcursao*) = 0;
//        virtual ~IApresentacaoExcursao(){}
//};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.

class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email, Senha) = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoConta{
public:
//        virtual bool cadastrarConta(Usuario*) = 0;
        virtual void consultarDadosConta(Email*) = 0;
        virtual ~IServicoConta(){}
};

//class IServicoExcursao{
//public:
//        virtual void listar() = 0;
//        virtual bool cadastrar(Usuario*) = 0
//        virtual bool descadastrar(Usuario*) = 0;
//        virtual bool avaliar(Usuario*, Excursao*) = 0;
//        virtual bool acessarExcursao(Excursao*,Usuario*) = 0;
//        virtual bool acessarAvaliacao(Excursao*, Usuario*) = 0;
//        virtual bool acessarSessao(Excursao*, Usuario*) = 0;
//        virtual bool setCntrServicosExcursao(IServicoExcursao*) = 0;                      // Adaptar aos requisitos.
//        virtual ~IServicoExcursao(){}
//};

#endif // INTERFACES_H_INCLUDED


#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED


#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

// #define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
// Declara��es de classes controladoras e implementa��es de m�todos.

class CntrApresentacaoControle{
    private:
        Email email;
        IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
        IApresentacaoConta *cntrApresentacaoConta;
//        IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoConta(IApresentacaoConta*);
//        void setCntrApresentacaoProdutosFinanceiros(IApresentacaoProdutosFinanceiros*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
    cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IApresentacaoConta *cntr){
            cntrApresentacaoConta = cntr;
}
//
//inline void CntrApresentacaoControle::setCntrApresentacaoProdutosFinanceiros(IApresentacaoProdutosFinanceiros *cntr){
//    cntrApresentacaoProdutosFinanceiros = cntr;
//}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoAutenticacao:public IApresentacaoAutenticacao{
    private:
        IServicoAutenticacao *cntr;
    public:
        bool autenticar(Email*);
        void setCntrServicoAutenticacao(IServicoAutenticacao*);
};

inline void CntrApresentacaoAutenticacao::setCntrServicoAutenticacao(IServicoAutenticacao *cntr){
    this->cntr = cntr;
}

//--------------------------------------------------------------------------------------------

class CntrApresentacaoConta:public IApresentacaoConta{
    private:
        IServicoConta *cntrServicoConta;
//        IServicoExcursao *cntrServicoExcursao;
        void consultarDadosConta(Email);
    public:
        void executar(Email*);
        void cadastrar();
        void editar(Email);
        void descadastrar(Email);
        void setCntrServicoConta(IServicoConta*);
//        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
};

inline void CntrApresentacaoConta::setCntrServicoConta(IServicoConta *cntr){
    cntrServicoConta = cntr;
}
//
//inline void CntrApresentacaoPessoal::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
//    cntrServicoProdutosFinanceiros = cntr;
//}

//--------------------------------------------------------------------------------------------

//class CntrApresentacaoProdutosFinanceiros:public IApresentacaoProdutosFinanceiros{
//    private:
//        IServicoProdutosFinanceiros *cntr;
//        void consultarConta();
//        void cadastrarProdutoInvestimento();
//        void descadastrarProdutoInvestimento();
//        void consultarProdutoInvestimento();
//        void realizarAplicacao();
//        void listarAplicacoes();
//    public:
//        void executar();
//        void executar(CPF);
//        void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*);
//};
//
//inline void CntrApresentacaoProdutosFinanceiros::setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros *cntr){
//    this->cntr = cntr;
//}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED


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
        IApresentacaoExcursao *cntrApresentacaoExcursao;
    public:
        void executar();
        void setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao*);
        void setCntrApresentacaoConta(IApresentacaoConta*);
        void setCntrApresentacaoExcursao(IApresentacaoExcursao*);
};

inline void CntrApresentacaoControle::setCntrApresentacaoAutenticacao(IApresentacaoAutenticacao *cntr){
            cntrApresentacaoAutenticacao = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoConta(IApresentacaoConta *cntr){
            cntrApresentacaoConta = cntr;
}

inline void CntrApresentacaoControle::setCntrApresentacaoExcursao(IApresentacaoExcursao *cntr){
            cntrApresentacaoExcursao = cntr;
}

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
        Usuario user;
//        IServicoExcursao *cntrServicoExcursao;
    public:
        void executar(Email*);
        void consultarDadosConta(Email*);
//      void cadastrar();
        void editar(Usuario*);
//      void descadastrar(Email);
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

class CntrApresentacaoExcursao:public IApresentacaoExcursao{
    private:
        IServicoExcursao *cntr;
    public:
        void executar();
        void setCntrServicoExcursao(IServicoExcursao*);
};

inline void CntrApresentacaoExcursao::setCntrServicoExcursao(IServicoExcursao *cntr){
    this->cntr = cntr;
}


#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED

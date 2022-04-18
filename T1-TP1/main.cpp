#include <iostream>
#include<stdio.h>
#include  "dominios.h"
#include "testes.h"
#include <stdexcept>

#include "interfaces.h"
#include "controladorasapresentacao.h"
#include "stubs.h"


using namespace std;

int main()
{
//PARTE DO TRABALHO 1
//
//cout << "TESTES DE UNIDADE DE DOMINIOS: \n";
//
//TUIdioma testeIdioma;
//    switch(testeIdioma.run()){
//        case TUIdioma::SUCESSO : cout << "SUCESSO - IDIOMA" << endl;
//            break;
//        case TUIdioma::FALHA : cout << "FALHA - IDIOMA" << endl;
//            break;
//    }
//
//TUEndereco testeEndereco;
//    switch(testeEndereco.run()){
//        case TUEndereco::SUCESSO : cout << "SUCESSO - ENDERECO" << endl;
//            break;
//        case TUEndereco::FALHA : cout << "FALHA - ENDERECO" << endl;
//            break;
//    }
//
//TUData testeData;
//    switch(testeData.run()){
//        case TUData::SUCESSO : cout << "SUCESSO - DATA" << endl;
//            break;
//        case TUData::FALHA : cout << "FALHA - DATA" << endl;
//            break;
//    }
//
//TUHorario testeHorario;
//    switch(testeHorario.run()){
//        case TUHorario::SUCESSO : cout << "SUCESSO - HORARIO" << endl;
//            break;
//        case TUHorario::FALHA : cout << "FALHA - HORARIO" << endl;
//            break;
//    }
//
//TUEmail testeEmail;
//    switch(testeEmail.run()){
//        case TUEmail::SUCESSO : cout << "SUCESSO - EMAIL" << endl;
//            break;
//        case TUEmail::FALHA : cout << "FALHA - EMAIL" << endl;
//            break;
//    }
//
//    TUNota testeA;
//    TUDuracao testeB;
//    TUNome testeC;
//    TUCidade testeD;
//    TUTitulo testeE;
//    TUDescricao testeF;
//    TUSenha testeG;
//    TUCodigo testeH;
//    TUUsuario testeI;
//    TUAvaliacao testeJ;
//    TUSessao testeK;
//    TUExcursao testeL;
//
//    switch(testeA.run()){
//        case TUNota::SUCESSO: cout << "SUCESSO - NOTA" << endl;
//                                break;
//        case TUNota::FALHA  : cout << "FALHA - NOTA" << endl;
//                                break;
//    }
//
//    switch(testeB.run()){
//        case TUDuracao::SUCESSO: cout << "SUCESSO - DURACAO" << endl;
//                                break;
//        case TUDuracao::FALHA  : cout << "FALHA - DURACAO" << endl;
//                                break;
//    }
//
//    switch(testeC.run()){
//        case TUNome::SUCESSO: cout << "SUCESSO - NOME" << endl;
//                                break;
//        case TUNome::FALHA  : cout << "FALHA - NOME" << endl;
//                                break;
//    }
//
//    switch(testeD.run()){
//        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
//                                break;
//        case TUCidade::FALHA  : cout << "FALHA - CIDADE" << endl;
//                                break;
//    }
//
//     switch(testeE.run()){
//        case TUTitulo::SUCESSO: cout << "SUCESSO - TITULO" << endl;
//                                break;
//        case TUTitulo::FALHA  : cout << "FALHA - TITULO" << endl;
//                                break;
//    }
//
//    switch(testeF.run()){
//        case TUDescricao::SUCESSO: cout << "SUCESSO - DESCRICAO" << endl;
//                                break;
//        case TUDescricao::FALHA  : cout << "FALHA - DESCRICAO" << endl;
//                                break;
//    }
//
//    switch(testeG.run()){
//        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
//                                break;
//        case TUSenha::FALHA  : cout << "FALHA - SENHA" << endl;
//                                break;
//    }
//
//    switch(testeH.run()){
//        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
//                                break;
//        case TUCodigo::FALHA  : cout << "FALHA - CODIGO" << endl;
//                                break;
//    }
//
//    cout << "\nTESTES DE UNIDADE DE ENTIDADES: \n";
//
//    switch(testeI.run()){
//        case TUUsuario::SUCESSO: cout << "SUCESSO - USUARIO" << endl;
//                                break;
//        case TUUsuario::FALHA  : cout << "FALHA   - USUARIO" << endl;
//                                break;
//    }
//
//    switch(testeJ.run()){
//        case TUAvaliacao::SUCESSO: cout << "SUCESSO - AVALIAÇÂO" << endl;
//                                break;
//        case TUAvaliacao::FALHA  : cout << "FALHA   - AVALIAÇÂO" << endl;
//                                break;
//    }
//
//    switch(testeK.run()){
//        case TUSessao::SUCESSO: cout << "SUCESSO - SESSAO" << endl;
//                                break;
//        case TUSessao::FALHA  : cout << "FALHA   - SESSAO" << endl;
//                                break;
//    }
//
//    switch(testeL.run()){
//        case TUExcursao::SUCESSO: cout << "SUCESSO - EXCURSAO" << endl;
//                                break;
//        case TUExcursao::FALHA  : cout << "FALHA   - EXCURSAO" << endl;
//                                break;
//    }
//
// PARTE DO TRABALHO 2

 // Declarar poteiros e instanciar controladoras.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoConta *cntrApresentacaoConta;
//    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoConta = new CntrApresentacaoConta();
//    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instanciar stubs.

    IServicoAutenticacao *stubServicoAutenticacao;
    IServicoConta *stubServicoConta;
//    IServicoProdutosFinanceiros *stubServicoProdutosFinanceiros;

    stubServicoAutenticacao = new StubServicoAutenticacao();
//    stubServicoConta = new StubServicoConta();
//    stubServicoProdutosFinanceiros = new StubServicoProdutosFinanceiros();

    // Interligar controladoras e stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoConta(cntrApresentacaoConta);
//    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);

   cntrApresentacaoConta->setCntrServicoConta(stubServicoConta);
//    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

//    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    cntrApresentacaoControle->executar();                                           // Solicitar servi�o.




    return 0;
}

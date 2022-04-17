#include "stubs.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

const string StubServicoAutenticacao::EMAIL_VALIDO = "nando@email.com";
const string StubServicoAutenticacao::SENHA_VALIDO = "Ab123456";
//const string StubServicoPessoal::INVALIDO = "12345";
//const string StubServicoProdutosFinanceiros::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.

bool StubServicoAutenticacao::autenticar(Email email, Senha senha){
    if(email.getEmail().compare(EMAIL_VALIDO) == 0 &&
        senha.getPassword().compare(SENHA_VALIDO) == 0){
        return true;
        }
    else{
        return false;
        }
}

void StubServicoConta::consultarDadosConta(Email *email){
    cout << "Dados de conta" << endl;
    cout << "Email: " << email->getEmail() << endl;
    cout << "Nome: Fernando" << endl;
}
//
//bool StubServicoPessoal::cadastrarUsuario(Usuario usuario){
//    if(usuario.getCPF().getValor().compare(INVALIDO) == 0)
//        return false;
//    return true;
//}
//
//bool StubServicoProdutosFinanceiros::cadastrarConta(Conta conta){
//    if(conta.getNumero().getValor().compare(INVALIDO) == 0)
//        return false;
//    return true;
//}
//
//bool StubServicoProdutosFinanceiros::consultarConta(Conta *conta){
//    if(conta->getNumero().getValor().compare(INVALIDO) == 0)
//        return false;

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Implementar c�digo que atribui valores ao objeto identificado por conta.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
//
//    return true;
//}

//bool StubServicoProdutosFinanceiros::cadastrarProdutoInvestimento(Produto produto){
//    if(produto.getCodigo().getValor().compare(INVALIDO) == 0)
//        return false;
//    return true;
//}
//
//bool StubServicoProdutosFinanceiros::descadastrarProdutoInvestimento(Codigo codigo){
//    if(codigo.getValor().compare(INVALIDO) == 0)
//        return false;
//    return true;
//}
//
//bool StubServicoProdutosFinanceiros::realizarAplicacao(Aplicacao aplicacao){
//    if(aplicacao.getCodigo().getValor().compare(INVALIDO) == 0)
//        return false;
//    return true;
//}
//
//bool StubServicoProdutosFinanceiros::recuperarAplicacao(Aplicacao *aplicacao){
//    if(aplicacao->getCodigo().getValor().compare(INVALIDO) == 0)
//        return false;
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Implementar c�digo que atribui valores ao objeto identificado por aplicacao.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    return true;
//}



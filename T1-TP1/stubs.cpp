#include "stubs.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

const string StubServicoAutenticacao::EMAIL_VALIDO = "nando@email.com";
const string StubServicoAutenticacao::SENHA_VALIDO = "Ab123456";
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
    char lixo;
    cout << "Dados de conta" << endl;
    cout << "Email: " << email->getEmail() << endl;
    cout << "Nome: Fernando" << endl;

    printf("pressione enter para retornar");
    scanf("%c", &lixo);
    scanf("%c", &lixo);

}

void StubServicoConta::editar(Usuario *user){

    char lixo;

    char campo1[80];
    char campo2[80];
    char campo3[80];

    Email email;
    Senha senha;
    Nome nome;

    char texto1[]="Preencha novo valor para Nome : ";
    char texto2[]="Preencha novo valor para Email: ";
    char texto3[]="Preencha novo valor para Senha: ";
    char texto4[]="Dados em formato incorreto. Digite algo.";

    while(true)
    {

    system("clear");

    cout << texto1 << " ";
    cin >> campo1;
    cout << texto2 << " ";
    cin >> campo2;
    cout << texto3 << " ";
    cin >> campo3;

    try{
            nome.setValor(string(campo1));
            email.setEmail(string(campo2));
            senha.setPassword(string(campo3));

            user->setEmail(email);
            user->setSenha(senha);
            user->setNome(nome);
                                                                // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.

            system("clear");                                         // Limpa janela.
            cout << texto4 << endl;

            printf("Dados em formato incorreto. pressione enter para tentar dnovo");
            scanf("%c", &lixo);
            scanf("%c", &lixo);
                                                                                     // L� caracter digitado.
        }

    }

    printf("voce editou com sucesso, aperte enter para retornar");
            scanf("%c", &lixo);
            scanf("%c", &lixo);

}

void StubServicoExcursao::listar(){
    char lixo;

    system("clear");

    printf("lista: A, B, C, D, E...\n");

    printf("digite enter para retornar");

    scanf("%c", &lixo);
     scanf("%c", &lixo);

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



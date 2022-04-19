#include "stubs.h"
#include <iostream>
#include <string.h>

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

ListaUsuarios* head_global;

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.

bool StubServicoAutenticacao::autenticar(Email email_cadastrado, Senha senha_cadastrado){


//    if(email.getEmail().compare(EMAIL_VALIDO) == 0 &&
//        senha.getPassword().compare(SENHA_VALIDO) == 0){
//        return true;
//        }
//    else{
//        return false;
//        }

    char lixo;
    Nome nome;
    Email email;
    Senha senha;

    bool cadastro_encontrado = false;
    ListaUsuarios* aux;
    aux = head_global;

    while(aux != NULL)
    {

        email = aux->ptr->getEmail();

        cout << "cadastrado :" << email_cadastrado.getEmail() << endl;
        cout << "analisado  :" << email.getEmail() << endl;

        if(email_cadastrado.getEmail().compare(email.getEmail()) == 0)
        {
            cadastro_encontrado = true;
            break;
        }
        aux = aux->prx;
    }

    senha = aux->ptr->getSenha();

    if(cadastro_encontrado)
    {
        if(senha_cadastrado.getPassword().compare(senha.getPassword()) == 0)
        {
            printf("encontramos seu cadatro!");

            printf("pressione enter para retornar");
            scanf("%c", &lixo);
            scanf("%c", &lixo);

            return true;
        }
        else return false;
    }
    else return false;

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

void StubServicoConta::cadastrarConta(Usuario* user)
{
    char lixo;

    Nome nome;
    Email email;
    Senha senha;

    nome = user->getNome();
    email = user->getEmail();
    senha = user->getSenha();

    Usuario* novo_cadastro;
    novo_cadastro = new Usuario;

    novo_cadastro->setNome(nome);
    novo_cadastro->setEmail(email);
    novo_cadastro->setSenha(senha);

    if(this->TamLista == 0)
    {
        ListaUsuarios* novo_user;
        novo_user = new ListaUsuarios;

        novo_user->ptr = novo_cadastro;
        novo_user->prx = NULL;

        this->ptr = novo_user;
        head_global = this->ptr;
        this->TamLista ++;
    }
    else
    {
        ListaUsuarios* aux;
        ListaUsuarios* novo_user;
        novo_user = new ListaUsuarios;
        aux = this->ptr;

        while(aux->prx != NULL)
        {
            aux = aux->prx;
        }

        aux->prx = novo_user;
        novo_user->ptr = novo_cadastro;
        novo_user->prx = NULL;
        this->TamLista ++;

    }

    printf("cadastro realizado com sucesso. aperte enter para retornar ");
    scanf("%c", & lixo);
    scanf("%c", & lixo);

    listarUsers();

}

void StubServicoConta::listarUsers()
{
    ListaUsuarios* aux;
    aux = this->ptr;
    char lixo;
    Nome nome;

    while(aux->prx != NULL)
    {
        nome = aux->ptr->getNome();
        cout << nome.getValor() << endl;
        aux = aux->prx;

    }

    nome = aux->ptr->getNome();
    cout << nome.getValor() << endl;

    printf("aperte enter para retornar ");
    scanf("%c", & lixo);
    scanf("%c", & lixo);


}

void StubServicoExcursao::listar(){
    char lixo;

    system("clear");

    printf("lista: A, B, C, D, E...\n");

    printf("digite enter para retornar");

    scanf("%c", &lixo);
    scanf("%c", &lixo);


}

//bool StubServicoConta::cadastrarUsuario(Usuario usuario){
//    if(usuario.getEmail().getValor().compare(EMAIL_VALIDO) == 0)
//        return true;
//    return false;
//}

bool StubServicoConta::descadastrarConta(Email *email){
    return true;
}

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



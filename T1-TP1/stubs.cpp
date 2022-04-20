#include "stubs.h"
#include <iostream>
#include <string.h>

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

ListaUsuarios* head_global;

//--------------------------------------------------------------------------------------------
// Implementa��es dos m�todos de classes stub.

bool StubServicoAutenticacao::autenticar(Email email_cadastrado, Senha senha_cadastrado){

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

        if(email_cadastrado.getEmail().compare(email.getEmail()) == 0)
        {
            cadastro_encontrado = true;
            break;
        }
        aux = aux->prx;
    }
    if(aux == NULL){
        return false;
    }
    senha = aux->ptr->getSenha();

    if(cadastro_encontrado)
    {
        if(senha_cadastrado.getPassword().compare(senha.getPassword()) == 0)
        {
            cout << "Encontramos seu cadastro!" << endl;

            cout << "Pressione enter para retornar" << endl;
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
    if(this -> TamLista == 0){
        cout << "Não existem usuários" << endl;
    }
    else{
        ListaUsuarios* aux;
        aux = this->ptr;
        scanf("%c", &lixo);
        scanf("%c", &lixo);
        while(aux != NULL){
            if(aux-> ptr -> getEmail().getEmail() == email-> getEmail()){
                cout << "Dados de conta:" << endl;
                cout << "Email: " << email->getEmail() << endl;
                cout << "Nome: " << aux -> ptr -> getNome().getValor() << endl;
                break;
            }
            aux = aux -> prx;
        }
    }

    cout << "Pressione enter para retornar" << endl;
    scanf("%c", &lixo);
    scanf("%c", &lixo);

}

bool StubServicoConta::editar(Email *email, Nome nome_novo, Senha senha_nova){
    char lixo;
    ListaUsuarios* aux;
    aux = this->ptr;
    scanf("%c", &lixo);
    scanf("%c", &lixo);
    while(aux != NULL){
        if(aux-> ptr -> getEmail().getEmail() == email-> getEmail()){
            aux->ptr->setNome(nome_novo);
            aux->ptr->setSenha(senha_nova);
            cout << "Usuario editado com sucesso!" << endl;
            return true;
        }
        aux = aux -> prx;
    }
    return false;
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

    cout << "Cadastro realizado com sucesso. Aperte enter para retornar. " << endl;
    scanf("%c", & lixo);
    scanf("%c", & lixo);

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

    cout << "aperte enter para retornar " << endl;
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
    char lixo;
     if(this -> TamLista == 0){
        cout << "Não existem usuários" << endl;
    }
    else{
        ListaUsuarios* aux;
        ListaUsuarios* anterior;
        anterior = NULL;
        aux = this->ptr;
        scanf("%c", &lixo);
        scanf("%c", &lixo);
        while(aux != NULL){
            if(aux-> ptr -> getEmail().getEmail() == email-> getEmail()){
                if(anterior == NULL){
                    this->ptr = aux->prx;
                    head_global = this->ptr;
                    this->TamLista--;
                    return true;
                }
                else if(aux->prx == NULL){
                    anterior->prx = NULL;
                    this->TamLista--;
                    return true;
                }
                else{
                    anterior->prx = aux->prx;
                    this->TamLista--;
                    return true;
                }


            }
            anterior = aux;
            aux = aux -> prx;
    }
    }
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



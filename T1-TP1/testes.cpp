#include <iostream>
#include <testes.h>

using namespace std;

void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown(){
    delete cidade;

}

void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setCidade(VALOR_VALIDO);
        if(cidade->getCidade() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}


void TUCidade::testarCenarioFalha(){
    try{
        cidade->setCidade(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cidade->getCidade() == VALOR_INVALIDO){
            estado = FALHA;
        }
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}



void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;

}

void TUNota::testarCenarioSucesso(){
    try{
        nota->setValor(VALOR_VALIDO);
        if(nota->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha(){
    try{
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUDuracao::setUp(){
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown(){
    delete duracao;

}

void TUDuracao::testarCenarioSucesso(){
    try{
        duracao->setValor(VALOR_VALIDO);
        if(duracao->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha(){
    try{
        duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (duracao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;

}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if(nome->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


void TUTitulo::setUp(){
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;

}

void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setTitulo(VALOR_VALIDO);
        if(titulo->getTitulo() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (titulo->getTitulo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUDescricao::setUp(){
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete descricao;

}

void TUDescricao::testarCenarioSucesso(){
    try{
        descricao->setDescription(VALOR_VALIDO);
        if(descricao->getDescription() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        descricao->setDescription(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (descricao->getDescription() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;

}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setPassword(VALOR_VALIDO);
        if(senha->getPassword() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setPassword(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getPassword() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if(codigo->getValor() != VALOR_VALIDO){
            estado = FALHA;
        }
    }
    catch (invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


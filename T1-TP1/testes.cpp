#include <iostream>
#include "testes.h"


void TUIdioma::setUp()
{
    idioma = new Idioma;
    estado = SUCESSO;
}
void TUIdioma::tearDown()
{
    delete idioma;
}
void TUIdioma::testarCenarioSucesso()
{
    try
    {
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha()
{
    try
    {
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (idioma->getIdioma() == VALOR_INVALIDO)
        {
            estado = FALHA;
        }

    }
}

int TUIdioma::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

///////////////////////////////////////////////////

void TUEndereco::setUp()
{
    endereco = new Endereco;
    estado = SUCESSO;
}
void TUEndereco::tearDown()
{
    delete endereco;
}
void TUEndereco::testarCenarioSucesso()
{
    try
    {
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha()
{
    try
    {
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (endereco->getEndereco() == VALOR_INVALIDO)
        {
            estado = FALHA;
        }

    }
}

int TUEndereco::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;

}

//////////////////////////////

void TUData::setUp()
{
    data = new Data;
    estado = SUCESSO;
}
void TUData::tearDown()
{
    delete data;
}
void TUData::testarCenarioSucesso()
{
    try
    {
        data->setData(VALOR_VALIDO_DIA, VALOR_VALIDO_MES, VALOR_VALIDO_ANO);
        if (data->getData() != VALOR_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setData(VALOR_INVALIDO_DIA, VALOR_INVALIDO_MES, VALOR_INVALIDO_ANO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (data->getData() == VALOR_INVALIDO)
        {
            estado = FALHA;
        }


    }
}

int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;

}

///////////////////////////////

void TUHorario::setUp()
{
    horario = new Horario;
    estado = SUCESSO;
}
void TUHorario::tearDown()
{
    delete horario;
}
void TUHorario::testarCenarioSucesso()
{
    try
    {
        horario->setHorario(VALOR_VALIDO_HORAS, VALOR_VALIDO_MINUTOS);
        if (horario->getHorario() != VALOR_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha()
{
    try
    {
        horario->setHorario(VALOR_INVALIDO_HORAS, VALOR_INVALIDO_MINUTOS);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (horario->getHorario() == VALOR_INVALIDO)
        {
            estado = FALHA;
        }

    }
}

int TUHorario::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;

}

///////////////////////////////

void TUEmail::setUp()
{
    email = new Email;
    estado = SUCESSO;
}
void TUEmail::tearDown()
{
    delete email;
}
void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

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


void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (email->getEmail() == VALOR_INVALIDO)
        {
            estado = FALHA;
        }

    }
}

int TUEmail::run()
{
setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
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


void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    Nome nome;
    nome.setValor(NOME_VALIDO);
    usuario->setNome(nome);
    if(usuario->getNome().getValor() != NOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmail(EMAIL_VALIDO);
    usuario->setEmail(email);
    if(usuario->getEmail().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setPassword(SENHA_VALIDA);
    usuario->setSenha(senha);
    if(usuario->getSenha().getPassword() != SENHA_VALIDA)
        estado = FALHA;

}

int TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUAvaliacao::setUp(){
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown(){
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    avaliacao->setCodigo(codigo);
    if(avaliacao->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Nota nota;
    nota.setValor(NOTA_VALIDA);
    avaliacao->setNota(nota);
    if(avaliacao->getNota().getValor() != NOTA_VALIDA)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescription(DESCRICAO_VALIDA);
    avaliacao->setDescricao(descricao);
    if(avaliacao->getDescricao().getDescription() != DESCRICAO_VALIDA)
        estado = FALHA;

}

int TUAvaliacao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}

void TUSessao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    sessao->setCodigo(codigo);
    if(sessao->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Data data;
    data.setData(VALOR_VALIDO_DIA, VALOR_VALIDO_MES, VALOR_VALIDO_ANO);
    sessao->setData(data);
    if(sessao->getData().getData() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Horario horario;
    horario.setHorario(VALOR_VALIDO_HORAS, VALOR_VALIDO_MINUTOS);
    sessao->setHorario(horario);
    if(sessao->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
        estado = FALHA;

    Idioma idioma;
    idioma.setIdioma(VALOR_VALIDO_IDIOMA);
    sessao->setIdioma(idioma);
    if (sessao->getIdioma().getIdioma() != VALOR_VALIDO_IDIOMA)
        estado = FALHA;
}

int TUSessao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown(){
    delete excursao;
}

void TUExcursao::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    excursao->setCodigo(codigo);
    if(excursao->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Titulo titulo;
    titulo.setTitulo(TITULO_VALIDO);
    excursao->setTitulo(titulo);
    if(excursao->getTitulo().getTitulo() != TITULO_VALIDO)
        estado = FALHA;

    Nota nota;
    nota.setValor(NOTA_VALIDA);
    excursao->setNota(nota);
    if(excursao->getNota().getValor() != NOTA_VALIDA)
        estado = FALHA;

    Cidade cidade;
    cidade.setCidade(CIDADE_VALIDA);
    excursao->setCidade(cidade);
    if (excursao->getCidade().getCidade() != CIDADE_VALIDA)
        estado = FALHA;

    Duracao duracao;
    duracao.setValor(DURACAO_VALIDA);
    excursao->setDuracao(duracao);
    if (excursao->getDuracao().getValor() != DURACAO_VALIDA)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescription(DESCRICAO_VALIDA);
    excursao->setDescricao(descricao);
    if (excursao->getDescricao().getDescription() != DESCRICAO_VALIDA)
        estado = FALHA;

    Endereco endereco;
    endereco.setEndereco(ENDERECO_VALIDO);
    excursao->setEndereco(endereco);
    if (excursao->getEndereco().getEndereco() != ENDERECO_VALIDO)
        estado = FALHA;
}

int TUExcursao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

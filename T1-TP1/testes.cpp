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
    catch(invalid_argument &excecao)
    {
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






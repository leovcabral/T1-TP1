#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

#include <iostream>
#include <stdlib.h>
#include <string.h>


using namespace std;

class Idioma
{

private:

    static const int TAM_DISP = 10;
    string disponivel[TAM_DISP] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    string selecionado = "";
    void validar(string str);

public:

    void getDisp();
    void setIdioma(string str);
    string getIdioma();
};

class Endereco
{

private:
    string valor = "";
    void validar(string str);

public:

    void setEndereco(string str);
    string getEndereco();
};

class Data
{

private:

    const char* MES_DISP[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    int Dia;
    string Mes = "";
    int Ano;
    void validar(const int DD, string, const int AA);


public:

    void setData(const int DD, string, const int AA);
    string getData();

};

class Horario
{

private:

    int horas;
    int minutos;
    void validar(int HH, int MM);

public:

    void setHorario(int HH, int MM);
    string getHorario();


};

class Email {

    private:

    string valor = "";
    void validar(string str);


    public:

    void setEmail(string str);
    string getEmail();



};

#endif

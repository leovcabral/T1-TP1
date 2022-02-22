#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Idioma
{

private:

    static const int TAM_DISP = 10;
    const char* disponivel[TAM_DISP] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    const char* selecionado = "";
    bool validar(const char* str);

public:

    void getDisp();
    bool setIdioma(const char* str);
    const char* getIdioma();
};

inline void Idioma::getDisp()
{

    int i;

    for (i = 0; i < TAM_DISP; i++)
    {
        std::cout << disponivel[i] << "\n";
    }

}

inline bool Idioma::validar(const char* str)
{

    int i;
    int verificador = 0;

    for(i = 0; i < TAM_DISP; i++)
    {

        if(strcmp(str,disponivel[i]) == 0)
        {
            verificador = 1;
        }

    }

    if(verificador == 1)
    {
        return true;
    }

    else return false;



}

inline bool Idioma::setIdioma(const char* str)
{

    if(validar(str))
    {

        this->selecionado = str;
        return true;

    }

    else return false;

}

inline const char* Idioma::getIdioma()
{

    std::cout << this->selecionado << "\n";

    return this->selecionado;
}

class Endereco
{

private:
    const char* valor = "";
    bool validar(const char* str);

public:

    bool setEndereco(const char* str);
    void getEndereco();
};

inline bool Endereco::validar(const char* str)
{

    bool pontos_repetidos = false;
    bool espacos_repetidos = false;



    while(*(str+1) != '\0')
    {


        if(*str == 32 && *(str+1) == 32)
        {
            espacos_repetidos = true;
        }

        if(*str == 46 && *(str+1) == 46)
        {
            pontos_repetidos = true;
        }

        str++;
    }

    if(pontos_repetidos || espacos_repetidos)
    {
        return false;
    }
    else return true;


}


inline bool Endereco::setEndereco(const char* str)
{

    if(validar(str))
    {

        this->valor = str;
        return true;

    }

    else return false;

}

inline void Endereco::getEndereco()
{

    std::cout << this-> valor << "\n";

}

class Data
{

private:

    const char* MES_DISP[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    int Dia;
    const char* Mes = "";
    int Ano;
    bool validar(const int DD, const char* MM, const int AA);


public:

    bool setData(const int DD, const char* MM, const int AA);
    void getData();

};

inline bool Data::validar(const int DD, const char* MM, const int AA)
{

    int dia_bisexto = 28;

    if(AA < 2000 || AA > 9999)
    {
        return false;
    }

    if((AA % 100 != 0 && AA % 4 == 0) || AA % 400 == 0)
    {
        dia_bisexto = 29;
    }


    if(strcmp(MM, "Jan") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if (strcmp(MM, "Fev") == 0) {

        if(DD >= 1 && DD <= dia_bisexto)
        {
            return true;
        }
        else return false;

    }
    else if (strcmp(MM, "Mar") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Abr") == 0) {

        if(DD >= 1 && DD <= 30)
        {
            return true;
        }
        else return false;

    }
     else if(strcmp(MM, "Mai") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Jun") == 0) {

        if(DD >= 1 && DD <= 30)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Jul") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Ago") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Set") == 0) {

        if(DD >= 1 && DD <= 30)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Out") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Nov") == 0) {

        if(DD >= 1 && DD <= 30)
        {
            return true;
        }
        else return false;

    }
    else if(strcmp(MM, "Dez") == 0) {

        if(DD >= 1 && DD <= 31)
        {
            return true;
        }
        else return false;

    }
    else {

        return false;

    }


}

inline bool Data::setData(const int DD, const char* MM, const int AA)
{

    if(validar(DD, MM, AA))
    {

        this->Dia = DD;
        this->Mes = MM;
        this->Ano = AA;

        return true;

    }

    else return false;

}

inline void Data::getData()
{

    std::cout << "Dia = " << this->Dia << "\n";
    std::cout << "Mes = " << this->Mes << "\n";
    std::cout << "Ano = " << this->Ano << "\n";

}

class Horario
{

private:

    int horas;
    int minutos;
    bool validar(int HH, int MM);

public:

    bool setHorario(int HH, int MM);
    void getHorario();


};

inline bool Horario::validar(int HH, int MM)
{

    if (HH>=0 && HH<=23 && MM>=0 && MM<=59)
    {

        return true;

    }

    else return false;


}

inline bool Horario::setHorario(int HH, int MM)
{
    if(validar(HH, MM))
    {

        this->horas = HH;
        this->minutos = MM;

        return true;

    }

    else return false;
}

inline void Horario::getHorario()
{

    std::cout << "horario = " << this->horas << ":" << this->minutos << "\n";

}

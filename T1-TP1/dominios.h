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
    const char* disponivel[TAM_DISP] = {"Ingles", "Chines Mandarim", "Hindi", "Espanhol", "Frances", "Arabe", "Bengali", "Russo", "Portugues", "Indonesio"};
    const char* selecionado = "";
    void validar(const char* str);

public:

    void getDisp();
    void setIdioma(const char* str);
    string getIdioma();
};

//inline void Idioma::getDisp()
//{
//
//    int i;
//
//    for (i = 0; i < TAM_DISP; i++)
//    {
//        std::cout << disponivel[i] << "\n";
//    }
//
//}

//inline void Idioma::validar(const char* str)
//{
//
//    int i;
//    int verificador = 0;
//
//    for(i = 0; i < TAM_DISP; i++)
//    {
//
//        if(strcmp(str,disponivel[i]) == 0)
//        {
//            verificador = 1;
//        }
//
//    }
//
//    if(verificador == 1) {
//    }
//    else {
//        throw invalid_argument("Idioma indisponivel");
//    }
//
//}

//inline void Idioma::setIdioma(const char* str)
//{
//
//    validar(str);
//    this->selecionado = str;
//
//}
//
//inline string Idioma::getIdioma()
//{
//
//    std::cout << this->selecionado << "\n";
//    return selecionado;
//
//}

class Endereco
{

private:
    const char* valor = "";
    void validar(const char* str);

public:

    void setEndereco(const char* str);
    string getEndereco();
};

//inline void Endereco::validar(const char* str)
//{
//
//    bool pontos_repetidos = false;
//    bool espacos_repetidos = false;
//
//
//
//    while(*(str+1) != '\0')
//    {
//
//
//        if(*str == 32 && *(str+1) == 32)
//        {
//            espacos_repetidos = true;
//        }
//
//        if(*str == 46 && *(str+1) == 46)
//        {
//            pontos_repetidos = true;
//        }
//
//        str++;
//    }
//
//    if(pontos_repetidos || espacos_repetidos)
//    {
//        throw invalid_argument("não use pontos e ou espaços seguidos");
//    }
//    else {
//    }
//
//}
//
//
//inline void Endereco::setEndereco(const char* str)
//{
//
//    validar(str);
//    this->valor = str;
//
//}
//
//inline string Endereco::getEndereco()
//{
//
//    std::cout << this-> valor << "\n";
//    return valor;
//
//}

class Data
{

private:

    const char* MES_DISP[12] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out", "Nov", "Dez"};
    int Dia;
    const char* Mes = "";
    int Ano;
    void validar(const int DD, const char* MM, const int AA);


public:

    void setData(const int DD, const char* MM, const int AA);
    void getData();

};

//inline void Data::validar(const int DD, const char* MM, const int AA)
//{
//
//    int dia_bisexto = 28;
//
//    if(AA < 2000 || AA > 9999)
//    {
//        throw invalid_argument("ano deve estar entre 2000 e 9999");
//
//    }
//
//    if((AA % 100 != 0 && AA % 4 == 0) || AA % 400 == 0)
//    {
//        dia_bisexto = 29;
//    }
//
//
//    if(strcmp(MM, "Jan") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de janeiro deve estar entre 1 e 31");
//        }
//
//    }
//    else if (strcmp(MM, "Fev") == 0) {
//
//        if(DD >= 1 && DD <= dia_bisexto)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de fevereio deve estar entre 1 e 28 ou 1 e 29 quando ano eh bisexto");
//        }
//
//    }
//    else if (strcmp(MM, "Mar") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de março deve estar entre 1 e 31");
//        }
//
//    }
//    else if(strcmp(MM, "Abr") == 0) {
//
//        if(DD >= 1 && DD <= 30)
//        {
//        }
//
//        else{
//            throw invalid_argument("dia do mes de abril deve estar entre 1 e 30");
//        }
//
//    }
//     else if(strcmp(MM, "Mai") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de maio deve estar entre 1 e 31");
//        }
//
//    }
//    else if(strcmp(MM, "Jun") == 0) {
//
//        if(DD >= 1 && DD <= 30)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de junho deve estar entre 1 e 30");
//        }
//
//    }
//    else if(strcmp(MM, "Jul") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de julho deve estar entre 1 e 31");
//        }
//
//    }
//    else if(strcmp(MM, "Ago") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de agosto deve estar entre 1 e 31");
//        }
//
//    }
//    else if(strcmp(MM, "Set") == 0) {
//
//        if(DD >= 1 && DD <= 30)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de setembro deve estar entre 1 e 30");
//        }
//
//    }
//    else if(strcmp(MM, "Out") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de outubro deve estar entre 1 e 31");
//        }
//
//    }
//    else if(strcmp(MM, "Nov") == 0) {
//
//        if(DD >= 1 && DD <= 30)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de novembro deve estar entre 1 e 30");
//        }
//
//    }
//    else if(strcmp(MM, "Dez") == 0) {
//
//        if(DD >= 1 && DD <= 31)
//        {
//        }
//        else{
//            throw invalid_argument("dia do mes de dezembro deve estar entre 1 e 31");
//        }
//
//    }
//    else {
//
//        throw invalid_argument("Mes inválido");
//
//    }
//
//
//}
//
//inline void Data::setData(const int DD, const char* MM, const int AA)
//{
//
//    validar(DD, MM, AA);
//
//    this->Dia = DD;
//    this->Mes = MM;
//    this->Ano = AA;
//
//}
//
//inline void Data::getData()
//{
//
//    std::cout << "Dia = " << this->Dia << "\n";
//    std::cout << "Mes = " << this->Mes << "\n";
//    std::cout << "Ano = " << this->Ano << "\n";
//
//
//
//}

class Horario
{

private:

    int horas;
    int minutos;
    void validar(int HH, int MM);

public:

    void setHorario(int HH, int MM);
    int* getHorario();


};

//inline void Horario::validar(int HH, int MM)
//{
//
//    if (HH>=0 && HH<=23 && MM>=0 && MM<=59) {
//    }
//    else {
//        throw invalid_argument("horário inválido");
//    }
//
//
//}
//
//inline void Horario::setHorario(int HH, int MM)
//{
//        validar(HH, MM);
//        this->horas = HH;
//        this->minutos = MM;
//}
//
//inline int* Horario::getHorario()
//{
//    int arr[2] = {this->horas, this->minutos};
//    std::cout << "horario = " << this->horas << ":" << this->minutos << "\n";
//
//    return &arr[0];
//
//}


class Email {

    private:

    string valor = "";
    void validar(string str);


    public:

    void setEmail(string str);
    string getEmail();



};

//inline void Email::validar(string str) {
//
//
//    string parte_local;
//    string dominio;
//    int i = 0;
//    int aux = 0;
//
//
//    for(i = 0; i < str.length(); i++) {
//        if(str[i] == '@') {
//            aux = i;
//        }
//    }
//
//    if(aux == 0) {
//
//        throw invalid_argument("email deve conter o caractere => @");
//
//    }
//
//    std::cout << aux << endl;
//
//    parte_local = str.substr(0,aux);
//    dominio = str.substr(aux+1);
//
//    std::cout << parte_local  << " " << dominio << endl;
//    std::cout << parte_local.length()  << " " << dominio.length() << endl;
//
//    if(parte_local.length() == 0 || dominio.length() == 0) {
//         throw invalid_argument("parte local e ou dominio não podem ser vazios");
//    }
//    else {
//
//        // verifica se parte-local é composta por até 64 caracteres.
//
//        if(parte_local.length() > 64) {
//            throw invalid_argument("parte local deve conter no máximo 64 caracteres.");
//        }
//
//        // verifica se Caractere de parte local pode ser letra maiúscula (A-Z) ou minúscula (a-z).
//        // Caractere de parte local pode ser dígito (0-9).
//        // Caractere de parte local pode ser ! # $ % & ' * + - / = ? ^ _ ` { | } ~
//
//        for(i = 0; i < parte_local.length(); i++) {
//
//            if(parte_local[i] >= 'A' && parte_local[i] <= 'Z'){
//            }
//            else if(parte_local[i] >= 'a' && parte_local[i] <= 'z'){
//            }
//            else if(parte_local[i] >= '0' && parte_local[i] <= '9'){
//            }
//            else if(
//            parte_local[i] == '.' ||
//            parte_local[i] == '!' ||
//            parte_local[i] == '#' ||
//            parte_local[i] == '$' ||
//            parte_local[i] == '%' ||
//            parte_local[i] == '&' ||
//            parte_local[i] ==  39 ||
//            parte_local[i] == '*' ||
//            parte_local[i] == '+' ||
//            parte_local[i] == '-' ||
//            parte_local[i] == '/' ||
//            parte_local[i] == '=' ||
//            parte_local[i] == '?' ||
//            parte_local[i] == '^' ||
//            parte_local[i] == '_' ||
//            parte_local[i] == '`' ||
//            parte_local[i] == '{' ||
//            parte_local[i] == '|' ||
//            parte_local[i] == '}' ||
//            parte_local[i] == '~') {
//            }
//            else {
//               throw invalid_argument("Caractere invalido na parte local");
//            }
//
//        }
//
//        //verifica que Caractere de parte local pode ser ponto (.) desde que não seja o primeiro ou o último
//        //caractere e que não ocorra em sequência.
//
//        if (parte_local[0] == '.' || parte_local[parte_local.length()-1] == '.') {
//            throw invalid_argument("parte local não pode iniciar e ou terminar com ponto");
//
//        }
//
//        for(i = 0; i < parte_local.length()-1; i++) {
//
//            if(parte_local[i] =='.' && parte_local[i+1] =='.') {
//                throw invalid_argument("não use dois pontos seguidos");
//
//            }
//
//        }
//
//        // verifica se domínio é composto por até 253 caracteres.
//
//        if(dominio.length() > 253) {
//
//            throw invalid_argument("dominio deve conter no maximo 253 caracteres");
//
//        }
//
//        // Caractere de domínio pode ser letra maiúscula (A-Z) ou minúscula (a-z).
//        //  Caractere de domínio pode ser dígito (0-9).
//        //  Caractere de domínio pode hífen (-).
//
//       for (i = 0; i < dominio.length(); i++) {
//
//
//            if(dominio[i] >= 'A' && dominio[i] <= 'Z'){
//            }
//            else if(dominio[i] >= 'a' && dominio[i] <= 'z'){
//            }
//            else if(dominio[i] >= '0' && dominio[i] <= '9'){
//            }
//            else if(dominio[i] == '-' || dominio[i] == '.') {
//            }
//            else {
//                throw invalid_argument("Caractere invalido na parte do dominio");
//            }
//
//       }
//
//       // Caractere de domínio pode ser ponto (.) desde que não seja o primeiro caractere e não ocorra
//       // em sequência
//
//       if (dominio[0] == '.' || dominio[dominio.length()-1] == '.') {
//            throw invalid_argument("dominio não pode iniciar e ou terminar com ponto");
//
//        }
//
//        for(i = 0; i < dominio.length()-1; i++) {
//
//            if(dominio[i] =='.' && dominio[i+1] =='.') {
//                throw invalid_argument("não use dois pontos seguidos");
//
//            }
//
//        }
//
//    }
//
//
//
// }
//
//inline void Email::setEmail(string str) {
//
//    validar(str);
//    this->valor = str;
//
//}
//
//
//inline string Email::getEmail() {
//
//    std::cout << "email= "<< this->valor <<"n";
//    return valor;
//
//}
#endif

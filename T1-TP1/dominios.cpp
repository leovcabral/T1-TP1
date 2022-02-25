#include <iostream>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "dominios.h"

using namespace std;

// idioma //////////////

void Idioma::getDisp()
{

    int i;

    for (i = 0; i < TAM_DISP; i++)
    {
        std::cout << disponivel[i] << "\n";
    }

}

void Idioma::validar(string str)
{

    int i;
    int verificador = 0;

    for(i = 0; i < TAM_DISP; i++)
    {

        if(str == disponivel[i])
        {
            verificador = 1;
        }

    }

    if(verificador == 1) {
    }
    else {
        throw invalid_argument("Idioma indisponivel");
    }

}

void Idioma::setIdioma(string str)
{

    validar(str);
    this->selecionado = str;

}

string Idioma::getIdioma()
{

    return selecionado;

}

///endereço /////////////////////

void Endereco::validar(string str)
{

    bool pontos_repetidos = false;
    bool espacos_repetidos = false;
    int i;


    for(i = 0; i < str.length()-1; i++) {


        if(str[i] == 32 && str[i+1] == 32)
        {
            espacos_repetidos = true;
        }

        if(str[i] == 46 && str[i+1] == 46)
        {
            pontos_repetidos = true;
        }

    }


    if(pontos_repetidos || espacos_repetidos)
    {
        throw invalid_argument("não use pontos e ou espaços seguidos");
    }
    else {
    }

}


void Endereco::setEndereco(string str)
{

    validar(str);
    this->valor = str;

}

string Endereco::getEndereco()
{

    return valor;

}

/// Data ///////////////

void Data::validar(const int DD, string MM, const int AA)
{

    int dia_bisexto = 28;

    if(AA < 2000 || AA > 9999)
    {
        throw invalid_argument("ano deve estar entre 2000 e 9999");

    }

    if((AA % 100 != 0 && AA % 4 == 0) || AA % 400 == 0)
    {
        dia_bisexto = 29;
    }


    if(MM == "Jan") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de janeiro deve estar entre 1 e 31");
        }

    }
    else if (MM == "Fev") {

        if(DD >= 1 && DD <= dia_bisexto)
        {
        }
        else{
            throw invalid_argument("dia do mes de fevereio deve estar entre 1 e 28 ou 1 e 29 quando ano eh bisexto");
        }

    }
    else if (MM == "Mar") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de março deve estar entre 1 e 31");
        }

    }
    else if(MM == "Abr") {

        if(DD >= 1 && DD <= 30)
        {
        }

        else{
            throw invalid_argument("dia do mes de abril deve estar entre 1 e 30");
        }

    }
     else if(MM == "Mai") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de maio deve estar entre 1 e 31");
        }

    }
    else if(MM == "Jun") {

        if(DD >= 1 && DD <= 30)
        {
        }
        else{
            throw invalid_argument("dia do mes de junho deve estar entre 1 e 30");
        }

    }
    else if(MM == "Jul") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de julho deve estar entre 1 e 31");
        }

    }
    else if(MM == "Ago") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de agosto deve estar entre 1 e 31");
        }

    }
    else if(MM == "Set") {

        if(DD >= 1 && DD <= 30)
        {
        }
        else{
            throw invalid_argument("dia do mes de setembro deve estar entre 1 e 30");
        }

    }
    else if(MM == "Out") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de outubro deve estar entre 1 e 31");
        }

    }
    else if(MM == "Nov") {

        if(DD >= 1 && DD <= 30)
        {
        }
        else{
            throw invalid_argument("dia do mes de novembro deve estar entre 1 e 30");
        }

    }
    else if(MM == "Dez") {

        if(DD >= 1 && DD <= 31)
        {
        }
        else{
            throw invalid_argument("dia do mes de dezembro deve estar entre 1 e 31");
        }

    }
    else {

        throw invalid_argument("Mes inválido");

    }
}


bool Titulo::CheckRepeated(string valor, char caracter){
    int contador = 0;
    for(int i = 0; i < valor.length(); i++){
        if(valor[i] == caracter){
            contador++;
            if(contador >= 2){
                return true;
                break;
            }
        }else{
            contador = 0;
        }
    }
    return false;
}


bool Descricao::CheckRepeated(string valor, char caracter){
    int contador = 0;
    for(int i = 0; i < valor.length(); i++){
        if(valor[i] == caracter){
            contador++;
            if(contador >= 2){
                return true;
                break;
            }
        }else{
            contador = 0;
        }
    }
    return false;
}

bool Senha::CheckRepeated(string valor, char caracter){
    int contador = 0;
    for(int i = 0; i < valor.length(); i++){
        if(valor[i] == caracter){
            contador++;
            if(contador >= 2){
                return true;
                break;
            }
        }else{
            contador = 0;
        }
    }
    return false;
}

bool Senha::MagicThree(string valor){
    bool has_upper = false;
    bool has_lower = false;
    bool has_digit = false;
    for(int i = 0; i < valor.length(); i++)
    {
        if( isupper(valor[i]) ){
            has_upper = true;
        }
        else if( islower(valor[i]) ){
            has_lower = true;
        }
        else if( valor[i] ) {
            has_digit = true;
       }
    }
    if(has_upper == true && has_lower == true && has_digit && true){
        return true;}
    else{
        return false;}
   }

//bool CheckIfAlpha(string valor){
//    for(int i = 0; i < valor.length(); i++){
//        if(!isalpha(valor[i])){
//            return false;
//            }
//    }
//    return true;
//}


void Cidade::validar(string valor){
    string cidades[15] = {"Hong Kong", "Bangkok", "Macau", "Singapura",
                    "Londres", "Paris", "Dubai", "Delhi", "Istambul", "Kuala Lumpur",
                    "Nova Iorque", "Antalya"," Mumbai", "Shenzhen", "Phuket"};
    bool in = false;
    for(int i = 0; i < 15; i++){
         if(cidades[i] == valor){
            in = true;
            break;
         }
    }
     if(in == false){
        throw invalid_argument("Argumento invalido.");}
}

void Cidade::setCidade(string valor){
    validar(valor);
    this->valor = valor;
}


void Descricao::validar(string valor){
    bool right_length = false;
    if(valor.length() <= 30){
        right_length = true;
    }
    bool repeated_spaces = CheckRepeated(valor, ' ');
    bool repeated_dots = CheckRepeated(valor, '.');
    if(right_length == false || repeated_dots == true || repeated_spaces == true){
        throw invalid_argument("Argumento invalido.");
    }
}

void Descricao::setDescription(string valor){
    validar(valor);
    this->valor = valor;
}


void Titulo::validar(string valor){
    bool right_charaters = true;
    bool right_length = false;
    if(valor.length()<= 30){
        right_length = true;
    }
    for(int i =0; i < valor.length(); i++){
        if(!isalpha(valor[i]) && valor[i] != ' ' && valor[i] != '.'){
            right_charaters = false;
        }
    }

    bool repeated_spaces = CheckRepeated(valor, ' ');
    bool repeated_dots = CheckRepeated(valor, '.');
    if(right_length == false || repeated_dots == true || repeated_spaces == true || right_charaters == false){
        throw invalid_argument("Argumento invalido.");
    }
}


void Titulo::setTitulo(string valor){
    validar(valor);
    this->valor = valor;
}


void Senha::validar(string valor){
    bool repeated_char = false;
    bool all_digit_or_num = true;
    bool magic_three = MagicThree(valor) ;
    for( int i = 0; i < valor.length(); i++){
        if(CheckRepeated(valor, valor[i]) == true){
            repeated_char = true;
        }
        if( !isalpha(valor[i]) && !isdigit(valor[i]) ){
            all_digit_or_num = false;
        }
    }
    if(repeated_char == true || all_digit_or_num == false || magic_three == false){
        throw invalid_argument("Argumento invalido.");}
}

//string Senha::getPassword() const{
//    string hidden_password;
//    for( int i = 0; i < valor.length() ; i++)
//    {
//        hidden_password = hidden_password + 'X';
//
//    }
//    return hidden_password;
//}

void Senha::setPassword(string valor){
    validar(valor);
    this->valor = valor;
}

void Nota::validar(int nota){
    if (nota > 5 || nota < 0){
        throw invalid_argument("Argumento invalido.");
    }
}

void Nota::setValor(int valor){
    validar(valor);
    this->valor = valor;
}


void Duracao::validar(int duracao){
    bool valido = false;
    for (const int n : valores_validos){
        if (duracao == n) {
            valido = true;
        }
    }

    if (valido == false) {
        throw invalid_argument("Argumento invalido");
    }
}

void Duracao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}


void Nome::validar(string nome){
    bool tamanho = false;
    bool primeira_letra = false;
    bool caracteres_validos = true;

    if (nome.length() >= 5 && nome.length() <=20){     //tamanho correto
        tamanho = true;
    }

    if (isupper(nome[0])){                           //primeira letra maiuscula
        primeira_letra = true;
    }

    bool letra_valida;
    for(int i = 0; nome[i]; i++){                    //caracteres validos
        letra_valida = false;
        if (isalpha(nome[i])){
            letra_valida = true;
        }
        else if (nome[i] == '.'){
            if (i >= 1 && isalpha(nome[i-1])){
                if (i+1 == nome.length()){
                    letra_valida = true;
                }
                else if (nome[i+1] == ' '){
                    letra_valida = true;
                }
            }
        }
        else if (nome[i] == ' '){
            if(i+1 < nome.length()){
                if (nome[i+1] != ' '){
                    letra_valida = true;
                }
            }
            else{
                    letra_valida = true;
            }
        }

        if (letra_valida == false){
            caracteres_validos = false;
        }
    }

    if(tamanho == false || primeira_letra == false || caracteres_validos == false){
        throw invalid_argument("Argumento invalido");
    }

}

void Nome::setValor(string valor){
    validar(valor);
    this->valor = valor;
}


void Codigo::validar(string codigo){
    bool tamanho = false;
    bool so_digitos = true;
    bool codigo_verificador = false;

    if (codigo.length() == 7){
        tamanho = true;
    }

    for (int i = 0; codigo[i]; i++){
        if (!isdigit(codigo[i])){
            so_digitos = false;
        }
    }

    int soma = 0;
    int multiplicador = 2;
    int digito_verificador;
    for (int i = codigo.length() - 2; i >= 0 ; i--){
        if (multiplicador < 9){
          soma += multiplicador*(codigo[i] - '0');
          multiplicador++;
        }
      }
    digito_verificador = (soma*10) % 11;
    if (digito_verificador == 10){
        digito_verificador = 0;
    }
    if (digito_verificador == codigo[6] - '0'){
        codigo_verificador = true;
    }

    if (tamanho == false || so_digitos == false || codigo_verificador == false){
        throw invalid_argument("Argumento invalido");
   }
}

void Codigo::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

void Data::setData(const int DD, string MM, const int AA)
{

    validar(DD, MM, AA);

    this->Dia = DD;
    this->Mes = MM;
    this->Ano = AA;

}

string Data::getData()
{
    string data;

    if(Dia < 10) {
        data =  "0" + std::to_string(Dia) + "-" + Mes + "-" + std::to_string(Ano);
    }
    else {
        data = std::to_string(Dia) + "-" + Mes + "-" + std::to_string(Ano);
    }


    return data;


}

///Horario ////////////////

void Horario::validar(int HH, int MM)
{

    if (HH>=0 && HH<=23 && MM>=0 && MM<=59) {
    }
    else {
        throw invalid_argument("horário inválido");
    }


}

void Horario::setHorario(int HH, int MM)
{
        validar(HH, MM);
        this->horas = HH;
        this->minutos = MM;
}

string Horario::getHorario()
{
    string str;

    if(horas < 10 && minutos < 10) {
        str =  "0" + std::to_string(horas) + ":" + "0" + std::to_string(minutos);
    }
    else if(horas < 10 && minutos >= 10){
         str =  "0" + std::to_string(horas) + ":" + std::to_string(minutos);
    }
    else if(horas >= 10 && minutos < 10){
         str = std::to_string(horas) + ":" + "0" + std::to_string(minutos);
    }
    else if(horas >= 10 && minutos >= 10){
         str = std::to_string(horas) + ":" + std::to_string(minutos);
    }


    return str;

}

//// Eamil ///////////////

void Email::validar(string str) {


    string parte_local;
    string dominio;
    int i = 0;
    int aux = 0;


    for(i = 0; i < str.length(); i++) {
        if(str[i] == '@') {
            aux = i;
        }
    }

    if(aux == 0) {

        throw invalid_argument("email deve conter o caractere => @");

    }


    parte_local = str.substr(0,aux);
    dominio = str.substr(aux+1);


    if(parte_local.length() == 0 || dominio.length() == 0) {
         throw invalid_argument("parte local e ou dominio não podem ser vazios");
    }
    else {

        // verifica se parte-local é composta por até 64 caracteres.

        if(parte_local.length() > 64) {
            throw invalid_argument("parte local deve conter no máximo 64 caracteres.");
        }

        // verifica se Caractere de parte local pode ser letra maiúscula (A-Z) ou minúscula (a-z).
        // Caractere de parte local pode ser dígito (0-9).
        // Caractere de parte local pode ser ! # $ % & ' * + - / = ? ^ _ ` { | } ~

        for(i = 0; i < parte_local.length(); i++) {

            if(parte_local[i] >= 'A' && parte_local[i] <= 'Z'){
            }
            else if(parte_local[i] >= 'a' && parte_local[i] <= 'z'){
            }
            else if(parte_local[i] >= '0' && parte_local[i] <= '9'){
            }
            else if(
            parte_local[i] == '.' ||
            parte_local[i] == '!' ||
            parte_local[i] == '#' ||
            parte_local[i] == '$' ||
            parte_local[i] == '%' ||
            parte_local[i] == '&' ||
            parte_local[i] ==  39 ||
            parte_local[i] == '*' ||
            parte_local[i] == '+' ||
            parte_local[i] == '-' ||
            parte_local[i] == '/' ||
            parte_local[i] == '=' ||
            parte_local[i] == '?' ||
            parte_local[i] == '^' ||
            parte_local[i] == '_' ||
            parte_local[i] == '`' ||
            parte_local[i] == '{' ||
            parte_local[i] == '|' ||
            parte_local[i] == '}' ||
            parte_local[i] == '~') {
            }
            else {
               throw invalid_argument("Caractere invalido na parte local");
            }

        }

        //verifica que Caractere de parte local pode ser ponto (.) desde que não seja o primeiro ou o último
        //caractere e que não ocorra em sequência.

        if (parte_local[0] == '.' || parte_local[parte_local.length()-1] == '.') {
            throw invalid_argument("parte local não pode iniciar e ou terminar com ponto");

        }

        for(i = 0; i < parte_local.length()-1; i++) {

            if(parte_local[i] =='.' && parte_local[i+1] =='.') {
                throw invalid_argument("não use dois pontos seguidos");

            }

        }

        // verifica se domínio é composto por até 253 caracteres.

        if(dominio.length() > 253) {

            throw invalid_argument("dominio deve conter no maximo 253 caracteres");

        }

        // Caractere de domínio pode ser letra maiúscula (A-Z) ou minúscula (a-z).
        //  Caractere de domínio pode ser dígito (0-9).
        //  Caractere de domínio pode hífen (-).

       for (i = 0; i < dominio.length(); i++) {


            if(dominio[i] >= 'A' && dominio[i] <= 'Z'){
            }
            else if(dominio[i] >= 'a' && dominio[i] <= 'z'){
            }
            else if(dominio[i] >= '0' && dominio[i] <= '9'){
            }
            else if(dominio[i] == '-' || dominio[i] == '.') {
            }
            else {
                throw invalid_argument("Caractere invalido na parte do dominio");
            }

       }

       // Caractere de domínio pode ser ponto (.) desde que não seja o primeiro caractere e não ocorra
       // em sequência

       if (dominio[0] == '.' || dominio[dominio.length()-1] == '.') {
            throw invalid_argument("dominio não pode iniciar e ou terminar com ponto");

        }

        for(i = 0; i < dominio.length()-1; i++) {

            if(dominio[i] =='.' && dominio[i+1] =='.') {
                throw invalid_argument("não use dois pontos seguidos");

            }

        }

    }



 }

void Email::setEmail(string str) {

    validar(str);
    this->valor = str;

}


string Email::getEmail() {

    return valor;

}



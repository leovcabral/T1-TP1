#include <iostream>
#include <dominios.h>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

bool CheckRepeated(string valor, char caracter){
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

bool MagicThree(string valor){
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

bool CheckIfAlpha(string valor){
    for(int i = 0; i < valor.length(); i++){
        if(!isalpha(valor[i])){
            return false;
            }
    }
    return true;
}


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
    bool right_length = false;
    if(valor.length()<= 30){
        right_length = true;
    }
    bool only_letters = CheckIfAlpha(valor);
    bool repeated_spaces = CheckRepeated(valor, ' ');
    bool repeated_dots = CheckRepeated(valor, '.');
    if(right_length == false || repeated_dots == true || repeated_spaces == true || only_letters == false){
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

string Senha::getPassword() const{
    string hidden_password;
    for( int i = 0; i < valor.length() ; i++)
    {
        hidden_password = hidden_password + 'X';

    }
    return hidden_password;
}

void Senha::setPassword(string valor){
    validar(valor);
    this->valor = valor;
}

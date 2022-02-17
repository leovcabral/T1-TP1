#include <iostream>
#include <dominios.h>
#include <cstring>

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
    bool at_least = false;
}


void Senha::setPassword(string valor){
    validar(valor);
    this->valor = valor;
}

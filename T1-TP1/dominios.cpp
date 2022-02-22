#include <iostream>
#include <dominios.h>
#include <cctype>
#include <ctype.h>
#include <cstring>

using namespace std;

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


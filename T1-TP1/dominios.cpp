#include <iostream>
#include <dominios.h>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

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

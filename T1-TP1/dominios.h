#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>


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



using namespace std;

/// Domínio Cidade.
///
/// Campo da entidade excursão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Tem valor definido que deve estar na lista de cidades definidas.
///~~~~~~~~~~~~~~~~~~~~~~~~~~
class Cidade {
    private:
        string valor;
        void validar(string);
    public:
        /// Funcão para definir valor da classe Cidade.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
        /// @param valor String que deve ser definida como cidade da instancia.
        void setCidade(string);
        ///@returns string com valor da instancia da classe cidade.
        string getCidade() const;
};

inline string Cidade::getCidade() const {
    return valor;
}

/// Domínio Nota.
///
/// Campo das entidades excursão e avaliação.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
/// Valor inteiro de 0 a 5
///~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Nota {
    private:
        int valor;
        void validar(int);
    public:
        /// Funcão para definir valor da classe Nota.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
         /// @param valor Inteiro que deve ser definido como Nota da instancia.
        void setValor(int);
        ///@returns inteiro com valor da instancia da classe Nota.
        int getValor() const;
};

inline int Nota::getValor() const {
    return valor;
}

/// Domínio Descrição.
///
///Campo das entidades excursão e avaliação.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos do valor:
///  0 a 30 caracteres.
///  Não há espaços em branco em sequência.
///  Não há pontos (.) em sequência.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Descricao  {
    private :
        string valor;
        void validar(string);
        bool CheckRepeated(string, char);
    public:
        /// Funcão para definir valor da classe Descrição.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
         /// @param valor String que deve ser definida como valor da instancia da classe Descrição.
        void setDescription(string);
        ///@returns string com valor da instancia da classe Descrição.
        string getDescription() const;
};

inline string Descricao::getDescription() const {
    return valor;
}


/// Domínio Título.
///
///Campo das entidade excursão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos do valor:
/// 5 a 20 letras (A-Z) (a-z)
/// Não há espaços em branco em sequência.
/// Não há pontos (.) em sequência.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Titulo {
    private:
        string valor;
        void validar(string);
        bool CheckRepeated(string,char);
    public:
        /// Funcão para definir valor da classe Título.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
        /// @param valor String que deve ser definida como valor da instancia da classe Título.
        void setTitulo(string);
        ///@returns string com valor da instancia da classe Título.
        string getTitulo() const;
};

inline string Titulo::getTitulo() const {
    return valor;
}

/// Domínio Senha.
///
///Campo da entidade Usuário.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos do valor:
/// Cada caractere X é letra (A-Z ou a-z) ou dígito (0-9).
/// Não existe caracter repetido.
/// Existe pelo menos uma letra maiúscula, uma letra minúscula e um dígito.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

class Senha {
    private:
        string valor;
        void validar(string);
        bool MagicThree(string);
        bool CheckRepeated(string,char);
    public:
        /// Funcão para definir valor da classe Senha.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
        /// @param valor String que deve ser definida como valor da instancia da classe Senha.
        void setPassword(string);
        ///@returns string com valor da instancia da classe Senha.
        string getPassword() const;
};

inline string Senha::getPassword() const {
    return valor;
}

/// Domínio Nome.
///
/// Campo da entidade Usuário.
class Nome {
    private:
        string valor;
        void validar(string);
    public:
        /// Função que define o valor da classe Nome.
        /// @param valor String que deve ser definida como valor da instancia da classe Nome.
        void setTitulo(string);
        void setValor(string);
        ///@returns string com valor da instancia da classe Nome.
        string getValor() const;
};

inline string Nome::getValor() const {
    return valor;
}


/// Domínio Duração.
///
/// Campo da entidade Excursão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos do valor:
///  Tem valor 30, 60, 90, 120 ou 180.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Duracao {
    private:
        int valor;
        const int valores_validos[5] = {30, 60, 90, 120, 180};
        void validar(int);
    public:
        /// Funcão para definir valor da classe Duração.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
         /// @param valor Inteiro que deve ser definido como Nota da Duração.
        void setValor(int);
        ///@returns inteiro com valor da instancia da classe Duração.
        int getValor() const;
};

inline int Duracao::getValor() const {
    return valor;
}

/// Domínio Código.
///
///Campo da entidades Excursão, Avaliação e Sessão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos do valor:
///  D é dígito (0-9).
///  É validado por um algoritmo privado.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Codigo {
    private:
        string valor;
        void validar(string);
    public:
        /// Funcão para definir valor da classe Código.
        /// Valida o argumento conforme os requisitos da classe. Se o argumento for valido, o argumento passado é definido como valor para a instancia.
        /// @param valor String que deve ser definida como valor da instancia da classe Código.
        void setValor(string);
        ///@returns string com valor da instancia da classe Código.
        string getValor() const;
};

inline string Codigo::getValor() const {
    return valor;
}

#endif

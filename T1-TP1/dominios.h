#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <cstring>

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
        /// Funcão para definir valor da classe Cidade
        /// Valida os requisitos da classe. Se o argumento for valido, o argumento passado é definido como Valor.
        void setCidade(string);
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
        void setValor(int);
        int getValor() const;
};

inline int Nota::getValor() const {
    return valor;
}

/// Domínio Descrição.
///
///Campo das entidades excursão e avaliação.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos:
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
        void setDescription(string);
        string getDescription() const;
};

inline string Descricao::getDescription() const {
    return valor;
}


/// Domínio Título.
///
///Campo das entidade excursão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos:
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
        void setTitulo(string);
        string getTitulo() const;
};

inline string Titulo::getTitulo() const {
    return valor;
}

/// Domínio Senha.
///
///Campo da entidade Usuário.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos:
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
        void setPassword(string);
        string getPassword() const;
};

inline string Senha::getPassword() const {
    return valor;
}

/// Domínio Nome.
///
///Campo da entidade Usuário.
class Nome {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Nome::getValor() const {
    return valor;
}


/// Domínio Duração.
///
///Campo da entidade Excursão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos:
///  Tem valor 30, 60, 90, 120 ou 180.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Duracao {
    private:
        int valor;
        const int valores_validos[5] = {30, 60, 90, 120, 180};
        void validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Duracao::getValor() const {
    return valor;
}

/// Domínio Código.
///
///Campo da entidades Excursão, Avaliação e Sessão.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~.md
///Requisitos:
///  D é dígito (0-9).
///  É validado por um algoritmo privado.
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
class Codigo {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const {
    return valor;
}

#endif

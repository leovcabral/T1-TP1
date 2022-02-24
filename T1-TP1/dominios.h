#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <cstring>

using namespace std;

class Cidade {
    private:
        string valor;
        void validar(string);
    public:
        void setCidade(string);
        string getCidade() const;
};

inline string Cidade::getCidade() const {
    return valor;
}

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

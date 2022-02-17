#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>

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


class Descricao  {
    private :
        string valor;
        void validar(string);
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
    public:
        void setPassword(string);
        string getPassword() const;

};

#endif

#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <stdexcept>
#include <cstring>

using namespace std;

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


#endif

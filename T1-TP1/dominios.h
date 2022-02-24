#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

#include <iostream>
#include <stdlib.h>
#include <string.h>


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

=======
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

>>>>>>> main
#endif

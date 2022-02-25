#ifndef ENTIDADES_H
#define ENTIDADES_H
#include "dominios.h"
using namespace std;

class Usuario{
    private:
        Nome        nome;
        Email       email;
        Senha       senha;
        Telefone    telefone;
    public:
        void setNome(const Nome&);
        Nome getNome() const;

        void setEmail(const Email&);
        Email getEmail() const;

        void setSenha(const Senha&);
        Senha getSenha() const;
};

inline void Usuario::setNome(const Nome &nome){
    this->nome = nome;
}

inline Nome Usuario::getNome() const{
    return nome;
}

inline void Usuario::setSenha(const Senha &senha){
    this->senha = senha;
}

inline Senha Usuario::getSenha() const{
    return senha;
}


inline void Usuario::setEmail(const Email &email){
    this->email = email;
}

inline Email Usuario::getEmail() const{
    return email;
}

class Avaliacao{
    private:
        Nota nota;
        Descricao descricao;
        Codigo codigo;
    public:
        void setValor(const Nota&);
        Nota getNota() const;

        void setDescricao(const Descricao&);
        Descricao getDescricao() const;

        void setCodigo(const Codigo&);
        Codigo getCodigo() const;
};









#endif // ENTIDADES_H

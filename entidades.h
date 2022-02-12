#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo sugerida para declara��o de classe entidade.
// Substituir Entidade por nome da classe.
// Substituir Dominio.
// Substituir nomeAtributo.

class Entidade {
    private:
            Dominio nomeAtributo;                   // Declarar cada atributo da classe.
    public:
            void setnomeAtributo(const Dominio&);   // Declarar m�todo set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar m�todo get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplo de declara��o de classe entidade e implementa��es de m�todos.
//Email:
//Matricula: 202021749
// Felipe Dantas Borges
class Excursao {
private:
    Codigo      codigo;
    Titulo  titulo;
    Nota nota;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;

    void setTitulo(const Titulo&);
    Titulo getTitulo() const;

    void setNota(const Nota&);
    Nota getNotao() const;

    void setCidade(const Cidade&);
    Cidade getCidade() const;

    void setDuracao(const Duracao&);
    Duracao getDuracao() const;

    void setDescricao(const Descricao&);
    Descricao getDescricao() const;

    void setEndereco(const Endereco&);
    Endereco getEndereco() const;
};
//#--------------------------------------------------------
inline void Excursao::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}
inline Codigo Excursao::getCodigo() const {
    return codigo;
}
//#---------------------
inline void Excursao::setTitulo(const Titulo& titulo){
    this->titulo = titulo;
}
inline Titulo Excursao::getTitulo() const {
    return titulo;
}
//#---------------------
inline void Excursao::setNota(const Nota& nota){
    this->nota = nota;
}
inline Nota Excursao::getNota() const {
    return nota;
}
//#---------------------
inline void Excursao::setCidade(const Cidade& cidade){
    this->cidade = cidade;
}
inline Cidade Excursao::getCidade() const {
    return cidade;
}
//#---------------------
inline void Excursao::setDuracao(const Duracao& duracao){
    this->duracao = duracao;
}
inline Duracao Excursao::getDuracao() const {
    return duracao;
}
//#---------------------
inline void Excursao::setDescricao(const Descricao& descricao){
    this->descricao = descricao;
}
inline Descricao Excursao::getDescricao() const {
    return descricao;
}
//#---------------------
inline void Excursao::setEndereco(const Endereco& endereco){
    this->endereco = endereco;
}
inline Endereco Excursao::getEndereco() const {
    return endereco;
}

#endif // ENTIDADES_H_INCLUDED


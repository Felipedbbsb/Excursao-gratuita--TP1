#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de c�digo para declara��o de classe dom�nio.
// Substituir Dominio por nome da classe.
// Substituir Tipo.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // M�todo para validar valor.
    public:
        void setValor(Tipo);             // M�todo para atribuir valor.
        Tipo getValor() const;           // M�todo para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

----------------------------------------------------------------------- */
class Cidade {
    private:
        static const string cidades_validas[15] = {"Hong Kong", "Bangkok", "Macau", "Singapura", "Londres", "Paris", "Dubai", "Delhi",
        "Istambul", "Kuala Lumpur", "Nova Iorque", "Antalya", "Mumbai", "Shenzhen", "Phuket"};
        const string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Cidade::getValor() const{
    return valor;
}

class Codigo

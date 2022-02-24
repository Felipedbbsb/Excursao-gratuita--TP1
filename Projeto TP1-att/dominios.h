#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código para declaração de classe domínio.
// Substituir Dominio por nome da classe.
// Substituir Tipo.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // Método para validar valor.
    public:
        void setValor(Tipo);             // Método para atribuir valor.
        Tipo getValor() const;           // Método para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

//----------------------------------------------------------------------- */
// Matricula: 202006420
// Gustavo Pierre Starling
class Cidade {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Cidade::getValor() const{
    return valor;
}

//----------------------------------------------------------------------- */
// Matricula: 202006420
// Gustavo Pierre Starling
class Codigo {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const{
    return valor;
}

//----------------------------------------------------------------------- */
// Matricula: 202006420
// Gustavo Pierre Starling
class Horario {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Horario::getValor() const{
    return valor;
}


//----------------------------------------------------------------------- */
// Matricula: 202006420
// Gustavo Pierre Starling
class Senha {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Senha::getValor() const{
    return valor;
}


//----------------------------------------------------------------------- */
// Matricula: 202006420
// Gustavo Pierre Starling
class Nome {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Nome::getValor() const{
    return valor;
}


//----------------------------------------------------------------------- */
//Matricula: 202021749
// Felipe Dantas Borges
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de email.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso siga o formato de parte-local@dominio.
///

class Email {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:
        ///
/// Armazena email.
///
/// @param valor email.
///
/// @return
///
/// - Retorna true  caso email tenha sido armazenado.
/// - Retorna false caso email n&atilde;o tenha sido armazenado por ser inv&aacute;lido.
///
        void setValor(string);             // Método para atribuir valor.

 ///
/// Retorna email.
///
/// @return email
///
        string getValor() const;           // Método para recuperar valor.
};

inline string Email::getValor() const{
    return valor;
}

//----------------------------------------------------------------------- */
//Matricula: 202021749
// Felipe Dantas Borges
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de data.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso siga o formato de DD-MES-AAAA.
///

class Data {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:
        /// Armazena data.
///
/// @param valor data.
///
/// @return
///
/// - Retorna true  caso data tenha sido armazenado.
/// - Retorna false caso data n&atilde;o tenha sido armazenado por ser inv&aacute;lido.

        void setValor(string);             // Método para atribuir valor.

///
/// Retorna data.
///
/// @return data
///
        string getValor() const;           // Método para recuperar valor.
};

inline string Data::getValor() const{
    return valor;
}


//----------------------------------------------------------------------- */
//Matricula: 202021749
// Felipe Dantas Borges
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de endereço.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso tenha de 0 a 20 caracteres.
///
class Endereco {
    private:
        string valor;                      // Atributo para armazenar valor.
        void validar(string);              // Método para validar valor.
    public:
        /// Armazena endereço.
///
/// @param valor endereço.
///
/// @return
///
/// - Retorna true  caso endereço tenha sido armazenado.
/// - Retorna false caso endereço n&atilde;o tenha sido armazenado por ser inv&aacute;lido.

        void setValor(string);             // Método para atribuir valor.

///
/// Retorna endereço.
///
/// @return endereço
///
        string getValor() const;           // Método para recuperar valor.
};

inline string Endereco::getValor() const{
    return valor;
}


//----------------------------------------------------------------------- */
//Matricula: 202021749
// Felipe Dantas Borges
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de t&iacute;tulo.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso tenha de 5 a 20 letras.
///


class Titulo {
    private:
        string valor;
        void validar(string);
    public:
/// Armazena t&iacute;tulo.
///
/// @param valor t&iacute;tulo.
///
/// @return
///
/// - Retorna true  caso t&iacute;tulo tenha sido armazenado.
/// - Retorna false caso t&iacute;tulo n&atilde;o tenha sido armazenado por ser inv&aacute;lido.

        void setValor(string);

///
/// Retorna t&iacute;tulo
///
/// @return t&iacute;tulo
///
        string getValor() const;
};
inline string Titulo::getValor() const{
    return valor;
}
//----------------------------------------------------------------------- */
// Matricula: 202006448
// Rafael Hamú Campos
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de idioma.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso siga o formato de idiomas aceitos.
///

class Idioma {
    private:
        string valor;
        void validar(string valor);
    public:
                ///
/// Armazena idioma.
///
/// @param valor idioma.
///
/// @return
///
/// - Retorna true  caso idioma tenha sido armazenado.
/// - Retorna false caso idioma n&atilde;o tenha sido armazenado por ser inv&aacute;lido.
///
        void setValor(string);
         ///
/// Retorna idioma.
///
/// @return idioma
///
        string getValor() const;
};
inline string Idioma::getValor() const{
    return valor;
}
//----------------------------------------------------------------------- */
// Matricula: 202006448
// Rafael Hamú Campos
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de nota.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso esteja entre 0 e 5.
///
class Nota {
    private:
        int valor;
        void validar(int);
    public:
        ///
/// Armazena nota.
///
/// @param valor nota.
///
/// @return
///
/// - Retorna true  caso nota tenha sido armazenado.
/// - Retorna false caso nota n&atilde;o tenha sido armazenado por ser inv&aacute;lido.
///
        void setValor(int);
        /// Retorna nota.
///
/// @return nota
///
        int getValor() const;
};
inline int Nota::getValor() const{
    return valor;
}
//----------------------------------------------------------------------- */
// Matricula: 202006448
// Rafael Hamú Campos
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de duracao.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso numero seja 30,60,90,120,180.
///

class Duracao {
    private:
        int valor;
        void validar(int);
    public:
                ///
/// Armazena duracao.
///
/// @param valor duracao.
///
/// @return
///
/// - Retorna true  caso duracao tenha sido armazenado.
/// - Retorna false caso duracao n&atilde;o tenha sido armazenado por ser inv&aacute;lido.
///
        void setValor(int);
        /// Retorna duracao.
///
/// @return duracao
///
        int getValor() const;
};
inline int Duracao::getValor() const{
    return valor;
}
//----------------------------------------------------------------------- */
// Matricula: 202006448
// Rafael Hamú Campos
///
/// Padr&atilde;o para representa&ccedil;&atilde;o de descricao.
///
/// Regras de formato:
///
/// - C&oacute;digo &eacute; v&aacute;lido caso tenha entre 0 e 30 letras.
///
class Descricao {
    private:
        string valor;
        void validar(string);
    public:
        void setValor(string);
        string getValor() const;
};
inline string Descricao::getValor() const{
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
// Diretivas de compila��o para controlar processo de inclus�o.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabe�alhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Email

class TUEmail {
private:
    const static int VALOR_VALIDO   = "naruto2002&~@fmail12";   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = "naruto2002@..fmail12&~";   // Defini��o de constante para evitar n�mero m�gico.
    Email *email;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Data

class TUData {
private:
    const static int VALOR_VALIDO   = "13-Abril-2002";   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = "30-Fev-1999";   // Defini��o de constante para evitar n�mero m�gico.
    Data *data;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Endereco

class TUEndereco {
private:
    const static int VALOR_VALIDO   = "QTLP.214";   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = "QTLP..2144545435447I9s";   // Defini��o de constante para evitar n�mero m�gico.
    Endereco *endereco;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Endereco

class TUTitulo {
private:
    const static int VALOR_VALIDO   = "Yosemite";   // Defini��o de constante para evitar n�mero m�gico.
    const static int VALOR_INVALIDO = "Yo..s3mite";   // Defini��o de constante para evitar n�mero m�gico.
    Titulo *titulo;                         // Refer�ncia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // M�todo para criar unidade em teste.
    void tearDown();                        // M�todo para destruir unidade em teste.
    void testarCenarioSucesso();            // Cen�rio de teste.
    void testarCenarioFalha();              // Cen�rio de teste.

public:
    const static int SUCESSO =  0;          // Defini��o de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Defini��o de constante para reportar resultado de teste.
    int run();                              // M�todo para executar teste.
};

#endif // TESTES_H_INCLUDED

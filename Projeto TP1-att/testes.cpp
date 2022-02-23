#include "testes.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade.
//Matricula: 202021749
// Felipe Dantas Borges
//Email
void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Data
void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Endereco
void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setValor(VALOR_VALIDO);
        if (endereco->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (endereco->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
////Matricula: 202021749
// Felipe Dantas Borges
//Titulo
void TUTitulo::setUp(){
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){
    try{
        titulo->setValor(VALOR_VALIDO);
        if (titulo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    try{
        titulo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (titulo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// Cidade:

void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown(){
    delete cidade;
}

void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setValor(VALOR_VALIDO);
        if (cidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha(){
    try{
        cidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// Codigo:

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// Horario:

void TUHorario::setUp(){
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown(){
    delete horario;
}

void TUHorario::testarCenarioSucesso(){
    try{
        horario->setValor(VALOR_VALIDO);
        if (horario->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha(){
    try{
        horario->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (horario->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUHorario::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// Senha:

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// Nome:

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
//Matricula: 20206448
// Rafael Hamu Campos
//Nota
void TUNota::setUp(){
    Nota = new nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete Nota;
}

void TUNota::testarCenarioSucesso(){
    try{
        Nota->setValor(VALOR_VALIDO);
        if (Nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha(){
    try{
        Nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (Nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
//Matricula: 20206448
// Rafael Hamu Campos
//Idioma
void TUIdioma::setUp(){
    Idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete Idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        Idioma->setValor(VALOR_VALIDO);
        if (Idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        Idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (Idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// --------------------------------------------------------------------------
//Matricula: 20206448
// Rafael Hamu Campos
//Duracao
void TUDuracao::setUp(){
    Duracao = new duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown(){
    delete Idioma;
}

void TUDuracao::testarCenarioSucesso(){
    try{
        Duracao->setValor(VALOR_VALIDO);
        if (Duracao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha(){
    try{
        Duracao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (Duracao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDuracao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// --------------------------------------------------------------------------
//Matricula: 20206448
// Rafael Hamu Campos
//Descricao
void TUDescricao::setUp(){
    Descricao = new descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown(){
    delete Idioma;
}

void TUDescricao::testarCenarioSucesso(){
    try{
        Descricao->setValor(VALOR_VALIDO);
        if (Descricao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha(){
    try{
        Descricao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (Descricao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}










//Entidade------------------------------------------------------------------------
// --------------------------------------------------------------------------
// Matricula: 202006420
// Gustavo Pierre Starling

// ENTIDADE Sessao:

void TUSessao::setUp(){
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown(){
    delete sessao;
}

void TUSessao::testarCenarioSucesso(){
    Codigo codigo;
    Data data;
    Horario horario;
    Idioma idioma;

    try{
        codigo.setValor(VALOR_VALIDO_CODIGO);
        data.setValor(VALOR_VALIDO_DATA);
        horario.setValor(VALOR_VALIDO_HORARIO);
        idioma.setValor(VALOR_VALIDO_IDIOMA);

        sessao->setCodigo(codigo);
        sessao->setTitulo(data);
        sessao->setCodigo(horario);
        sessao->setCodigo(idioma);


        if (sessao->getCodigo().getValor() != VALOR_VALIDO_CODIGO && sessao->getData().getValor() != VALOR_VALIDO_DATA &&
            sessao->getHorario().getValor() != VALOR_VALIDO_HORARIO && sessao->getIdioma().getValor() != VALOR_VALIDO_IDIOMA)
            estado = FALHA;
    }

    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

// --------------------------------------------------------------------------
// Matricula: 202021749
// Felipe Dantas

// ENTIDADE Excursao:

void TUExcursao::setUp(){
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown(){
    delete excursao;
}

void TUExcursao::testarCenarioSucesso(){
    Codigo codigo;
    Titulo titulo;
    Nota nota;
    Cidade cidade;
    Duracao duracao;
    Descricao descricao;
    Endereco endereco;

    try{
        codigo.setValor(VALOR_VALIDO_CODIGO);
        titulo.setValor(VALOR_VALIDO_TITULO);
        nota.setValor(VALOR_VALIDO_NOTA);
        cidade.setValor(VALOR_VALIDO_CIDADE);
        duracao.setValor(VALOR_VALIDO_DURACAO);
        descricao.setValor(VALOR_VALIDO_DESCRICAO);
        endereco.setValor(VALOR_VALIDO_ENDERECO);


        sessao->setCodigo(codigo);
        sessao->setTitulo(titulo);
        sessao->setCodigo(nota);
        sessao->setCodigo(cidade);
        sessao->setCodigo(duracao);
        sessao->setTitulo(descricao);
        sessao->setCodigo(endereco);

        if (sessao->getCodigo().getValor() != VALOR_VALIDO_CODIGO && sessao->getTitulo().getValor() != VALOR_VALIDO_TITULO &&
            sessao->getNota().getValor() != VALOR_VALIDO_NOTA && sessao->getCidade().getValor() != VALOR_VALIDO_CIDADE &&
            sessao->getDuracao().getValor() != VALOR_VALIDO_DURACAO && sessao->getDescricao().getValor() != VALOR_VALIDO_DESCRICAO &&
            sessao->getEndereco().getValor() != VALOR_VALIDO_ENDERECO)
            estado = FALHA;
    }

    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

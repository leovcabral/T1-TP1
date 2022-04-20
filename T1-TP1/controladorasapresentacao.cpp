#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementa��es de m�todos de classes controladoras.

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Acessar dados sobre Excursao.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de sele��o de servi�o.

    char texto6[]="Selecione um dos servicos: ";
    char texto7[]="1 - Selecionar servicos de conta.";
    char texto8[]="2 - Descadastrar conta.";
//    char texto11[]="2 - Selecionar servicos relacionados a Excursao";
    char texto9[]="3 - Encerrar sessao.";
    char texto10[]="Falha na autenticacao. Digite algo para continuar.";
    int campo;
    char lixo;
    char c;

    bool apresentar = true;

    while(apresentar){

        // Apresenta tela inicial.

//        CLR_SCR;
        system("clear");

        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;
        cout << texto5 << endl;

       scanf("%c", &c);
       scanf("%c", &lixo);

       campo = c - 48;

       printf("\nopcao escolhida = %i, clique enter para continuar", campo);
       scanf("%c", &lixo);

       if(campo == 1)
       {
            if(cntrApresentacaoAutenticacao->autenticar(&email))
            {
                bool apresentar = true;
                while(apresentar)
                {
                    system("clear");
                    cout << "voce esta autenticado" << endl;
                    cout << texto6 << endl;
                    cout << texto7 << endl;
                    cout << texto8 << endl;
                    cout << texto9 << endl;


                    scanf("%c", &c);

                    campo = c - 48;

                    printf("\nopcao escolhida = %i, clique enter para continuar", campo);
                    scanf("%c", &lixo);
                    scanf("%c", &lixo);

                    if(campo == 1)
                    {
                        cntrApresentacaoConta->executar(&email);
                    }
                    else if(campo == 2)
                    {
                        printf("\n!!!\n");
                        if(cntrApresentacaoConta->descadastrar(&email)){
                            break;
                        }
                    }
                    else if(campo == 3)
                    {
                        apresentar = false;
                        break;

                    }
                }
            }
            else
            {
                cout << texto10 << endl;
                scanf("%c", &lixo);
                scanf("%c", &lixo);

            }
       }
       else if(campo == 3)
       {
            cntrApresentacaoExcursao->executar();
        }
       else if(campo ==2)
       {
            cntrApresentacaoConta->cadastrar();
       }
       else if(campo == 4)
       {
            apresentar = false;
            break;
       }


    }
    return;
}

//--------------------------------------------------------------------------------------------

bool CntrApresentacaoAutenticacao::autenticar(Email *email){

    // Mensagens a serem apresentadas na tela de autentica��o.

    char texto1[]="Digite o Email: ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;

    while(true){



//        CLR_SCR;
        system("clear");


        cout << texto1 << " ";
        cin >> campo1;
        cout << texto2 << " ";
        cin >> campo2;
        try{
            email->setEmail(string(campo1));
            senha.setPassword(string(campo2));
            break;
        }
        catch(invalid_argument &exp){


            char c;
            c = getc(stdin);
            return false;
            system("clear");
        }
    }
    return (cntr->autenticar(*email, senha));
}

//--------------------------------------------------------------------------------------------
//
void CntrApresentacaoConta::editar(Email* email){
    char lixo;

    char novoNome[80];
    char novaSenha[80];

    Senha senha;
    Nome nome;

    char texto1[]="Preencha novo valor para Nome: ";
    char texto2[]="Preencha novo valor para Senha: ";
    char texto4[]="Dados em formato incorreto. Digite algo.";
    system("clear");

    cout << texto1 << " ";
    cin >> novoNome;
    cout << texto2 << " ";
    cin >> novaSenha;

    try{
            nome.setValor(string(novoNome));
            senha.setPassword(string(novaSenha));
    }
    catch(invalid_argument &exp){

        system("clear");
        cout << texto4 << endl;

        cout << "Dados em formato incorreto. Pressione enter para tentar de novo" << endl;
        scanf("%c", &lixo);
        return;

    }
    cntrServicoConta->editar(email, nome, senha);
    scanf("%c", &lixo);
    return;
}


void CntrApresentacaoConta::executar(Email* email){

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados de conta.";
    char texto3[]="2 - Editar dados de conta.";
    char texto4[]="3 - Retornar.";

    int campo;

    bool apresentar = true;
    char c;

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

//      CLR_SCR;
        system("clear");

        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        c = getc(stdin);
        campo = c - 48;

        switch(campo){
            case 1: consultarDadosConta(email);
                    break;
            case 2: editar(email);
                    break;
            case 3: apresentar = false;
                    break;
        }
    }
}

////--------------------------------------------------------------------------------------------

void CntrApresentacaoConta::cadastrar(){
    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome:";
    char texto3[] ="Email:";
    char texto4[] ="Senha:";
    char texto5[] ="Usuário cadastrado!";
    char texto6[] ="Valor inválido para cadastro";

    char campo1[80], campo2[80], campo3[80];
    char c;

    int campo;

    Nome nome;
    Email email;
    Senha senha;


//    CLR_SCR;
    system("clear");
    cout << texto1 << endl;
    cout << texto2 << " ";
    cin >> campo1;
    cout << texto3 << " ";
    cin >> campo2;
    cout << texto4 << " ";
    cin >> campo3;
    try{
        nome.setValor(string(campo1));
        email.setEmail(string(campo2));
        senha.setPassword(string(campo3));
    }
    catch(invalid_argument &exp){
        cout << texto6 << endl;
        c = getc(stdin);
        scanf("%c", &c);
        system("clear");
        return;
    }


    Usuario usuario;

    try{
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha);
    }
    catch(invalid_argument &exp){
        cout << texto6 << endl;
        c = getc(stdin);
        scanf("%c", &c);
        system("clear");
        return;
    }

    nome = usuario.getNome();
    cout << nome.getValor() << " mais um passo e vc sera cadastrado!" << endl;

    printf("clique enter para continuar");
    scanf("%c", &c);
    scanf("%c", &c);

    cntrServicoConta->cadastrarConta(&usuario);

    return;
}

////--------------------------------------------------------------------------------------------
//

bool CntrApresentacaoConta::descadastrar(Email* email){
    system("clear");
    char c;
    if(cntrServicoConta->descadastrarConta(email)){
        cout << "Conta descadastrada com sucesso" << endl;
        c = getc(stdin);
    }
}



void CntrApresentacaoConta::consultarDadosConta(Email* email){

    cntrServicoConta->consultarDadosConta(email);
}

////--------------------------------------------------------------------------------------------

void CntrApresentacaoExcursao::executar(){



    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar lista de Excursoes";
    char texto3[]="2 - Retornar.";

    int campo;

    char c;

    bool apresentar = true;

    while(apresentar){


        system("clear");

        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;

        c = getc(stdin);
        campo = c - 48;

        switch(campo){
            case 1: cntr->listar();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::executar(CPF){
//
//    // Mensagens a serem apresentadas tela completa de produtos financeiros.
//
//    char texto1[] ="Selecione um dos servicos : ";
//    char texto2[] ="1 - Consultar conta corrente.";
//    char texto3[] ="2 - Cadastrar produto de investimento.";
//    char texto4[] ="3 - Descadastrar produto de investimento.";
//    char texto5[] ="4 - Consultar produto de investimento.";
//    char texto6[] ="5 - Realizar aplicacao em produto de investimento.";
//    char texto7[] ="6 - Listar aplicacoes em produto de investimento.";
//    char texto8[] ="7 - Retornar.";
//
//    int campo;                                                                                  // Campo de entrada.
//
//    bool apresentar = true;                                                                     // Controle de la�o.
//
//    while(apresentar){
//
//        // Apresenta tela completa de produtos financeiros.
//
//        CLR_SCR;                                                                                // Limpa janela.
//
//        cout << texto1 << endl;                                                                 // Imprime nome do campo.
//        cout << texto2 << endl;                                                                 // Imprime nome do campo.
//        cout << texto3 << endl;                                                                 // Imprime nome do campo.
//        cout << texto4 << endl;                                                                 // Imprime nome do campo.
//        cout << texto5 << endl;                                                                 // Imprime nome do campo.
//        cout << texto6 << endl;                                                                 // Imprime nome do campo.
//        cout << texto7 << endl;                                                                 // Imprime nome do campo.
//        cout << texto8 << endl;                                                                 // Imprime nome do campo.
//
//        campo = getch() - 48;                                                                   // Leitura do campo de entrada e convers�o de ASCII.
//
//        switch(campo){
//            case 1: consultarConta();
//                    break;
//            case 2: cadastrarProdutoInvestimento();
//                    break;
//            case 3: descadastrarProdutoInvestimento();
//                    break;
//            case 4: consultarProdutoInvestimento();
//                    break;
//            case 5: realizarAplicacao();
//                    break;
//            case 6: listarAplicacoes();
//                    break;
//            case 7: apresentar = false;
//                    break;
//        }
//    }
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::consultarConta(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico consultar conta nao implementado. Digite algo.";                      // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico cadastrar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico descadastrar produto investimento nao implementado. Digite algo.";    // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico consultar produto investimento nao implementado. Digite algo.";       // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico realizar aplicacao nao implementado. Digite algo.";                   // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//
//}
//
////--------------------------------------------------------------------------------------------
//
//void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){
//
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//    // Substituir c�digo seguinte pela implementa��o do m�todo.
//    //--------------------------------------------------------------------------------------------
//    //--------------------------------------------------------------------------------------------
//
//    // Mensagens a serem apresentadas.
//
//    char texto[]="Servico listar aplicacoes nao implementado. Digite algo.";                    // Mensagem a ser apresentada.
//
//    CLR_SCR;                                                                                    // Limpa janela.
//    cout << texto << endl;                                                                      // Imprime nome do campo.
//    getch();
//
//}

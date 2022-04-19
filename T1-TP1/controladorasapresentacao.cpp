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

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de conta.";
    char texto8[]="2 - Descadastrar conta.";
//    char texto11[]="2 - Selecionar servicos relacionados a Excursao";
    char texto9[]="3 - Encerrar sessao.";
    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                        // Mensagem a ser apresentada.
    int campo;
    char lixo;
    char c;                                                                            // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela inicial.

//        CLR_SCR;                                                                                // Limpa janela.
        system("clear");

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.
        cout << texto5 << endl;

       scanf("%c", &c);                                                                                     // Imprime nome do campo.
       scanf("%c", &lixo);

       campo = c - 48;

       printf("\nopcao escolhida = %i, clique enter para continuar", campo);
       scanf("%c", &lixo);
                                                                            // Leitura do campo de entrada e convers�o de ASCII.
       if(campo == 1)
       {
            if(cntrApresentacaoAutenticacao->autenticar(&email))
            {
                bool apresentar = true;                                                 // Controle de laço.
                while(apresentar)
                {
                    system("clear");
                    cout << "voce esta autenticado" << endl;
                    cout << texto6 << endl;                                             // Imprime nome do campo.
                    cout << texto7 << endl;                                             // Imprime nome do campo.
                    cout << texto8 << endl;                                             // Imprime nome do campo.
                    cout << texto9 << endl;


                    scanf("%c", &c);                                                     // Imprime nome do campo.

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

    char texto1[]="Digite o Email  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    Senha senha;                                                                                // Instancia a classe Senha.

    while(true){

        // Apresenta tela de autentica��o.

//        CLR_SCR;
        system("clear");
                                                                            // Limpa janela.

        cout << texto1 << " ";                                                                  // Imprime nome do campo.
        cin >> campo1;                                                                          // L� valor do campo.
        cout << texto2 << " ";                                                                  // Imprime nome do campo.
        cin >> campo2;                                                                          // L� valor do campo.

        try{
            email->setEmail(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setPassword(string(campo2));                                                     // Atribui Valor � senha.
            break;                                                                              // Abandona la�o em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exce��o devido a formato incorreto.
//          CLR_SCR;
                                                              // Limpa janela.
            cout << texto3 << endl;
            char c;                                            // Informa formato incorreto.
            c = getc(stdin);
            system("clear");                                                                          // L� caracter digitado.
        }
    }
    return (cntr->autenticar(*email, senha));                                                     // Solicita servi�o de autentica��o.
}

//--------------------------------------------------------------------------------------------
//
void CntrApresentacaoConta::editar(Usuario* user){

    cntrServicoConta->editar(user);

}
void CntrApresentacaoConta::executar(Email* email){

    // Mensagens a serem apresentadas na tela de sele��o de servi�o..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados de conta.";
    char texto3[]="2 - Editar dados de conta.";
    char texto4[]="3 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.
    char c;

    while(apresentar){

        // Apresenta tela de sela��o de servi�o.

//      CLR_SCR;
        system("clear");

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;
        cout << texto4 << endl;                                                               // Imprime nome do campo.

        c = getc(stdin);
        campo = c - 48;                                                                       // Leitura do campo de entrada e convers�o de ASCII.

        switch(campo){
            case 1: consultarDadosConta(email);
                    break;
            case 2: editar(&user);
                    break;
            case 3: apresentar = false;
                    break;
        }
    }
}

////--------------------------------------------------------------------------------------------
//
void CntrApresentacaoConta::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.
    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome:";
    char texto3[] ="Email:";
    char texto4[] ="Senha:";
    char texto5[] ="Usuário cadastrado!";
    char texto6[] ="Valor inválido para cadastro";

    char campo1[80], campo2[80], campo3[80];                                              // Cria campos para entrada dos dados.
    char c;

    int campo;
    // Instancia os dom�nios.

    Nome nome;
    Email email;
    Senha senha;

    // Apresenta tela de cadastramento.

//    CLR_SCR;
    system("clear");                                                                                 // Limpa janela.
    cout << texto1 << endl;                                                                    // Imprime solicita��o ao usu�rio.
    cout << texto2 << " ";                                                                     // Imprime nome do campo.
    cin >> campo1;                                                       // L� valor do campo composto.
    cout << texto3 << " ";                                                                     // Imprime nome do campo.
    cin >> campo2;                                                                             // L� valor do campo.
    cout << texto4 << " ";                                                                     // Imprime nome do campo.
    cin >> campo3;
                                                                               // L� valor do campo.
    try{
        nome.setValor(string(campo1));
        email.setEmail(string(campo2));
        senha.setPassword(string(campo3));
    }
    catch(invalid_argument &exp){
        cout << texto6 << endl;                                                                // Informa formato incorreto.
        c = getc(stdin);
        scanf("%c", &c);
        system("clear");
        return;
    }

    // Instancia e inicializa entidades.

    Usuario usuario;

    try{
    usuario.setNome(nome);
    usuario.setEmail(email);
    usuario.setSenha(senha);
    }
    catch(invalid_argument &exp){
        cout << texto6 << endl;                                                                // Informa formato incorreto.
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
                                                                               // Limpa janela.

}

////--------------------------------------------------------------------------------------------

void CntrApresentacaoExcursao::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar lista de Excursoes";
    char texto3[]="2 - Retornar.";

    int campo;

    char c;                                                                                 // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de la�o.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        system("clear");                                                                               // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.

        c = getc(stdin);
        campo = c - 48;                                                                   // Leitura do campo de entrada.

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

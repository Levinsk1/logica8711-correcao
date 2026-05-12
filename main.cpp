#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>


int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string nome;
    int idade;
    int escolhaPrincipal;

    std::cout << "--- SENAC ---\n";
    std::cout << "Qual seu nome? ";
    std::getline(std::cin, nome);
    std::cout << "Qual a sua idade? ";
    std::cin >> idade;

    while (true) {
        std::cout << "\nOlá, " <<nome<< "! O que deseja fazer?\n";
        std::cout << "1 - Escolher curso para Cadastro\n";
        std::cout << "2 - Ver informações detalhadas dos cursos\n";
        std::cout << "3 - Sair\n";
        std::cout << "Opção: ";
        std::cin >> escolhaPrincipal;

    if (escolhaPrincipal == 3) {
            break;
        }

        // --- CADASTRO ---
        std::cout<<"\nAntes de escolher o curso é necessário que realize um cadastro para o nosso para que possamos lhe integrar no nosso sistema."<<std::endl;

     if (escolhaPrincipal == 1) {

        std::cin.ignore();

        std::string cpf, nomeCompleto, endereco;
            char responsavel;
        std::cout << "\n===== CADASTRO =====" << std::endl;
        std::cout << "Digite o CPF: ";
        std::getline(std::cin, cpf);

        std::cout << "Digite o nome completo: ";
        std::getline(std::cin, nomeCompleto);

        std::cout << "Digite o endereco: ";
        std::getline(std::cin, endereco);

        std::cout << "A propria pessoa e o responsavel financeiro? (s/n): ";
        std::cin >> responsavel;

        std::cin.ignore();

    if (responsavel == 'n' || responsavel == 'N') {

        std::string nomeResp, cpfResp, telefoneResp;

        std::cout << "\n===== DADOS DO RESPONSAVEL =====" << std::endl;

        std::cout << "Nome do responsavel: ";
        std::getline(std::cin, nomeResp);

        std::cout << "CPF do responsavel: ";
        std::getline(std::cin, cpfResp);

        std::cout << "Telefone do responsavel: ";
        std::getline(std::cin, telefoneResp);

        std::cout << "\n===== CADASTRO FINALIZADO =====" << std::endl;
        std::cout << "Nome: " << nomeCompleto << std::endl;
        std::cout << "CPF: " << cpf << std::endl;
        std::cout << "Endereco: " << endereco << std::endl;

        std::cout << "\nResponsavel Financeiro:" << std::endl;
        std::cout << "Nome: " << nomeResp << std::endl;
        std::cout << "CPF: " << cpfResp << std::endl;
        std::cout << "Telefone: " << telefoneResp << std::endl;

    } else {

        std::cout << "\n===== CADASTRO FINALIZADO =====" << std::endl;
        std::cout << "Nome: " << nomeCompleto << std::endl;
        std::cout << "CPF: " << cpf << std::endl;
        std::cout << "Endereco: " << endereco << std::endl;
        std::cout << "Responsavel financeiro: A propria pessoa." << std::endl;
    }

    int opcao = -1;

    while (true) {

        std::cout << "\n--- MENU DE CADASTRO ---\n";
        std::cout << "1 - Modelagem do Vestuário\n";
        std::cout << "2 - Enfermagem\n";
        std::cout << "3 - Sistemas\n";
        std::cout << "4 - RH\n";
        std::cout << "5 - Contabilidade\n";
        std::cout << "6 - Voltar\n";

        std::cout << "Opção: ";
        std::cin >> opcao;

        if (opcao == 6) {
            break;
        }

        if (opcao >= 1 && opcao <= 5) {
            std::cout << "\n✅ Cadastro realizado com sucesso!\n";
            break;
        } else {
            std::cout << "Opção inválida!\n";
        }
    }
}
        // --- curso INFORMAÇÕES ---
        else if (escolhaPrincipal == 2) {
            int infoOpcao = -1;
            while (true) {
                std::cout << "\n--- INFORMAÇÕES DOS CURSOS ---\n";
                std::cout << "1 - Sistemas\n2 - Enfermagem\n3 - Modelagem\n4 - RH\n5 - Contabilidade\n6 - Voltar\n";
                std::cout << "Opção: ";
                std::cin >> infoOpcao;

                if (infoOpcao == 6) break;

                if (infoOpcao >= 1 && infoOpcao <= 5) {
                    switch(infoOpcao) {
                        case 1: std::cout << "\nINFO: O curso Técnico em Desenvolvimento de Sistemas Bilíngue do Senac-RS prepara profissionais para atuar na criação, manutenção e testes\n de sistemas computacionais e bancos de dados. Com 1.216 horas de formação, o curso ensina lógica, programação e desenvolvimento\n de software, além de oferecer ensino de inglês voltado para a área de tecnologia, sem exigir conhecimento prévio do idioma.\n A formação amplia as oportunidades no mercado de trabalho, permitindo atuar em empresas, multinacionais, estágios\n ou até empreender na área.\n"; break;
                        case 2: std::cout << "\nINFO: O curso Técnico em Enfermagem do Senac-RS prepara profissionais para atuar na área da saúde, auxiliando na prevenção,\n recuperação e cuidados com pacientes. A formação combina aulas práticas e teóricas, preparando o aluno\n para trabalhar em hospitais, clínicas, serviços de saúde e concursos públicos.\n"; break;
                        case 3: std::cout << "\nINFO: O curso Técnico em Modelagem do Vestuário do Senac-RS prepara profissionais para desenvolver modelagens de roupas femininas,\n masculinas e infantis, unindo estética, conforto e tendências da moda. A formação combina aulas práticas e teóricas, qualificando\n o aluno para atuar em diferentes segmentos da indústria da moda.\n"; break;
                        case 4: std::cout << "\nINFO: O curso Técnico em Recursos Humanos EAD prepara profissionais para atuar na gestão de pessoas,\n realizando recrutamento, treinamentos, folha de pagamento, benefícios e desenvolvimento de colaboradores.\n Com duração de 12 meses e ensino flexível, o curso forma profissionais alinhados às necessidades das empresas e ao mercado de trabalho.\n"; break;
                        case 5: std::cout << "\nINFO: O curso Técnico em Transações Imobiliárias do Senac prepara profissionais para atuar no mercado imobiliário,\n com qualificação para negociação, vendas e gestão de imóveis. Com duração de 10 meses, o curso permite obter\n registro no CRECI e oferece ensino flexível para atuar em imobiliárias, construção civil ou como corretor autônomo.\n"; break;
                    }
                } else {
                    std::cout << "Opção inválida! Tente novamente.\n";
                }
            }
        } 
        else {
            std::cout << "Opção inválida! Tente novamente.\n";
        }
    }

    std::cout << "Programa finalizado.\n";
    return 0;
}
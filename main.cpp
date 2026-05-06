#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>



    int main(){
     
     SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//




     std::string nome;
    int idade;
    

    std::cout<<"Qual seu nome? ";
    std::getline(std::cin, nome);

     std::cout<<"Qual a sua idade? ";
    std::cin>>idade;

    std::cout<<"\nBem-vindo(a), "<<nome<<"!!\n";

    int opcao = -1;
        while(opcao == -1){

    std::cout<<nome<<", escolha um curso digitando de 1 a 5:\n";
    std::cout<<"1 - Tecnico em Modelagem do Vestuario (Presencial)"<<std::endl;
    std::cout<<"2 - Tecnico em Enfermagem (Presencial)"<<std::endl;
    std::cout<<"3 - Tecnico em Desenvolvimento de Sistemas (Presencial)"<<std::endl;
    std::cout<<"4 - RH (EAD)"<<std::endl;
    std::cout<<"5 - Contabilidade (EAD)"<<std::endl;
    std::cout<<"6 - Cancelar"<<std::endl;

    std::cin>>opcao;

        if(opcao<1||opcao>6){
            std::cout << "Opcao invalida! Tente novamente.\n";
            opcao = -1; 
        }
     }

    switch(opcao){
        case 1:
            std::cout<<"Tecnico em Modelagem do Vestuario (Presencial)"<<std::endl;
            break;
        case 2:
            std::cout<<"Tecnico em Enfermagem (Presencial)"<<std::endl;
            break;
        case 3:
            std::cout<<"Tecnico em Desenvolvimento de Sistemas (Presencial)"<<std::endl;
            break;
        case 4:
            std::cout<<"RH (EAD)"<<std::endl;
            break;
        case 5:
            std::cout<<"Contabilidade (EAD)"<<std::endl;
            break;
    }
        if(opcao == 6){
            std::cout << "Sinto muito por nao ter o curso de sua preferencia, ate breve!\n";
    return 0;
}
            std::cout << "\nCurso escolhido:\n";


    return 0;
    }
#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>
#include<thread> // para lidar com o tempo de execução
#include<chrono> // para definir unidades de tempo (ms, segundos)

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    int opcao;

    std::cout<<"Digite um valor para opção: "<<std::endl;
    std::cin>>opcao;

    switch(opcao){
    case 1:
         std::cout<<"Domingo! "<<std::endl;
    break;
    case 2:
        std::cout<<"Segunda-Feira!"<<std::endl;
    break;
    default:
        std::cout<<"Número inválido"<<std::endl;
    }
    
      



    return 0;
} 
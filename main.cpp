#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    std::string nome;
    int idade;
    float altura;
    std::string classe;

    std::cout<<"Qual seu nome? "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual a sua altura? "<<std::endl;
    std::cin>>altura;

     std::cout<<"Qual a sua idade? "<<std::endl;
    std::cin>>idade;


    std::cout<<"Bem vindo(a) "<<nome<<"!! Sua altura é "<<altura<<" Você é da ";


     if(idade < 0){
        std::cout<<"Idade Invalida!"<<std::endl;
    }else if(idade <= 10){
        std::cout<<"Classe infantil"<<std::endl;
    }else if(idade <= 18){
        std::cout<<"Classe adolescente"<<std::endl;
    }else if(idade <= 60){
        std::cout<<"Classe adulto"<<std::endl;
    }

    
    




    return 0;
} 
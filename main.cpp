#include<iostream>
#include<string>

int main(){


    std::string nome;
    int idade;
    int anoAtual = 2026;

    std::cout<<"Olá qual o seu primeiro nome? "<<std::endl;
    std::cin>>nome;

    std::cout<<"Qual a sua idade? "<<std::endl; 
    std::cin>>idade;
    int anoNascido = anoAtual - idade;

    std::cout<< "Olá" <<nome<< "!! Você nasceu no ano de" << anoNascido <<std::endl;


    return 0;
} 
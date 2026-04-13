#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade Invalida!"<<std::endl;
    }else if(idade <= 2){
        std::cout<<"Você é um bebe?"<<std::endl;
    }else if(idade <= 8){
        std::cout<<"Você é uma criança?"<<std::endl;
    }else if(idade <= 16){
        std::cout<<"Você é um adolecente?"<<std::endl;
    }else{
        std::cout<<"Você é um sênior?"<<std::endl;
    }
    
    




    return 0;
} 
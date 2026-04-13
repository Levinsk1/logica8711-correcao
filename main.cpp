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

    if(idade >= 18){
        std::cout<<"Você é maior de idade!"<<std::endl;
    }else{
        std::cout<<"Voê é menor de idade!!"<<std::endl;
    }
    
    




    return 0;
} 
#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //

int main(){

    std::string nome = "Arthur";

    std::cout<<"O seu nome tem: "<<nome.length()<<" letras."<<std::endl;
    std::cout<<nome.size()<<" letras."<<std::endl;


    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    return 0;
} 
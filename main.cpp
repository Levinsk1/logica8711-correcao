#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//


   std:: string user;
   std:: string senha;

   std::cout<<"Digite seu usuario de acesso: "<<std::endl;
    std::cin>>user;

    std::cout<<"Digite sua senha: "<<std::endl;
    std::cin>>senha;

    if(senha == "123546"){
        std::cout<<"O usuario "<<user<<" está logado com sucesso!!"<<std::endl;
        }else{
            std::cout<<"Usuário ou senha incorretos!!"<<std::endl;
        }
    




    return 0;
} 
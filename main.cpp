#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    int opcaoPagamento;
    int qtdParafuso;
    float valorParafuso = 2.00;
    float valorTotalParafuso;
    float desconto;

    std::cout<<"Digite a quantidade de parafusos que deseja: "<<std::endl;
    std::cin>>qtdParafuso;

    valorTotalParafuso = qtdParafuso * valorParafuso;

    std::cout<<"Qual a forma de pagamento: "<<std::endl;
    std::cout<<"--- 1 - Pix"<<std::endl;
    std::cout<<"--- 2 - Dinheiro"<<std::endl;
    std::cout<<"--- 3 - Cartão"<<std::endl;
    std::cin>>opcaoPagamento;

    if(opcaoPagamento == 1){
        std::cout<<"Sua compra ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
    }else if(opcaoPagamento == 2){
        desconto = valorTotalParafuso * 0.90;
        std::cout<<"Sua compra ficou no valor de R$: "<<desconto<<std::endl;
    }else{
        std::cout<<"Sua compra ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
    }

    
    
    




    return 0;
} 
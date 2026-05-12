#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>

int main() {

int num1, num2, soma, subt, mult, op;
float div;

std::cout<<"Digite aqui o valor para o número 1: "<<std::endl;
std::cin>>num1;

std::cout<<"Digite aqui o valor para o número 2: "<<std::endl;
std::cin>>num2;

std::cout<<"------ Escolha a Operação ------"<<std::endl;
std::cout<<"1 - soma";
std::cout<<"2 - subtração";
std::cout<<"3 - multiplicação";
std::cout<<"4 - divisão";
std::cin>>op;

switch(op){
    case 1:
    soma = num1 + num2;
    std::cout<<"O resultado da soma é: "<<soma<<std::endl;
    break;
    case 2:
    subt = num1 - num2;
    std::cout<<"O resultado da subtração é: "<<subt<<std::endl;
    break;
    case 3: 
    mult = num1 * num2;
    std::cout<<"O resultado da multiplicação é: "<<mult<<std::endl;
    break;
    case 4:
    div = num1 / num2;
    std::cout<<"O resultado da divisão é: "<<div<<std::endl;
    break;
    default:
    std::cout<<"Você não digitou nenhum valor válido!"<<std::endl;
}

return 0;
}
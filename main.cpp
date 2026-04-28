#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>

   void verificarAprovacao(float nota){
    if(nota >= 7){
        std::cout<<"Status: Aprovado!"<<std::endl;
        }else{
            std::cout<<"Status: Reprovados!"<<std::endl;
        }
   }

   int main(){

    float minhaNota = 8.5;

    verificarAprovacao(minhaNota);

    std::cout<<"Fazendo um teste para o Arthur!!"<<std::endl;


    return 0;
    }
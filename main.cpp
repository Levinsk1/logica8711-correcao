#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>

   void minhaFuncao(std::string nome){
        std::cout<<nome<<std::endl;
   }

    int main(){

        minhaFuncao("Arthur");
        minhaFuncao("Nome");
    
        std::cout<<"Fazendo um teste para o Arthur!!"<<std::endl;


    return 0;
    }
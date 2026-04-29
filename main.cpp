#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>

   void minhaFuncao(std::string nome, int idade){
    std::cout<<"Meu nome é "<<nome<<" e tenho "<<idade<<" anos."<<std::endl;
   }
    
    int main(){

        minhaFuncao("Arthur", 19);
    

    return 0;
    }
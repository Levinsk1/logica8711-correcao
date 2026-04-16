#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)

int main()
{

    SetConsoleOutputCP(CP_UTF8); //
    SetConsoleCP(CP_UTF8);       //


    for(int i = 1; i <= 3; ++i){
        std::cout<<"Externo: "<<i<<std::endl;

    for(int j = 1; j <= 3; ++j){
        std::cout<<"Interno: "<<j<<std::endl;
    }
    }


    return 0;
}
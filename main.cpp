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


    for(int i = 0; i < 10; i++){
        if(i ==4){
            break;
        }
        std::cout<<i<<std::endl;
    }


    return 0;
}
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


    int myNumbers[5] = {10, 20, 30, 40, 50};
    for(int num : myNumbers){
        std::cout<<num<<std::endl;
    }


    return 0;
}
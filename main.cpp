#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>
int main()
{

    std::vector<std::string>cars = {"Volvo", "BMW", "Mercedes"};

    cars.push_back("mazda");

    for(std::string car : cars){
        std::cout<<car<<std::endl;
    }



    return 0;
}
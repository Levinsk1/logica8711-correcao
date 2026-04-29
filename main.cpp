#include <iostream>
#include <string>
#include <iostream>
#include <windows.h> //
#include <cmath>
#include <thread> // para lidar com o tempo de execução
#include <chrono> // para definir unidades de tempo (ms, segundos)
#include <vector>

   int doubleGame(int x){
    return x * 2;
   }
    
    int main(){
        for(int i = 1; i <=5;i++)
        std::cout<<"O dobro de "<<i<<" é "<<doubleGame(i)<<std::endl;

    return 0;
    }
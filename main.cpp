#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>
#include<thread> // para lidar com o tempo de execução
#include<chrono> // para definir unidades de tempo (ms, segundos)

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    for(int i = 10; i >= 0; i--){
        std::cout<<"A bomba irá explodir em "<<i<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(4));
    }
    
        

    
    




    return 0;
} 
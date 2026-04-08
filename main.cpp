#include<iostream>
#include<string>
#include<iostream>
#include<windows.h> //
#include<cmath>

int main(){

    int a = 8;
    int b = 3;
    int c = 5;
    int d = 4;

    int maior1 = std::max(a, b);
    int maior2 = std::max(c, b);

    std::cout<<(maior1 > maior2)<<std::endl;


    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);//

    return 0;
} 
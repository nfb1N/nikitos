// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"C_Window_Big.h"
#include"C_Window_smal.h"

int main()
{
    C_Window def_window(13);
    C_Window_Big window_big;
    C_Window_smal window_smal;
    std::cout << def_window << "\n" << window_big << "\n" << window_smal<< "\n";
}



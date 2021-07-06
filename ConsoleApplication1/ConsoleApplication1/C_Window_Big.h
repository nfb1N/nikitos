#pragma once
#include "C_Window.h"
class C_Window_Big :
    public C_Window
{
    C_Window_Big() : C_Window() {
        this->diagonal = 100;
    }
    C_Window_Big(float diagonal) : C_Window(diagonal) {
        this->diagonal = diagonal;
    }
    explicit operator C_Window() {
        return C_Window(this->diagonal);
    }
    friend std::ostream& operator << (std::ostream& out,const C_Window_Big& window_big) {
        out << ((C_Window)window_big) << "\n";
        return out;
    }

};


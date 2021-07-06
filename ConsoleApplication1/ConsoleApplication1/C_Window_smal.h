#pragma once
#include "C_Window.h"
class C_Window_smal :
    public C_Window
{
    C_Window_smal() : C_Window() {
        this->diagonal = 1;
    }
    C_Window_smal(float diagonal) : C_Window(diagonal) {
        this->diagonal = diagonal;
    }
    explicit operator C_Window() {
        return C_Window(this->diagonal);
    }
    friend std::ostream& operator << (std::ostream& out, const C_Window_smal& window_big) {
        out << ((C_Window)window_big) << "\n";
        return out;
    }
};


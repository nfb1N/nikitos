#pragma once
#include<ostream>
class C_Window
{
protected:
	float diagonal;
public:
	C_Window();
	C_Window(float diagonal);

	friend std::ostream& operator << (std::ostream& out, const C_Window& window) {
		out << "diagonale: " << window.diagonal;
		return out;
	}
};


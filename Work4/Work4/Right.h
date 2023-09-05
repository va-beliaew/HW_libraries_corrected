#pragma once
#include "Triangle.h"
#include "macros_API.h"

class DLL_API Right : public Triangle {
public:
	Right() : Triangle(10, 20, 22, 20, 70, 90) {
	}
protected:
	void print_triangle() override;
		
};
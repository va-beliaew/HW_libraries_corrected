#pragma once
#include "Quadrilateral.h"
#include "macros_API.h"

class DLL_API Square : public Quadrilateral {
public:
	Square() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {

	}
protected:
	void print_quad() override;
};
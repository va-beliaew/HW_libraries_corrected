#pragma once
#include "Quadrilateral.h"
#include "macros_API.h"

class DLL_API Rhomb : public Quadrilateral {
public:
	Rhomb() : Quadrilateral(30, 30, 30, 30, 120, 60, 120, 60) {

	}
protected:
	void print_quad() override;
};
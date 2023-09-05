#pragma once
#include "Quadrilateral.h"
#include "macros_API.h"


class DLL_API Parallelogram : public Quadrilateral {
public:
	Parallelogram() : Quadrilateral(10, 30, 10, 30, 50, 130, 50, 130) {

	}
protected:
	void print_quad() override;
};
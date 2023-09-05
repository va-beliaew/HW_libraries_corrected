#pragma once
#include <iostream>


class Leaver {
	std::string name;
public:
	Leaver (std::string name_) {
		name = name_;
	}
	std::string leave();
};
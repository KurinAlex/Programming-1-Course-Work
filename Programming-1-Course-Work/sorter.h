#pragma once

#include "string"

struct sorter
{
	std::string name;
	void(*sort) (int*, int*);
};
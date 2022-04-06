#pragma once

#include <algorithm>

#include "sorter.h"
#include "sort.h"

class std_sorter : public sorter
{
public:
	std_sorter() : sorter("std::sort")
	{
	}

	void sort(int* first, int* last)
	{
		std::sort(first, last);
	}
};
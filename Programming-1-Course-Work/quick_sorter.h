#pragma once

#include "sorter.h"
#include "sort.h"

class quick_sorter : public sorter
{
public:
	quick_sorter() : sorter("quick_sort")
	{
	}

	void sort(int* first, int* last)
	{
		quick_sort(first, last);
	}
};
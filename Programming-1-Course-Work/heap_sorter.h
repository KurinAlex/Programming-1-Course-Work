#pragma once

#include "sorter.h"
#include "sort.h"

class heap_sorter : public sorter
{
public:
	heap_sorter() : sorter("heap_sort")
	{
	}

	void sort(int* first, int* last)
	{
		heap_sort(first, last);
	}
};
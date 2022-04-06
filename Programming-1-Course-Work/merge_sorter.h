#pragma once

#include "sorter.h"
#include "sort.h"

class merge_sorter : public sorter
{
public:
	merge_sorter() : sorter("merge_sort")
	{
	}

	void sort(int* first, int* last)
	{
		merge_sort(first, last);
	}
};
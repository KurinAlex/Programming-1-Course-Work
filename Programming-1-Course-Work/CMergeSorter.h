#pragma once

#include "CSorter.h"
#include "sort.h"

class CMergeSorter : public CSorter
{
public:
	CMergeSorter() : CSorter("merge_sort")
	{
	}

	void sort(int* first, int* last)
	{
		merge_sort(first, last);
	}
};
#pragma once

#include "CSorter.h"
#include "sort.h"

class CHeapSorter : public CSorter
{
public:
	CHeapSorter() : CSorter("heap_sort")
	{
	}

	void sort(int* first, int* last)
	{
		heap_sort(first, last);
	}
};
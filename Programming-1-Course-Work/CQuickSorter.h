#pragma once

#include "CSorter.h"
#include "sort.h"

class CQuickSorter : public CSorter
{
public:
	CQuickSorter() : CSorter("quick_sort")
	{
	}

	void sort(int* first, int* last)
	{
		quick_sort(first, last);
	}
};
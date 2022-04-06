#pragma once

#include <algorithm>

#include "CSorter.h"
#include "sort.h"

class CStdSorter : public CSorter
{
public:
	CStdSorter() : CSorter("std::sort")
	{
	}

	void sort(int* first, int* last)
	{
		std::sort(first, last);
	}
};
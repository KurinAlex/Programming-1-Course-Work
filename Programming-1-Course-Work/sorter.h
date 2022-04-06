#pragma once

#include <string>

#include "sort.h"

class sorter
{
protected:
	std::string m_name;

public:
	sorter(std::string name)
	{
		m_name = name;
	}

	std::string get_name()
	{
		return m_name;
	}

	virtual void sort(int* first, int* last) = 0;
};

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
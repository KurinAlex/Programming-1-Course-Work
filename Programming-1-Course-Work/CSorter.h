#pragma once

#include <string>

class CSorter
{
private:
	std::string m_name;

public:
	CSorter(std::string name) : m_name(name)
	{
	}

	std::string get_name()
	{
		return m_name;
	}

	virtual void sort(int* first, int* last) = 0;
};
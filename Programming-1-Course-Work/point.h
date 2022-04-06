#pragma once

#include <unordered_map>
#include <string>
#include <vector>

struct point
{
	long long x;
	long long y;
};

using series = std::vector<point>;
using series_collection = std::unordered_map<std::string, series>;
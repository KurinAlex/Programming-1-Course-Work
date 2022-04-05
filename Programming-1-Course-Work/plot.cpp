#include <algorithm>
#include <chrono>
#include <random>

#include "point.h"
#include "sort.h"
#include "sorter.h"

const std::string asymptote_name = "asymptote";
const int max_points = 500;

sorter sorters[]
{
	{"quick_sort", quick_sort},
	{"merge_sort", merge_sort},
	{"heap_sort", heap_sort},
	{"std::sort", std::sort},
};

double asymptote(int x)
{
	return x * log2(x);
}

series_collection get_plot(int size_min, int size_max, int min_value, int max_value)
{
	series_collection series_collection;
	for (sorter sorter : sorters)
	{
		series_collection.insert({ sorter.name, series() });
	}
	series_collection.insert({ asymptote_name, series() });

	double size_stride = double(size_max - size_min) / max_points;
	if (size_stride < 1.0)
	{
		size_stride = 1.0;
	}

	std::random_device rd;
	std::mt19937 random_engine(rd());
	std::uniform_int_distribution<int> random_generator(min_value, max_value);

	const double asymptote_scale = 0.8 / log2(size_max);

	for (double s = size_min; s <= size_max; s += size_stride)
	{
		int size = round(s);

		int* random_array = new int[size];
		int* sort_array = new int[size];

		for (int i = 0; i < size; i++)
		{
			random_array[i] = random_generator(random_engine);
		}

		for (auto sorter : sorters)
		{
			std::copy(random_array, random_array + size, sort_array);

			auto start = std::chrono::steady_clock::now();
			sorter.sort(sort_array, sort_array + size);
			auto end = std::chrono::steady_clock::now();

			if (!std::is_sorted(sort_array, sort_array + size))
			{
				throw std::exception("Array is not sorted");
			}

			series_collection[sorter.name].push_back(
				{ size, std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() });
		}

		series_collection[asymptote_name].push_back({ size, (long long)(asymptote_scale * asymptote(size)) });

		delete[] random_array;
		delete[] sort_array;
	}
	return series_collection;
}
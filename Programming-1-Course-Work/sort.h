#pragma once

template <typename T>
void swap(T* a, T* b)
{
	T temp = *a;
	*a = *b;
	*b = temp;
}

template <typename T>
void swap_if_greater(T* a, T* b)
{
	if (*a > * b)
	{
		swap(a, b);
	}
}

template <typename T>
T* partition(T* first, T* last)
{
	T* left = first;
	T* right = last - 1;
	T* middle = left + (right - left) / 2;

	swap_if_greater(left, middle);
	swap_if_greater(left, right);
	swap_if_greater(middle, right);

	T pivot = *middle;
	swap(middle, --right);

	while (left < right)
	{
		while (*(++left) < pivot);
		while (*(--right) > pivot);
		if (left >= right)
		{
			break;
		}
		swap(left, right);
	}
	swap(left, last - 2);
	return left;
}

template <typename T>
void quick_sort(T* first, T* last)
{
	if (first < last - 1)
	{
		T* pivot = partition(first, last);
		quick_sort(first, pivot);
		quick_sort(pivot + 1, last);
	}
}

template <typename T>
void merge(T* first, T* mid, T* last)
{
	T* merged = new T[last - first];
	T* left = first;
	T* right = mid;

	while (left != mid && right != last)
	{
		*(merged++) = (*left < *right) ? *(left++) : *(right++);
	}
	while (left != mid)
	{
		*(merged++) = *(left++);
	}
	while (right != last)
	{
		*(merged++) = *(right++);
	}
	while (right > first)
	{
		*(--right) = *(--merged);
	}
	delete[] merged;
}

template <typename T>
void merge_sort(T* first, T* last)
{
	if (first < last - 1)
	{
		T* mid = first + (last - first) / 2;
		merge_sort(first, mid);
		merge_sort(mid, last);
		merge(first, mid, last);
	}
}

template<typename T>
void down_heap(int left, int n, T* first)
{
	T d = *(first + left - 1);
	int child;

	while (left <= n / 2)
	{
		child = 2 * left;
		if (child < n && *(first + child - 1) < *(first + child))
		{
			child++;
		}
		if (d >= *(first + child - 1))
		{
			break;
		}
		*(first + left - 1) = *(first + child - 1);
		left = child;
	}
	*(first + left - 1) = d;
}

template<typename T>
void heap_sort(T* first, T* last)
{
	int n = last - first;

	for (int left = n / 2; left >= 1; --left)
	{
		down_heap(left, n, first);
	}
	for (int left = n; left > 1; --left)
	{
		swap(first, first + left - 1);
		down_heap(1, left - 1, first);
	}
}
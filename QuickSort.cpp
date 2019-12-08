#include "QuickSort.h"

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

int partition(char items[], int low, int high) {
	int pivot = items[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (items[j] <= pivot)
		{
			i++;
			swap(items[i], items[j]);
		}
	}
	swap(items[i + 1], items[high]);
	return (i + 1);
}

void quickSort(char items[], int low, int high) {
	if (low < high)
	{
		int pi = partition(items, low, high);

		quickSort(items, low, pi - 1);
		quickSort(items, pi + 1, high);
	}
}
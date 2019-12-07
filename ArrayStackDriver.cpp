#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;

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

int main() {
	
	ArrayStack stack; // define a Stack named stack
	int size; 
	
	cout << "Please enter the lenght of stack that you want to create:";
	cin >> size;
	
	char crr[MAX_STACK];

	cout << "Fully random auto generated stack from A-z including lower and upper cases: \n";
	
	stack.pushrandom(crr,size);
	stack.peekall(size);
	cout << endl;
	
	cout << "Using Quick Sort to sort stack: \n";
	
	quickSort(crr, 0, size-1);
	stack.pushAll(crr, size);
	stack.peekall(size);
	
	cout << endl;
	cout << "Done";
	return 0;
}  


#include <iostream>
#include <string>
#include "QuickSort.h"
#include "Stack.h"

using namespace std;

int main() {

	ArrayStack stack; // define a Stack named stack
	int size;

	cout << "Please enter the lenght of stack that you want to create:";
	cin >> size;

	char crr[MAX_STACK];

	cout << "Fully random auto generated stack from A-z including lower and upper cases: \n";

	stack.pushrandom(crr, size);
	stack.peekall(size);
	cout << endl;

	cout << "Using Quick Sort to sort stack: \n";

	quickSort(crr, 0, size - 1);
	stack.pushAll(crr, size);
	stack.peekall(size);

	cout << endl;
	cout << "Done";
	return 0;
}


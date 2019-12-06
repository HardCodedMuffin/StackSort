#include <cassert>       // For assert
#include "ArrayStack.h"  // Header file
#include <iostream>
#include <time.h>

ArrayStack::ArrayStack() : top(-1) {} 

bool ArrayStack::isEmpty() const {
	return top < 0;	
}  

bool ArrayStack::push(const char& newEntry) {
	bool result = false;	
	if (top < MAX_STACK - 1)  // Does stack have room for newEntry?
	{
		top++;
		items[top] = newEntry;
		result = true;
	}  
	return result;
}  


bool ArrayStack::pop() {
	bool result = false;
	if (!isEmpty())
	{
		top--;
		result = true;
	}  
	return result;
} 


char ArrayStack::peek() const {
	assert(!isEmpty());			 // Enforce precondition	
	return items[top];		    // Stack is not empty; return top
}  

void ArrayStack::pushrandom(int size) {
	char c;
	srand(time(NULL));		    // initialize the random number generator
	for (int i = 0; i < size; i++)
	{
		c = rand() % 26 + 65;
		if (rand() % 2) {
			c += 32;
		}
		push(c);
	}
}

void ArrayStack::peekall(int size) {
	for (int i = 0; i <size; i++)
	{
		std::cout << ("%s ", items[i]) << " ";
	}
}

void ArrayStack::swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
}


int ArrayStack::partition(char items[], int low, int high) {
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

void ArrayStack::quickSort(char items[], int low, int high) {
	if (low < high)
	{
		int pi = partition(items, low, high);

		quickSort(items, low, pi - 1);
		quickSort(items, pi + 1, high);
	}
}

void ArrayStack::printAll(int items[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << ("%s ", items[i]);

}
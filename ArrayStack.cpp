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
		c = 'a' + rand() % 52;            // Convert to a character from a-z
		push(c);
	}
}

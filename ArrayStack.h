#ifndef ARRAY_STACK_
#define ARRAY_STACK_

const int MAX_STACK = 1000;

class ArrayStack {
private:	
	char items[MAX_STACK];     // Array of stack items
	int top;				   // Index to top of stack
public:
	ArrayStack();             // Default constructor
	bool isEmpty() const;
	bool push(const char& newEntry);
	void pushrandom(int size);
	bool pop();
	char peek() const;	
	void peekall(int size);
	
	void swap(int a, int b);
	int partition(char items[], int low, int high);
	void quickSort(char items[], int low, int high);
	void printAll(int items[], int size);
}; 

#endif

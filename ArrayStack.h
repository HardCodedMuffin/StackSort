#ifndef ARRAY_STACK_
#define ARRAY_STACK_

const int MAX_STACK = 20;

class ArrayStack {
private:	
	char items[MAX_STACK];     // Array of stack items
	int top;				   // Index to top of stack
public:
	 ArrayStack();             // Default constructor
	 bool isEmpty() const;
	 bool push(const char& newEntry);
	 bool pop();
	 char peek() const;	
	 void pushrandom(int size);
}; 

#endif

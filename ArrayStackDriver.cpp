#include <iostream>
#include <string>
#include "ArrayStack.h"

using namespace std;

int main() {
	int size;
	ArrayStack stack;
	cout << "Please enter a stack size you want:";
	cin >> size;
	stack.pushrandom(size);
	stack.peekall(size);	
	return 0;
}  


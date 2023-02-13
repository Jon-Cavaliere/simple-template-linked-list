/**
*	Simple Template Singly-Linked List Implementation
*	Jon C.
*	2/13/23
*/

#include <iostream>
#include <string.h>
#include "LinkedList.h"

int main()
{
	// Create a singly-linked list of integers
	LinkedList<int> list;

	std::cout << "Integer list: " << std::endl << std::endl;

	// Add integers 1 - 3
	list.add(1);
	list.add(2);
	list.add(3);

	// Print the entire list
	list.print();

	std::cout << std::endl;

	// Remove the 2and 3
	list.remove(2);
	list.remove(3);

	// Print again
	list.print();
	std::cout << std::endl;

	std::cout << "String list: " << std::endl << std::endl;

	// Create singly-linked list of strings
	LinkedList<std::string> strList;
	strList.add("Hello");
	strList.add("World!");
	strList.add("Strings");

	strList.print();
	std::cout << std::endl;

	// Remove first two elements
	strList.remove("Hello");
	strList.remove("World!");

	// Attempt to remove element that doesn't exist
	strList.remove("strangs");

	// Print the list again
	strList.print();
	return 0;
}
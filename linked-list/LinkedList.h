#pragma once
#include <iostream>
#include "Node.h"

template <class T>
class LinkedList
{
public:
	typedef T value_type;

	LinkedList() : m_Head(nullptr) {}

	// Adds a node to the list
	inline Node<value_type>* add(value_type data)
	{
		Node<value_type>* node = new Node<value_type>(data);
		if (!m_Head)
			m_Head = node;
		else {
			Node<value_type>* current = m_Head;
			// While the current node is not null
			while (current->getNext()) 
			{
				current = current->getNext();
			}
			// When that loop is done, current will be the last node
			current->setNext(node);
		}
		return node;
	}

	// Removes a node if data matches, returns false if no match
	inline bool remove(value_type data)
	{
		Node<value_type>* current = m_Head;
		// Check if head contains the data
		if (current->getValue() == data) {
			// Set head pointer to current head->next
			current = m_Head->getNext();
			// Delete head element
			delete(m_Head);
			m_Head = current;	
			return true;
		}
		else
		{
			// Go through every node until we have a data match or run out of nodes
			while (current->getNext())
			{
				Node<value_type>* previous = current;
				current = current->getNext();
				if (current->getValue() == data)
				{
					previous->setNext(current->getNext());
					delete(current);
					return true;
				}
			}
			// Data not found
			return false;
		}
	}

	// Prints the whole list to console in format '[ element1, element2, ..., element_n]'
	inline void print() 
	{
		std::cout << "[ ";
		Node<value_type>* current = m_Head;
		while (current->getNext()) {
			if(current->getNext())
				std::cout << current->getValue() << ", ";
			current = current->getNext();
		}
		// Print last node
		std::cout << current->getValue() << " ]" << std::endl;
	}
	

private:

	// Points to the top node
	Node<value_type>* m_Head;
};

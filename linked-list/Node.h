#pragma once

template <class T>
class Node
{
public:
	typedef T value_type;

	Node(value_type data);

	inline Node<value_type>* getNext() { return m_Next; }
	inline Node<value_type>* setNext(Node<value_type>* next) 
	{
		m_Next = next;
		return m_Next;
	}

	inline value_type getValue() { return m_Data; }
private:
	value_type m_Data;
	Node<value_type>* m_Next;

};

template<class T>
inline Node<T>::Node(value_type data)
{
	m_Data = data;
	m_Next = nullptr;
}

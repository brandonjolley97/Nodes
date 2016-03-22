/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#include "Node.h"
#include <iostream>

template <class Type>
Node<Type>::Node()
{
	pointers = nullptr;
}

template <class Type>
Node<Type>::Node(const Type& value)
{
	this->value = value;
	pointers = nullptr;

}

template <class Type>
Node<Type>::~Node()
{

}

template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}

template <class Type>
void Node<Type> :: setValue(Type value)
{
	this->value = value;
}

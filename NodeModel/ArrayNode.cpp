/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: bjol7457
 */

#include "ArrayNode.h"
#include <iostream>

template<class Type>
ArrayNode<Type> :: ArrayNode() : Node<Type>()
{
	this->next = nullptr;


}

template<class Type>
ArrayNode<Type> :: ArrayNode(const Type& value) : Node<Type>(value)
{
	this->setValue(value);
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type> :: ArrayNode(const Type& value, ArrayNode * next) : Node<Type>(value)
{
	this->setValue(value);
	this->next = next;

}

template<class Type>
ArrayNode<Type>::~ArrayNode()
{



}

template<class Type>
ArrayNode<Type> * ArrayNode<Type> :: getNext()
{
	return this->next;
}


template<class Type>
void ArrayNode<Type> :: setNext(ArrayNode * next)
{
	this->next = next;
}

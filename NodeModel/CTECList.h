/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: bjol7457
 */

#ifndef NODEMODEL_CTECLIST_H_
#define NODEMODEL_CTECLIST_H_

#include "ArrayNode.h"

template<class Type>
class CTECList
{
private:
	int size;
	ArrayNode<Type> * head;
	ArrayNode<Type> * end;
	void calculateSize();
public:
	CTECList();
	virtual ~CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addToIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFront();
	Type removeEnd();
	Type removeIndex(int index);
	Type set(int index, const Type& value);
	int indexOf(Type searchValue);
};

#endif /* NODEMODEL_CTECLIST_H_ */

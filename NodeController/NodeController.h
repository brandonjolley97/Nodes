/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#ifndef NODECONTROLLER_NODECONTROLLER_H_
#define NODECONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>

#include "../NodeModel/Node.cpp"
#include "../NodeModel/ArrayNode.cpp"
#include "../NodeModel/CTECArray.cpp"
#include "../NodeModel/CTECList.cpp"
#include "../NodeModel/Timer.h"

using namespace std;

class NodeController
{
private:
    Timer arrayTimer;
	CTECArray<int> * notHipsterInts;
	CTECArray<double> * notHipsterDoubles;
	CTECList<int> * numbers;
	void testLists();
    void searchTest();
    void sortData();
    
    void quicksort(int first, int last);
    void swap(int first, int last);
    int partition(int first, int last);
    
    int * mergeData;
    void doMergesort();
    void mergesort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);
public:
	NodeController();
	virtual ~NodeController();
	void start();
    void checkSorts();
    

};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */

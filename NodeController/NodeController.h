/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include "../NodeModel/Node.h"
#include "../NodeModel/Node.cpp" //Must include a reference to .h and .cpp

#include "../NodeModel/ArrayNode.h"
#include "../NodeModel/ArrayNode.cpp"

#include "../NodeModel/CTECArray.h"
#include "../NodeModel/CTECArray.cpp"

#include "../NodeModel/CTECList.h"
#include "../NodeModel/CTECList.cpp"

#include "../NodeModel/CTECBinaryTree.hpp"
#include "../NodeModel/CTECBinaryTree.cpp"

#include "../NodeModel/Graph.hpp"
#include "../NodeModel/Graph.cpp"

#include "../NodeModel/MorningHashTable.cpp"
#include "../NodeModel/MorningHashTable.hpp"

#include "../NodeModel/HashNode.cpp"
#include "../NodeModel/HashNode.hpp"

#include "../NodeModel/Timer.h"


#include <iostream>
#include <string>

using namespace std;

class NodeController
{
private:
    CTECArray<int> * notHipsterInts;
    CTECArray<double> * notHipsterDoubles;
    CTECList<int> * numbers;
    Timer arrayTimer;
    void tryGraph();
    void testLists();
    void checkSorts();
    int * mergeData;
    void doMergeSort();
    void mergeSort(int data[], int size);
    void merge(int data[], int sizeOne, int sizeTwo);
    void doBogo();
    void quickSort(int first, int last);
    int partition(int first, int last);
    void swap(int first, int last);
    void doQuick();
    void tryTree();
    void testTable();
public:
    NodeController();
    virtual ~NodeController();
    void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
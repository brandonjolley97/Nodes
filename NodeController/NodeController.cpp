/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bjol7457
 */

#include "NodeController.h"

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
	notHipsterDoubles = new CTECArray<double>(5);
	numbers = new CTECList<int>;
}

NodeController::~NodeController()
{

}

void NodeController::testLists()
{
	numbers->addToFront(3);
	numbers->addToEnd(8);
	cout << "End should be 8 and is: " << numbers->getEnd() << endl;
	cout << "Head should be 3 and is: " << numbers->getFront() << endl;
}

void NodeController::testTable()
{
    MorningHashTable<int> tempTable;
    HashNode<int> tempArray[10];
    for (int spot = 0; spot < 10; spot++)
    {
        int randomValue = rand();
        int randomKey = rand();
        HashNode<int> temp = HashNode<int>(randomKey, randomValue);
        cout << temp.getValue() << endl;
        tempTable.add(temp);
        tempArray[spot] = temp;
    }
    for (int index = 0; index < 10; index++)
    {
        bool test = tempTable.contains(tempArray[index]);
        string result;
        if (test)
        {
            result = "It's there.";
        }
        else
        {
            result = "Not anywhere.";
        }
        cout << result << endl;
    }
}

void NodeController::tryGraph()
{
    Graph<int> testerGraph;
    testerGraph.addVertex(7);
    testerGraph.addVertex(18);
    testerGraph.addVertex(1);
    testerGraph.addVertex(-11);
    testerGraph.addVertex(10);
    testerGraph.addVertex(50);
    testerGraph.addVertex(110);
    
    testerGraph.addEdge(0, 1);
    testerGraph.addEdge(1, 2);
    testerGraph.addEdge(2, 3);
    testerGraph.addEdge(3, 4);
    testerGraph.addEdge(4, 5);
    testerGraph.addEdge(5, 6);
    
    cout << "Breath First Traversal" << endl;
    testerGraph.breathFirstTraversal(testerGraph, 0);
    
    cout << "Depth First Traversal" << endl;
    testerGraph.depthFirstTraversal(testerGraph, 0);
}

void NodeController::tryTree()
{
    CTECBinaryTree<int> testTree;
    testTree.insert(5);
    testTree.insert(7);
    testTree.insert(3);
    testTree.insert(111);
    testTree.insert(4563);
    testTree.insert(0);
    testTree.insert(-13);
    
    cout << "INORDER TRAVERSAL" << endl;
    testTree.inorderTraversal(testTree.getRoot());
    cout << " Tree" << endl;
    
    cout << "PREORDER TRAVERSAL" << endl;
    testTree.preorderTraversal(testTree.getRoot());
    cout << " Tree" << endl;
    
    cout << "POSTORDER TRAVERSAL" << endl;
    testTree.postorderTraversal(testTree.getRoot());
    cout << " Tree" << endl;
    
    cout << testTree.contains(5) << endl;
    
    testTree.remove(5);
    
    cout << "INORDER TRAVERSAL" << endl;
    testTree.inorderTraversal(testTree.getRoot());
    cout << " Tree" << endl;
}


void NodeController::checkSorts()
{
    CTECArray<int> numbersInArray(5000);
    CTECList<int> numbersInList;
    int CPlusPlusArray[5000];
    for(int spot = 0; spot < 5000; spot++)
    {
        int randomValue = rand();
        numbersInArray.set(spot, randomValue);
        numbersInList.addToEnd(randomValue);
        CPlusPlusArray[spot] = randomValue;
        
    }
    
    Timer sortTimer;
    sortTimer.startTimer();
    numbersInList.selectionSort();
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
    sortTimer.startTimer();
}

void NodeController :: start()
{
	//testLists();

	for(int index =0; index < notHipsterDoubles->getSize(); index++)
	{
		notHipsterDoubles->set(index, (2.3 * index));
	}

	for(int index = 0; index < notHipsterDoubles->getSize(); index++)
	{
		cout << "notHipsterDoubles at index " << index << " contains " << notHipsterDoubles->get(index) << endl;
	}

	for(int index =0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (23 * index));
	}

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		cout << "notHipsterInts at index " << index << " contains " << notHipsterInts->get(index) << endl;
	}
    
    //doMergeSort();
    tryTree();
    //tryGraph();
    //testTable();
    
    
}

void NodeController::doMergeSort()
{
    mergeData = new int[500000];
    
    for(int spot = 0; spot < 500000; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    
    for(int spot = 0; spot < 500000; spot++)
    {
        cout << mergeData[spot] << ", ";
    }
    
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergeSort(mergeData, 500000);
    mergeTimer.stopTimer();
    mergeTimer.displayTimerInformation();
    
    for(int spot = 0; spot < 500000; spot++)
    {
        cout << mergeData[spot]<< ", ";
    }
    
    delete [] mergeData;
    
}

void NodeController::mergeSort(int data [], int size)
{
    int sizeOne;
    int sizeTwo;
    
    if(size > 1)
    {
        sizeOne  = size/2;
        sizeTwo = size-sizeOne;
        
        mergeSort(data, sizeOne);
        mergeSort((data+sizeOne), sizeTwo);
        
        merge(data, sizeOne, sizeTwo);

    }
    
    }

void NodeController::merge(int data [], int sizeOne, int sizeTwo)
{
    int * temp;
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne)[copied2])
        {
            temp[copied++] = data[copied1++];
        }
        else
        {
            temp[copied++] = (data + sizeOne)[copied2++];
        }
    }
    
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied1++];
        
    }
    
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
        
    }
    
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    
    delete [] temp;
}

void NodeController::quickSort(int first, int last)
{
    int pivotIndex;
    
    if(first < last)
    {
        pivotIndex = partition(first, last);
        quickSort(first, pivotIndex - 1);
        quickSort(pivotIndex + 1, last);
    }
        
        
}

int NodeController::partition(int first, int last)
{
    int pivot;
    int index, smallIndex;
    
    swap(first, (first + last)/2);
    
    pivot = mergeData[first];
    smallIndex = first;
    
    for(index = first + 1; index <= last; index++)
    {
        if(mergeData[index] < pivot)
        {
            smallIndex++;
            swap(smallIndex, index);
        }
    }
    swap(first, smallIndex);
    
    return smallIndex;
}

void NodeController::swap(int first, int last)
{
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = temp;
    
}

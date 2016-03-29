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
	testLists();

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
}


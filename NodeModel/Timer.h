/*
 * Timer.h
 *
 *  Created on: Mar 10, 2016
 *      Author: bjol7457
 */

#ifndef NODEMODEL_TIMER_H_
#define NODEMODEL_TIMER_H_
#include "Time.h"

class Timer
{
private:
	clock_t executionTime;
public:
	Timer();
	virtual ~Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayTimerInformation();
	long getExecutionTimeInMicroseconds();
};

#endif /* NODEMODEL_TIMER_H_ */

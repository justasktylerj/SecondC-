/*
 * SillyAppController.cpp
 *
 *  Created on: Jan 19, 2016
 *      Author: tjar2074
 */


#include "SillyAppController.h"
#include <iostream>
using namespace std;

SillyAppController :: SillyAppController()
{
	this->count = 99;
}

void SillyAppController :: setCount(int count)
{
	this->count = count;
}

int SillyAppController :: getCount()
{
	return this->count;
}

void SillyAppController :: start()
{
	cout << "In the SillyAppController\'s start method" << endl;
	cout << getCount() << " is the count right now " << endl;
	cout << "Type in a new Value for count please" << endl;
	int tempCount;
	cin >> tempCount;
	setCount(tempCount);
	cout << getCount() << " is the updated count " << endl;
}

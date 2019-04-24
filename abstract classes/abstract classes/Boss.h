#pragma once
#include "Human.h"

#ifndef BOSS_H
#define BOSS_H

class boss : public human
{
	int number_of_workers;
	
public:
	boss(string n, string m, string s, int a, int num) :
		human(n, m, s, a)
	{
		number_of_workers = num;
	}

	boss() :
		human()
	{
		number_of_workers = -1;
	}

	~boss()
	{
		cout << "boss has been destructed" << endl;
		system("pause");
	}

	void print() override
	{
		human::print();
		cout << "current number of employees is: " << number_of_workers << endl;
	}
};

#endif
#pragma once
#include "Human.h"

#ifndef STUDENT_H
#define STUDENT_H

class student : public human
{
	bool on_lesson;
public:

	student() :
		human()
	{
		on_lesson = 0;
	}

	student(string n, string m, string s, int a, bool o) :
		human(n, m, s, a)
	{
		on_lesson = o;
	}

	~student()
	{
		cout << "student has been destructed" << endl;
		system("pause");
	}

	void print() override
	{
		human::print();
		if (on_lesson == true)
			cout << "is currently on lesson" << endl;
		else
			cout << "is not currently on lesson" << endl;
	}
};

#endif
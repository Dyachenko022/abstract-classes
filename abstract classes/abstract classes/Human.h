#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef HUMAN_H
#define HUMAN_H
class human
{
protected:
	string name;
	string midname;
	string surname;
	int age;
public:
	human()
	{
		name = "none";
		midname = "none";
		surname = "none";
		age = -1;
	}
	human(string n, string m, string s, int a)
	{
		name = n;
		midname = m;
		surname = s;
		age = a;
	}

	~human()
	{
		cout << "human has been destructed" << endl;
		system("pause");
	}

	virtual void print()
	{
		cout << name << " " << midname << " " << surname << " is " << age << " years old" << endl;
	}

};
#endif
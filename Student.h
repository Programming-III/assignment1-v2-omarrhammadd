#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class  Student : public Person {
private:
	int yearLevel;
	string major;

public:
	Student(int yearLevel, string major,string n, int ID);
	Student(int yearLevel, string major);
	Student();
	void display();
	int getYearLevel();
	string getMajor();
	void setYearLevel(int YL);
	void setMajor(string m);

};

#endif


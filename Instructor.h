#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include "Person.h"
using namespace std;

class Instructor : public Person {
private:
	string department;
	int experienceYears;

public:
	Instructor(string department, int experienceYears,string n = "", int ID = 0);
	Instructor();
	~Instructor();
	void display();
	string getDepartment();
	int getExperienceYears();
	void setDepartment(string dep);
	void setExperienceYears(int EY);
	



};
#endif

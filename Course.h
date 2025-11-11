#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
#include <iostream>
using namespace std;
class Course {
private:
	string courseCode;
	string courseName;
	int maxStudents;
	Student* students;
	int currentStudents;

public:
	Course(string coursCode, string CourseName, int maxStudents);
	Course();
	void addStudent(const Student& s);
	void displayCourseInfo();


};














#endif

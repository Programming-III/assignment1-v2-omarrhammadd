#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name, int id) {
	this->name = name;
	this->id = id;
}
Person::Person() {
	this->name = "";
	this->id = 0;
}
void Person::display() {
	cout << "Name: " << name << endl << "ID: " << id << endl;
}
string Person::getName() {
	return name;
}
int Person::getID() {
	return id;
}
void Person::setName(string n) {
	name = n;
}
void Person::setID(int ID) {
	id = ID;
}







// ==================== Student Class Implementation ====================
Student::Student(int yearLevel, string major,string n = "", int ID = 0) {
	Person(n,ID);
	this->yearLevel = yearLevel;
	this->major = major;
}

Student::Student() {
	this->yearLevel = 0;
	this->major = major;
}
void Student::display() {
	cout << "Student info: " << endl << "Name: " << getName() << endl << "Year: " << yearLevel << endl << "Major: " << major << endl
}
int Student:: getYearLevel() {
	return yearLevel;
}
string Student::getMajor() {
	return major;
}
void Student::setYearLevel(int YL) {
	yearLevel = YL;
}
void Student::setMajor(string m) {
	major = m;
}





// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string department, int experienceYears, string n = "", int ID = 0) {
	Person(n, ID);
	this->department = department;
	this->experienceYears = experienceYears;
}
Instructor::Instructor() {
	Person("", 0);
	this->department = "";
	this->experienceYears = 0;
}
Instructor :: ~Instructor() {

}
void Instructor::display() {
	cout << "Instructor info: " << endl << "Name: " << getName() << endl << "Department: " << department << endl << "Experience Years: " << experienceYears << endl;
	
}
string Instructor::getDepartment() {
	return department;
}
int Instructor::getExperienceYears() {
	return experienceYears;
}
void Instructor::setDepartment(string dep) {
	department = dep;
}
void Instructor::setExperienceYears(int EY) {
	experienceYears = EY;
}





// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int id;

public:
	Person(string name, int id);
	Person();
	void display();
	string getName();
	int getID();
	void setName(string n);
	void setID(int ID);

};
#endif // !PERSON_H



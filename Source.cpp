#include "Header.h"
#include <string>

// Cài đặt Default constructor;
Student::Student() {
	Name = (char*)"ANONYMUS";
	Age = 0;
	ID = 0;
}

Student::Student(char* name, int age, int id) {
	int length = strlen(name) + 1;
	this->Name = new char[length];
	strcpy(this->Name, name);
	this->Age = age;
	this->ID = id;
}
// Cài đặt copy constructor
Student::Student(const Student& s) {
	int length = strlen(s.Name) + 1;
	this->Name = new char[length];
	strcpy(this->Name, s.Name);
	this->Age = s.Age;
	this->ID = s.ID;
}

void Student::print() {
	cout << this->Name << "\t" << this->Age << "\t" << this->ID << endl;
}
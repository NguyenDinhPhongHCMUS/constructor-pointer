#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Student {
private:
	char* Name;
	int Age;
	int ID;
public:
	Student();
	Student(char*, int, int);
	Student(const Student &s);
	void print();
};
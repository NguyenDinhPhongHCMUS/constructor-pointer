#include "Header.h"
int main() {
	Student n1;
	Student n2((char*)"Gia Long", 20, 20120525);
	Student n3(n2);
	n1.print();
	n2.print();
	n3.print();
	return 0;
}
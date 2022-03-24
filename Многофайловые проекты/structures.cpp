#include"structures.h"
#include<iostream>
void showObj(date d) {
	std::cout << d.day << "." << d.month << "." << d.year << std::endl;
}

void showObj(person P){
	std::cout << "Name: " << P.name << std::endl;
	std::cout << "Birthday: ";
	showObj(P.birthday);
	std::cout << "Position: " << P.positions << std::endl;
	std::cout << "Salary: " << P.salary << std::endl;
}

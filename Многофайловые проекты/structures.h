#pragma once
#include<string>
struct date{
	int day;
	int month;
	int year;
};

struct person{
	std::string name;
	date birthday;
	std::string positions = "programer";
	int salary = 50000;

};

void showObj(date D);
void showObj(person P);
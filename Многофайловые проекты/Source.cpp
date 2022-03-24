//Занятие 51. Многофайловые проекты
#include<iostream>
#include"functions.h"
#include"structures.h"
#include "Data.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int n, m;
	//работа с function.h
	/*
	cout << "Введите два числа:";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	int arr[10];
	fillarr(arr, 10, 50, 101);
	cout << "Изначальный массив:\n";
	showArr(arr, 10);*/
	//работа с structions.h
	/*person Tom = {"Tom Smith",{12,5,1986},"director",120000};
	showObj(Tom.birthday);
	showObj(Tom);*/
	x = 10;
	cout << "X = " << x << endl;
	y = 15;
	cout << "Y = " << y << endl;
	fillMX();
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 5; j++)
			cout << mx[i][j] << "\t";
		cout << endl;
	}


	

	system("pause>nul");
	return 0;
}
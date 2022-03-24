#pragma once
#include<iostream>

//return a+b
int sum(int a, int b);

//—оздание массива случайными числами
void fillarr(int arr[], int length,int a,int b);

//¬ывод массива, состо€щего из случайных чисел
template <typename T> void showArr(T arr[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
		std:: cout << "\b\b]\n";

}


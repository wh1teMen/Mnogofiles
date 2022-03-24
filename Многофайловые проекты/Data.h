#pragma once
int  x, y;
const double _PI = 3.14;
int mx[5][5];
void fillMX(){
	for (int i = 0; i < 5; i++)	{
		for (int j = 0; j < 5; j++){
			mx[i][j] = i + j;
		}
	}
}
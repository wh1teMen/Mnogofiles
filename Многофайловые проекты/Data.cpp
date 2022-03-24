#pragma once
#include"Data.h"

void fillMX(){
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) 
			mx[i][j] = i + j;
		
	}
}

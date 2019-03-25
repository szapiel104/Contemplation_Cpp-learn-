// Contemplation C++ 
// Michal Szapiel | SuroCrave 2019

// Created for Learning and discovering. 
// Documentations, update every month
/* https://github.com/szapiel104 */


#include "pch.h"
#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;


clock_t start, stop;
double timer;


/* (01)
***	Sort One Dimensional Table (Comparison | Long)
** n - length
*/
void OneDimensionalTableSort(int a[], int n) {
	int temp;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) { 
				temp = a[i];
				a[i] = a[j]; 
				a[j] = temp;
			}
		}
	}

}

/* (01)
***	Create table (sort)
*/
void table() {
	int array[16] = { 241,42,-23,42,535,-25,-5,-62,145,532 };

	cout << "Not sorted table: " << endl;
	for (int i = 0; i < 16; i++) {
		if (array[i] > 0 || array[i] < 0) {
			cout << array[i] << endl;
		}

	}

	// Sort One Dimensional Table (Comparison | Long)
	OneDimensionalTableSort(array, 16);

	cout << endl << "Sorted table" << endl;
	for (int i = 0; i < 16; i++) {
		if (array[i] > 0 || array[i] < 0) {
			cout << array[i] << endl;
		}

	}
}

/* (02)
***	Pointers, 
** https://www.youtube.com/watch?v=0DQl74alJzw (Pasja informatyki)
** http://www.cplusplus.com/doc/tutorial/pointers/ (cplusplus.com)
*/

void pointers() {
	int number = 150;
	int *w;
	w = &number;
	cout << "Pointer adress:  " << w << endl; // Find adress in RAM
	cout << "Read variable:  " << *w << endl <<endl; // If you add star (read variable)


	int howMuch;
	cout << " --- The size of the table --- " << endl;
	cin >> howMuch;
	
	// without pointers
	int *table;
	table = new int[howMuch];
	start = clock();
	for (int i = 0; i < howMuch; i++) {
		table[i] = i;
		table[i] += 50;
	}
	stop = clock();
	timer = (double)(stop - start)/CLOCKS_PER_SEC;
	cout << "Save time without pointer : " << timer << endl;
	

	

	// with pointers
	int *pointer = table;
	table = new int[howMuch];
	start = clock();
	for (int j = 0; j < howMuch; j++) {
		*pointer = j;
		*pointer += 50;
		pointer++;
	}
	stop = clock();
	timer = (double)(stop - start) / CLOCKS_PER_SEC;
	cout << "Save time with pointer : " << timer << endl;
	delete[] table;
	
}

/*
***	Main
*/
int main()
{
	cout << " ------------------------------------------------ " << endl;
	std::cout << " --- Contemplation C++ (Learn) --- " << endl;
	cout << " ------------------------------------------------ " << endl << endl;
	
	//table();
	pointers();
}

// Contemplation C++ 
// Michal Szapiel | SuroCrave 2019

// Created for Learning and discovering. 
// Documentations, update every month
/* https://github.com/szapiel104 */

// Next learn https://www.youtube.com/watch?v=h2Taf16gQDI&index=8&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo


#include "pch.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>

#pragma warning(disable:4996) //turn off the security (getch)

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

void YearAndMonth() {
	int monthNumber;
	int yearY;
	cout << "Enter the month number" << endl;
	if (!(cin >> monthNumber)) {
		cerr << "This is not month!" << endl;
	}

	switch (monthNumber) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8: 
	case 10:
	case 12:
		cout << "This month has 31 days" << endl;
		break;

	case 2:
		cout << "Which we have a year?" << endl;
		cin >> yearY;
		if ((yearY % 4 == 0 && yearY % 100 != 0) || (yearY % 400 == 0)) {
			cout << "This month has 29 days" << endl;
		}
		else {
			cout << "This month has 28 days" << endl;
		}
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		cout << "This month has 30 days" << endl;
		break;

	default : cout << "Bad number. Choose again! ..." << endl;
	}

	
}

/*
***	Main
*/
int main()
{
	char menuChooser;
	for (;;) {
		cout << " ------------------------------------------------ " << endl;
		std::cout << " --- Contemplation C++ (Learn) --- " << endl;
		cout << " ------------------------------------------------ " << endl << endl;
		cout << "1. Table" << endl;
		cout << "2. Pointers" << endl;
		cout << "3. Year and month" << endl;
		cout << "4. Exit application" << endl;

		menuChooser = getch();
		system("cls");
		switch (menuChooser) {
		case '1':
			table();
			break;
		case '2':
			pointers();
			break;
		case '3':
			YearAndMonth();
			break;
		default: cout << "Bad number... Choose again!" << endl;
		}
		cout << endl<<endl<<"... Press button ... " << endl;
		getch();
		system("cls");
	}
}

// Contemplation C++ (Learning and discovering)

#include "pch.h"
#include <iostream>
using namespace std;

// Sort One Dimensional Table (Comparison | Long)
// n - length
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

// Application

int main()
{
	std::cout << "Hello World!\n";

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

	cout << endl << "End program" << endl;
}

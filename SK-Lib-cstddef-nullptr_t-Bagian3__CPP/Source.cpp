// This program compiles

#include <iostream>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int* ptr = nullptr;

	// Below line compiles
	if (ptr) { 
		cout << "true"; 
	} else { 
		cout << "false"; 
	}

	_getch();
	return 0;
}

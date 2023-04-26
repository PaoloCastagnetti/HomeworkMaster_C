#include <iostream>
#include <stdio.h>
using namespace std;

void myPrint(string _words) {
	cout << _words << endl;
}

int main() {

	int base10Variable = 10; //variabile in base 10 contenente il valore 10
	int base16Variable = 0x10; //variabile in base 16 contenente il valore 16
	int base8Variable = 011; //variabile in base 8 contenente il valore 9
	int base2Variable = 0b11; // variabile in base 2 contenente il valore 3
	float firstFloatVariable = 1.f, secondFloatVariable = 1, thirdfloatVariable = 1.0;

	// Error example: Bad declaration
	// const int _const;

	// Error example: Not declared variable
	// a = 0;

	// Error example: Casting error 
	// int b = "12.3";

	// Error example: Linking by using extern
	// "unresolved external symbol 'int _var'"
	// extern int _var;
	// _var = 5;
	
	myPrint("Hello world con myPrint");
	printf("Hello world con printf\n");
	printf("Secondo Hello world con printf");

	return 0;
}
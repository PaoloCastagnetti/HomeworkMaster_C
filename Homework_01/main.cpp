#include <iostream>
#include <stdio.h>
using namespace std;

void myPrint(string _words) {
	cout << _words << endl;
}

int main() {

	int firtsIntVariable = 10;
	int secondIntVariable = 0x10, thirdIntVariable = 010;
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
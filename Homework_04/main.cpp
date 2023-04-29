#include <string>
#include <wchar.h>
#include <stdlib.h>
#include "library.h"

int add(int op1, int op2) {
	return 0;
}

int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}

	//How to create a function pointer
	{
		int (*pfnAdd)(int, int) = &add;
		int result = pfnAdd(2, 3);
	}

	//sprintf usage
	{
		float num = 9.34;
		printf("I'm a float, look: %f\n", num);
		char output[50]; //for storing the converted string
		sprintf_s(output, "%f", num);
		printf("Look, I'm now a string: %s\n", output);
	}
	
	//bellFunction example
	{
		int n = 5;
		printf("\n");
		int bellNumber = bellNumberFunctionPrinter(n);
		printf("\n");
		printf("Bell number of %d is %d\n", n, bellNumber);
	}
	
	return 0;
}
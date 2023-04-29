#include <stdlib.h>
#include <stdio.h>
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
	
	//string concatenation
	{
		char strFirstVar[] = "roba";
		char strSeconfVar[] = "robaccia";
		char res[(sizeof(strFirstVar) + sizeof(strSeconfVar))];
		int j = 0;
		for (int index = 0; index < sizeof(res); ++index) {
			if (index < sizeof(strFirstVar)) {
				if (strFirstVar[index] == 0) {
					continue;
				}
				res[index] = strFirstVar[index];
			}
			else {
				res[index-1] = strSeconfVar[j];
				++j;
			}
		}
		printf("%s", res);
	}
	return 0;
}
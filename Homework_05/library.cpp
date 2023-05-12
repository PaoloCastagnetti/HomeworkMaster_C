//----------
// definitionFile of library.h
//----------

#include <stdio.h>

//definition of a bell number generator
int bellNumberFunctionPrinter(int bellNumber) {
	int** matrix = new int* [bellNumber];
	int finalBellNumber = 0;

	for (int index = 0; index < bellNumber; ++index) {
		matrix[index] = new int[index + 1];
	}

	matrix[0][0] = 1;
	printf("%d\n", matrix[0][0]);

	for (int index_i = 1; index_i < bellNumber; ++index_i) {

		matrix[index_i][0] = matrix[index_i - 1][index_i - 1];
		printf("%d ", matrix[index_i][0]);

		for (int index_j = 1; index_j <= index_i; ++index_j) {
			matrix[index_i][index_j] = matrix[index_i - 1][index_j - 1] + matrix[index_i][index_j - 1];
			printf("%d ", matrix[index_i][index_j]);
			finalBellNumber = matrix[index_i][index_j];
		}
		printf("\n");
	}


	for (int index = 0; index < bellNumber; ++index) {
		delete matrix[index];
	}
	delete[] matrix;

	return finalBellNumber;
}

//definition of an adding function for eventually float variables
int integerAddingFunction(int firstValue, int secondValue) {
	return (firstValue + secondValue);
}
int integerAddingFunction(float firstValue, int secondValue) {
	return (int(firstValue) + secondValue);
}
int integerAddingFunction(int firstValue, float secondValue) {
	return (firstValue + int(secondValue));
}

//definition of powing function
int Pow(int base, int exponent) {
	int result = 1;
	for (int i = 0; i < exponent; ++i) {
		result *= base;
	}
	if (exponent > 0)
		return result;
	else if (exponent < 0)
		return (1 / result);
	else
		return 1;
}

//definition of integerClamp
int Clamp(int minValue, int maxValue, int value) {
	if (value >= minValue && value <= maxValue) {
		return value;
	}
	if (value < minValue) return minValue;
	return maxValue;
}
float Clamp(float minValue, float maxValue, float value) {
	if (value >= minValue && value <= maxValue) {
		return value;
	}
	if (value < minValue) return minValue;
	return maxValue;
}

//definition of variableSwap
void VariablesSwap(int* firstVar, int* secondVar) {
	int tmp = *secondVar;
	*secondVar = *firstVar;
	*firstVar = tmp;
}
void VariablesSwap(float* firstVar, float* secondVar) {
	float tmp = *secondVar;
	*secondVar = *firstVar;
	*firstVar = tmp;
}
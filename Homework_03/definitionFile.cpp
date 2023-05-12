//----------
// definitionFile of myLibrary.h
//----------

#ifndef myLibrary_Definition
#define myLibrary_Definition

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
int integerPow(int base, int exponent) {
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
int integerClamp(int minValue, int maxValue, int value) {
	if (value >= minValue && value <= maxValue) {
		return value;
	}
	if (value < minValue) return minValue;
	if (value > maxValue) return maxValue;
	return 0;
}
float floatClamp(float minValue, float maxValue, float value) {
	if (value >= minValue && value <= maxValue) {
		return value;
	}
	if (value < minValue) return minValue;
	if (value > maxValue) return maxValue;
	return 0.f;
}

//definition of variableSwap
void integerVariableSwap(int* firstVar, int* secondVar) {
	int tmp = *secondVar;
	*secondVar = *firstVar;
	*firstVar = tmp;
}
void floatVariableSwap(float* firstVar, float* secondVar) {
	float tmp = *secondVar;
	*secondVar = *firstVar;
	*firstVar = tmp;
}

//void* ARGBlister(int* var) {
//	//int* ptr = var;
//	//((char*)ptr) = 0;
//}
#endif // !myLibrary_Definition
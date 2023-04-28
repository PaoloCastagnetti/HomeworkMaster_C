
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
	return result;
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

//definition of variableSwap
void variableSwap(int* firstVar, int* secondVar) {
	int tmp = *secondVar;
	*secondVar = *firstVar;
	*firstVar = tmp;
}
#pragma once
/*
* @brief bellNumberFunctionPrinter print the bell number of a given number
* @param bellNumber contain the input number to calculate
* @return The bell number
*/
int bellNumberFunctionPrinter(int bellNumber);

/*
* @brief integerAddingFunction adds two variable even if one is int and the other is float
* @param firstValue contain the integer or float value
* @param secondValue contain the integer or float value
* @return The sum of the two variables
*/
int integerAddingFunction(int firstValue, int secondValue);
/*
* @brief integerAddingFunction adds two variable even if one is int and the other is float
* @param firstValue contain the integer or float value
* @param secondValue contain the integer or float value
* @return The sum of the two variables
*/
int integerAddingFunction(float firstValue, int secondValue);
/*
* @brief integerAddingFunction adds two variable even if one is int and the other is float
* @param firstValue contain the integer or float value
* @param secondValue contain the integer or float value
* @return The sum of the two variables
*/
int integerAddingFunction(int firstValue, float secondValue);

/*
* @brief integerPow return the pow of a number given the base and the exp
* @param base base of the operation
* @param exponent exponent of the operation
* @return result of the pow
*/
int Pow(int base, int exponent);

/*
* @brief Clamp a variable in a defined range
* @param minValue is the minimum value the variable can have
* @param maxValue is the maximum value the variable can have
* @param value is the passed value
* @return return the clamped value
*/
int Clamp(int minValue, int maxValue, int value);
/*
* @brief Clamp a variable in a defined range
* @param minValue is the minimum value the variable can have
* @param maxValue is the maximum value the variable can have
* @param value is the passed value
* @return return the clamped value
*/
float Clamp(float minValue, float maxValue, float value);

/*
* @brief swap the value of two given variables
* @param firstVar has the first value to swap
* @param secondVar has the second value to swap
*/
void VariablesSwap(int* firstVar, int* secondVar);
/*
* @brief swap the value of two given variables
* @param firstVar has the first value to swap
* @param secondVar has the second value to swap
*/
void VariablesSwap(float* firstVar, float* secondVar);
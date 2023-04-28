//Notes
/*
* The preprocessor is used in the first compilation stage, for each translation unit. 
* It has a very limited command set:
* #define: defines a symbol (which may have a value)
* #undef: undefines a symbol
* #ifdef / #ifndef / #elif / #else / #endif: preprocessor conditionals
* #include: includes a file as a part of the current translation unit, by copying and pasting it.
* #error: to force an error in order to fail a build.
* #pragma: compiler-dependent commands
*	#pragma warning(error: errorNumber): per fare diventare un warning un error.
*/

//Examples
/*
* #define MACRO_VALUELESS
* #define MACRO 4
* #undef MACRO
*/

//Pointers
/*
* Ottiene l'indirizzo di memoria della variabile
* int var1 = 10;
* int* pVar1= &var1;
* 
* *pVar2 = 1997;
* se la zona di memoria presa da pVar2 è linkata anche a delle variabili 
* allora anche il loro contenuto verrà modificato
*/

//Reference & Copy params
/*
* int customInteger;
* functionPtr(&customInteger); //è possibile passare 0 come indirizzo del puntatore
* functionRef(customInteger); //non è possibile passare altro che non sia una reference
* 
* void functionRef(int& refParam){
*	refParam=5;
* }
* 
* void functionPtr(int* ptrParam){
*	*prtParam=5;
* }
* 
*/

//How to write documentation
/*
* @brief Function description
* @param firstParam explanation
* @param secondParam explanation
* @return returnValue explanation
*/

#include "myLibrary.h"
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}

	//Testing integerAddingFunction()
	{
		int integerVariable = 5;
		float floatVariable = 10.f;
		int addingResult = integerAddingFunction(integerVariable, floatVariable);
		printf("Adding result: %d\n", addingResult);
	}
	
	//Testing integerPow()
	{
		int base = 5, exponent = 3;
		int powResult = integerPow(base, exponent);
		printf("Pow result: %d\n", powResult);
	}
	
	//Testing integerClamp()
	{
		int value = 1000, min = 0, max = 100;
		int clampResult = integerClamp(min, max, value);
		printf("Integer clamp result: %d\n", clampResult);
	}

	//Testing floatClamp()
	{
		float value = 1000.f, min = 0.f, max = 100.f;
		float clampResult = floatClamp(min, max, value);
		printf("Float clamp result: %f\n", clampResult);
	}

	//Testing integerVariableSwap()
	{
		int firstValue = 1, secondValue = 2;
		printf("First value: %d\n", firstValue);
		printf("Second value: %d\n", secondValue);

		integerVariableSwap(&firstValue, &secondValue);

		printf("First value: %d\n", firstValue);
		printf("Second value: %d\n", secondValue);
	}

	//Testing floatVariableSwap()
	{
		float firstValue = 10.f, secondValue = 2.f;
		printf("First value: %f\n", firstValue);
		printf("Second value: %f\n", secondValue);

		floatVariableSwap(&firstValue, &secondValue);

		printf("First value: %f\n", firstValue);
		printf("Second value: %f\n", secondValue);
	}

	return 0;
}
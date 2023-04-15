#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <iostream>

//void function1() {
//	return 0;
//}

//void function2(string a, int b = 0, int c) {
//
//}

//string function3(float a) {
//	return a;
//}

bool nearlyEqual(float firstVar, float secondVar, float _precision) {
	if (firstVar - secondVar <= _precision)
		return true;
	else
		return false;
}

//Documentazione (stessa di unreal)
/*
* @brief
* Cosa fa la funzione
* @param nomeParametro cos'è
* 
* @return Cosa ritorna la funzione
*/

int checkPointOnBox(int X1, int X2, int Y1, int Y2, int Xp, int Yp) {
	if ((Xp >= X1 && Xp <= X2) && (Yp >= Y1 && Yp <= Y2))
		return 1;
	return 0;
}

int checkPointOnBox(float X1, float X2, float Y1, float Y2, float Xp=0, float Yp=0) {
	if ((Xp >= X1 && Xp <= X2) && (Yp >= Y1 && Yp <= Y2))
		return 1;
	return 0;
}

void homeworkFunction() {
	//Homeworks
	//Declare a few variables and perform basic math with them. Notice how implicit and explicit cast work.
	{
		int a = 5;
		int b = 10;
		int c = a + b;
		float d;
		//implicit casting
		c = a / b;
		//esplicit casting
		d = float(a + b);
		c = a & b;
		c = a | b;
		c = a - b;
		c = a * b;
		//shifting
		int firstVar = 1;
		int secondVar = firstVar << 2;
	}

	//Mix types in expressions, until the general rule for implicit casts is clear
	{
		int a = 1;
		float b = 1.f;
		int c = 010;
		char d = 'a';
		//int ris = a + b + c + d;
		int z = 0;
	}

	//Generate compiler and runtime errors and warnings through the use of basic math operations
	{
		//int a, b = 5;
		//int c = a + b;
		int d = INT_MAX;
		long long z = d + 10;
		if (z >= d)
			printf("True");
		else
			printf("False");
	}

	//Use casting properly to resolve warning and errors whenever possible.
	{
		int a = 1;
		float b = 1.f;
		int c = 010;
		char d = 'a';
		int ris = int(a + b + c + d);
		int z = 0;
	}

	//Function 
	{
		//watch function1 for return error on void function
		//watch function2 for default argument not at end of parameter list
		//watch function3 for returning a casting error
	}
}
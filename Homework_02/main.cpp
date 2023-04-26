#include "homework2.hpp"

int main() {
	
	//Shifting, sposta i bit a sinistra(<<) o destra(>>) di n bit;
	/*{
		int firstVar = 1;
		int secondVar = firstVar << 2;
	}*/

	//Function sizeof() ritorna la dimensione del tipo di dato o dell'array
	/*{
		int dimInt = sizeof(int);
		int dimChar = sizeof(char);
		int dimDouble = sizeof(double);
	}*/

	//C for 
	/*{
		int pointer[5];
		unsigned int dimPointer = sizeof(pointer);
		unsigned int dimArray = dimPointer / sizeof(int)
		for (unsigned int i = 0; i < dimArray; ++i) {
			//printf("i = %d\n", i);
		}
	}*/

	//If statement, they are equals
	/*{
		int condition=0, firstVar=0, secondVar=0;
		if (condition) {
			firstVar = secondVar;
		}
		else {
			firstVar = secondVar;
		}

		int c = condition ? firstVar = secondVar : firstVar = secondVar;
	}*/
	
	//float equality
	/*{
		float v1=0.f, v2=0.f, _prec=0.f;
		if (nearlyEqual(v1, v2, _prec)) {
			//statement
		}
	}*/
	
	//Calling convention
	{
		//[static] [inline] type_of_return_value[calling_convention] name(parameters)

	}

	if (checkPointOnBox(1, 5, 1, 5, 2, 2))
		printf("INTERN: YES\n");
	else
		printf("INTERN: NO\n");

	if (checkPointOnBox(1.f, 5.f, 1.f, 5.f, 5.f, 5.f))
		printf("INTERN: YES\n");
	else
		printf("INTERN: NO\n");

	return 0;
}
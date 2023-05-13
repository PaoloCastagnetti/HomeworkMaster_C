#include <iostream>
#include "library.h"
#include "testClass.h"
//Enum definition
enum Colors {
	White = 0,
	Red,
	Black,
	Color_Count
};

//Struct definition
struct myStruct {
	int intValue;
	char charValue;
};

//Union definition
union Color {
	unsigned int ARGB;
	char bytes[4];
};

int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}
	//Enum usage
	{
		/*Colors colors;
		colors = Colors::White;*/
	}
	//Struct usage
	{
		/*myStruct sstruct;
		sstruct.intValue = 0;
		sstruct.charValue = 's';*/
	}
	//Union usage
	{
		/*Color myColor;
		myColor.ARGB = 64;
		std::cout << "Color 64: " << myColor.bytes << std::endl;*/
	}
	//Linked list
	{
		/*int data = 5;
		Node* root = createLinkedList((void*)&data);*/
	}
	//State machine
	{
		/*std::cout << "Start LoopCycle" << std::endl;
		int wallet = 0;
		int (*stat) (int, int);
		while (true) {
			break;
		}
		std::cout << "End LoopCycle" << std::endl;*/
	}

	//Class usage
	{
		MyClass instance = MyClass();
		std::cout << "Private variable: " << instance.getPrivateVariable() << std::endl;
		instance.setPrivateVariable(10);
		std::cout << "Private variable: " << instance.getPrivateVariable() << std::endl;
	}
	return 0;
}
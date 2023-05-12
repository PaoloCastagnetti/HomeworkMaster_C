#include <iostream>
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
	Colors colors;
	colors = Colors::White;

	//Struct usage
	myStruct sstruct;
	sstruct.intValue = 0;
	sstruct.charValue = 's';

	//Union usage
	Color myColor;
	myColor.ARGB = 64;
	//std::cout << "Color 64: " << myColor.bytes << std::endl;
	
	return 0;
}
#include "testClass.h"
MyClass::MyClass() {
	privateVariable = 0;
	publicVariable = 0;
}

MyClass::MyClass(int value) {
	privateVariable = value;
	publicVariable = value;
}

int MyClass::getPrivateVariable() {
	return  privateVariable;
}

void MyClass::setPrivateVariable(int value) {
	privateVariable = value;
}
#include "testClass.h"
//Class functions definition
MyClass::MyClass() {
	privateVariable = 0;
	publicVariable = 0;
}
//Initializer list
//same ads privateVariable=value;
MyClass::MyClass(int value) : privateVariable(value), publicVariable(value){}
MyClass::MyClass(const MyClass& clone): privateVariable(clone.privateVariable) {
	this->publicVariable = clone.publicVariable;
}
MyClass::~MyClass() {
	privateVariable = 0;
	publicVariable = 0;
}
int MyClass::getPrivateVariable() const {
	return  privateVariable;
}
void MyClass::setPrivateVariable(int value){
	privateVariable = value;
}
#pragma once
class MyClass
{
private:
	int privateVariable;

public:
	int publicVariable;
	int getPrivateVariable();
	void setPrivateVariable(int value);
	MyClass();
	MyClass(int value);
};

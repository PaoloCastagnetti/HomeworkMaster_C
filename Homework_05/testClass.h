#pragma once
class MyClass
{
public:
	int publicVariable;
	/*
	* @brief getPrivateVariable return the value of the privateVariable
	* @return the value of the privateVariable
	*/
	int getPrivateVariable() const;
	/*
	* @brief setPrivateVariable set the value of the privateVariable
	* @param the value to assign tp the privateVariable
	*/
	void setPrivateVariable(int value);
	/*
	* @brief MyClass constructor
	* @return an instance of the class
	*/
	MyClass();
	/*
	* @brief MyClass constructor
	* @param value to set all the variables in the class
	* @return an instance of the class
	*/
	MyClass(int value);
	/*
	* @brief MyClass copy constructor
	* @param value to set all the variables in the class
	* @return an instance of the class
	*/
	MyClass(const MyClass& clone);
	/*
	* @brief MyClass copy deconstructor
	*/
	~MyClass();

private:
	int privateVariable;
};

/*
* This file is an example of a function pointer used into a button
*/

//int GenericFunction(int a, int b);
//
//int OnClickDetected() {
//	int a = 42;
//	int b = 43;
//	return GenericFunction(a, b);
//}
//
//int main_test() {
//	//button->AddDunctionToButton(&OnClickDetected);
//	return 0;
//}
//
////...Inside the button...
//void(*OnClick)() = 0L;
//
//void eventClick() {
//	OnClick();
//}
//
//void AddFunctionToButton(void (*funptr)()) {
//	OnClick = funptr;
//}
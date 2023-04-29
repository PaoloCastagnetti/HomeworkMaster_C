#include <stdlib.h>
int main() {

	//measure unit: byte 
	
	//C-style dynamic allocation
	//void* malloc(size_t sz);
	int* ptr = (int*)malloc(sizeof(int));
	//void* calloc(size_t sz);
	int* zptr = (int*)calloc(1, sizeof(int));
	//void free(void* ptr);
	free(ptr);
	free(zptr);

	//C++ style dynamic allocation
	//void* operator new(size_t sz); allocates sz bytes
	int* ptr = new int;
	int* fptr = new int(5);
	//void* operator new[](size_t sz); allocates sz bytes
	int* aptr = new int[5];
	//void operator delete(void* ptr); frees a memory block
	delete ptr;
	delete fptr;
	//void operator delete[](void* ptr); frees a memory block
	delete[] aptr;

	return 0;
}
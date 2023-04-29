#include <stdlib.h>
int main() {

	//measure unit: byte 
	//C-style dynamic allocation
	//void* malloc(size_t sz);
	int* ptr = (int*)malloc(sizeof(int));
	//void* calloc(size_t sz);
	int* zptr = (int*)calloc(sizeof(int));
	//void free(void* ptr);
	free(ptr);
	free(zptr);


	return 0;
}
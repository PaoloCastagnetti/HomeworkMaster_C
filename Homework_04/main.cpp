int add(int op1, int op2) {
	return 0;
}

int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}

	//How to create a function pointer
	{
		int (*pfnAdd)(int, int) = &add;
		int result = pfnAdd(2, 3);
	}
	
	return 0;
}
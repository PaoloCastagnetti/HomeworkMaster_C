int add(int op1, int op2) {
	return 0;
}
int main(int argc, char** argv) {
	if (argc != 1) {
		return 0;
	}

	int(*pfnAdd(int, int)) = &add;
	
	return 0;
}
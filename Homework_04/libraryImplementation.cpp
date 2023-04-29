#include <stdio.h>
int bellNumberFunctionPrinter(int bellNumber) {
	int** matrix = new int*[bellNumber];
	int finalBellNumber = 0;

	for (int index = 0; index < bellNumber; ++index) {
		matrix[index] = new int[index+1];
	}

	matrix[0][0] = 1;
	printf("%d\n", matrix[0][0]);

	for (int index_i = 1; index_i < bellNumber; ++index_i) {

		matrix[index_i][0] = matrix[index_i-1][index_i-1];
		printf("%d ", matrix[index_i][0]);

		for (int index_j = 1; index_j <= index_i; ++index_j) {
			matrix[index_i][index_j] = matrix[index_i-1][index_j-1] + matrix[index_i][index_j-1];
			printf("%d ",matrix[index_i][index_j]);
			finalBellNumber = matrix[index_i][index_j];
		}
		printf("\n");
	}
	

	for (int index = 0; index < bellNumber; ++index) {
		delete matrix[index];
	}
	delete[] matrix;

	return finalBellNumber;
}
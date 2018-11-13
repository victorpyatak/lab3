#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int rows, cols, matrix[5][5];


void rowsNcols() {
	cout << "Enter number of rows :";
	cin >> rows;
	cout << "Enter number of cols :";
	cin >> cols;
}

void checkMatrix() {
	while (rows != 5 || cols != 5) {
		cout << "\nWARNING!" << endl << "There must be 5 rows and 5 cols" << endl << endl;
		rowsNcols();
	}
}

void enterMatrixElements() {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << "Enter matrix elements " << i + 1 << "-" << j + 1 << " :";
			cin >> matrix[i][j];
		}
	}
}

void diag() {
	cout << endl << "Diagonal elements : " << endl;
	for (int i = 0; i < rows; i++) {
		cout << setw(i*5) << matrix[i][i] << endl;
	}
	cout << endl;
}
 
void geometricalAverage() {
	int matrixRows, matrixCols;
	int multiplication;
	float result = 1.0,
		  sum = 0.0,
		  powerCounter = 0.0;

	for (i = 0; matrixRows < rows; matrixRows++) {
		for (j = 0; matrixCols < cols; j++) {
			if (matrixCols > matrixRows) {
				multiplication = matrix[matrixRows][matrixCols];
				result *= multiplication;
				powerCounter++;
			}
			else if ((matrixCols == matrixRows) && (result != 1.0)) {
				cout << "Average geometrical of row " << matrixRows << " is :";
				cout << pow(result, 1 / counter) << endl << endl;
				sum += pow(result, 1 / counter);
				result = 1.0;
				powerCounter = 0.0;
			}

		}

	}
	cout << "The sum is :" << sum << endl << endl;
}

void sortMatrixColumns() {
	int i, j, temp, Void;
	cout << "Sorted matrix :" << endl;
	for (j = 0; j < cols; j++) {
		for (i = 1; i < rows; i++) {
			temp = matrix[i][j];
			Void = i - 1;
			while ((temp < matrix[Void][j]) && (Void >= 0)) {
				matrix[Void + 1][j] = matrix[Void][j];
				Void = Void - 1;
			}
		matrix[Void+1][j] = temp;

		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			cout << setw(5) << matrix[i][j];
		}
		cout << endl;
	}
}

int main() {
	rowsNcols();
	//checkMatrix();
	enterMatrixElements();
	//diag();
	geometricalAverage();
	sortMatrixColumns();
	return 0;
}

#include <iostream>
using namespace std;

//Задание 1.
void func1() {
	int M, N, K = 0;
	cout << "Введите размер 1-го массива: "; cin >> M;
	cout << "Введите размер 2-го массива: "; cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	int* C = new int[K];
	bool f;
	cout << "Первый массив\n";
	for (int i = 0; i < M; i++) {
		A[i] = rand() % 10 + 1;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Второй массив\n";
	for (int i = 0; i < N; i++) {
		B[i] = rand() % 10 + 1;
		cout << B[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (B[j] != A[i]) f = true;
			else {
				f = false;
				break;
			}
		}
		if (f == true) {
			C[K] = A[i]; K++;
		}
	}
	cout << endl;
	cout << "Третий массив\n";
	for (int i = 0; i < K; i++) {
		cout << C[i] << " ";
	}
	cout << endl;
}
//Задание 2.
void func2() {
	int M, N, K = 0;
	cout << "Введите размер 1-го массива: "; cin >> M;
	cout << "Введите размер 2-го массива: "; cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	int* C = new int[K];
	bool f;
	cout << "Первый массив\n";
	for (int i = 0; i < M; i++) {
		A[i] = rand() % 10 + 1;
		cout << A[i] << " ";
	}
	cout << endl;
	cout << "Второй массив\n";
	for (int i = 0; i < N; i++) {
		B[i] = rand() % 10 + 1;
		cout << B[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (B[j] == A[i]) {
				f = false;
				break;
			}
			else f = true;
		}
		if (f == true) {
			C[K] = A[i]; K++;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (B[i] == A[j]) {
				f = false;
				break;
			}
			else f = true;
		}
		if (f == true) {
			C[K] = B[i]; K++;
		}
	}
	cout << endl;
	cout << "Третий массив\n";
	for (int i = 0; i < K; i++) {
		cout << C[i] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	//Задание 1. 
	//Даны два массива : А[M] и B[N](M и N вводятся
	//с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
	//элементы массива A, которые не включаются в массив B,
	//без повторений.
	cout << "Home task #14.1.1\n\n";
	func1();
	system("pause");
	system("cls");

	//Задание 2. Даны два массива : А[M] и B[N](M и N вводятся
	//с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
	//элементы массивов A и B, которые не являются общими
	//для них, без повторений.
	cout << "Home task #14.1.2\n\n";
	func2();
	system("pause");
	system("cls");
}
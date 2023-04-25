#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include "Functions.h"

// Кодировка UTF-8

// Заполнение массива
template <typename T>
void fill(T arr[], const int s, int left, int right) {
	srand(time(NULL));
	for (int i{}; i < s; i++)
		arr[i] = rand() % (right - left) + left;
}

// Вывод
template <typename T>
void show(T arr[], const int s) {
	std::cout << "[";
	for (int i{}; i < s; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n,m,s2_3;

	// Задача 1. Выделение памяти под двумерный массив
	/*
	std::cout << "Задача 1.\nВведите количество рядов -> ";
	std::cin >> n;
	std::cout << "Введите количество столбцов -> ";
	std::cin >> m;
	int** mx;
	mx_memory(mx, n, m);

	std::cout << "Сгенерированный массив:\n";
	for (int i{}; i < n; i++) {
		for (int j{}; j < m; j++)
			std::cout << mx[i][j] << "\t";
		std::cout << "\n";
	}

	clear_mx_memory(mx, n);
	std::cout << std::endl;
	*/

	// Задача 2. Объединение массивов
	/*
	std::cout << "Задача 2.\nМассив №1:\n";
	const int s2_1 = 5;
	int arr2_1[s2_1];
	fill(arr2_1, s2_1, -10, 15);
	show(arr2_1, s2_1);

	std::cout << "Массив №2:\n";
	const int s2_2 = 7;
	int arr2_2[s2_2];
	fill(arr2_2, s2_2, -15, 5);
	show(arr2_2, s2_2);

	std::cout << "Итоговый массив:\n";
	int* arr2_3 = pos_mem(arr2_1, s2_1, arr2_2, s2_2, s2_3);
	show(arr2_3, s2_3);
	delete[] arr2_3;

	std::cout << std::endl;
	*/

	// Задача 3. Название числа

	std::cout << "Задача 3.\nВведите двузначное число -> ";
	std::cin >> n;
	if (number_name(n, "number.txt"))
		std::cout << "Число записано в файл.\n\n";
	else
		std::cout << "Ошибка выполнения функции.\n\n";


	return 0;
}
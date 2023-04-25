#pragma once
#ifndef _FUNCTIONS_H_
#define	_FUNCTIONS_H_
#include <iostream>
#include <string>

// UTF-8

// Выделение памяти под двумерный динамический массив
template <typename T>
void mx_memory(T**& pointer, int rows, int cols) {
	pointer = new T* [rows];
	for (int i{}; i < rows; i++)
		pointer[i] = new T[cols]{};
}

// Освобождение динамической памяти 
template <typename T>
void clear_mx_memory(T**& pointer, int rows) {
	for (int i{}; i < rows; i++)
		delete[]pointer[i];
	delete[]pointer;
	pointer = nullptr;
}

// Возврат местоположения массива, состоящего из олоожительных элементов, переданных массивов
template <typename T>
T* pos_mem(T arr1[], const int s1, T arr2[], const int s2, int& var) {
	T* tmp = new T[s1 + s2];
	var = 0;
	for (int i{}; i < s1; i++)
		if (arr1[i] > 0)
			tmp[var++] = arr1[i];
	for (int i{}; i < s2; i++)
		if (arr2[i] > 0)
			tmp[var++] = arr2[i];

	T* result = new T[var];
	for (int i{}; i < var; i++)
		result[i] = tmp[i];

	delete[] tmp;
	return result;
}

// Запись названия числа в файл
bool number_name(int num, std::string file_path);













#endif // _FUNCTIONS_H_
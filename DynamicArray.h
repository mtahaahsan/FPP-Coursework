#pragma once
#ifndef STOCK_H
#define STOCK_H
#include <string>

template <class T>
class DynamicArray {
	int size;
	int count;
	T* dArray;
	public:
		int sizeOfArray();
		int numOfElements();
		void printAllEments();
		void shiftElements();
		void resizeArray();
		void addElements(T element);
		DynamicArray(int size);
		T operator[] (int i);
		virtual ~DynamicArray();
};
#endif
#include "DynamicArray.h" // header in local directory
#include <iostream> // header in standard library
#include <string>
//template <class T> class DynamicArray;

template <class T>
DynamicArray<T>::DynamicArray(int arrSize) {
	size = arrSize;
	count = 0;
	dArray = new T[size];
}

template <class T>
void DynamicArray<T>::resizeArray() {
	size = size + 10;
	T* temp = new T[size];
	for (int i = 0; i < count; i++)
	{
		temp[i] = dArray[i];
	}
	dArray = temp;

}

template <class T>
void DynamicArray<T>::shiftElements() {
	for (int i = count; i >=0; i--) {
		dArray[i + 1] = dArray[i];
	}
}

template <class T>
void DynamicArray<T>::addElements(T num) {
	if (sizeOfArray() == count+1) {
		resizeArray();
	}
	shiftElements();
	dArray[0] = num;
	count++;
}

template <class T>
int DynamicArray<T>::sizeOfArray() {
	return size;
}

template <class T>
int DynamicArray<T>::numOfElements() {
	return count;
}

template <class T>
void DynamicArray<T>::printAllEments() {
	for (int i = 0; i < count; i++)
	{
		std::cout << std::to_string(dArray[i]) << std::endl;
	}

}

template <class T>
DynamicArray<T>::~DynamicArray(void) {
	std::cout << "Object has been destroyed" << std::endl;
}

template <class T>
T DynamicArray<T>::operator[] (int i) {
	return dArray[i];
}

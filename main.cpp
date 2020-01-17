#include <iostream>
#include "DynamicArray.h"
#include "DynamicArray.cpp"
#include "Person.h"
#include <string>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	DynamicArray<int> intArray(5);
	int sizeOfIntArray = intArray.sizeOfArray();
	for (int i = 0; i < sizeOfIntArray; i++)
	{
		intArray.addElements((rand() % 100) - 1);
	}

	intArray.addElements(14);
	intArray.addElements(11);
	intArray.addElements(21);
	intArray.addElements(12);
	intArray.addElements(23);

	DynamicArray<double> doubleArray(5);
	int sizeOfDoubleArray = doubleArray.sizeOfArray();
	for (int i = 0; i < sizeOfDoubleArray; i++) {
		double randomValue = ((double)rand());
		doubleArray.addElements(fmod(randomValue, 100) / 100);
	}
	 
	doubleArray.addElements(0.14);
	doubleArray.addElements(12);
	doubleArray.addElements(0.21);
	doubleArray.addElements(0.12);
	doubleArray.addElements(0.23345678987654);
	intArray.printAllEments();
	doubleArray.printAllEments();

	DynamicArray<Person> personArray(5);
	int sizeOfPersonArray = personArray.sizeOfArray();
	Person person1 = Person("Taha", 19, 65);
	Person person2 = Person("Hannah", 24, 190);
	Person person3 = Person("Omer", 19, 93);
	Person normArr[3] = { person1, person2, person3 };
	int i = 0;
	while (i < sizeOfPersonArray) {
		personArray.addElements(normArr[i % 3]);
		i++;
	}
	personArray.addElements(Person("Shawn", 19, 78));
	personArray.addElements(Person("Sania", 20, 38));
	personArray.addElements(Person("Duaa", 21, 45));
	personArray.addElements(Person("Yahya", 19, 58));
	personArray.addElements(Person("Talal", 19, 98));
	for (int i = 0; i < personArray.numOfElements(); i++)
	{
		cout << personArray[i].toString() << endl;
	}
}
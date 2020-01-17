#include "Person.h" // header in local directory
//#include <iostream> // header in standard library
#include <string>


	Person::Person(string name, int age, int weight)
	{
		this->name = name;
		this->age = age;
		this->weight = weight;
	}

	Person::~Person()
	{

	}

	string Person::toString()
	{
		return "Name: " + this->name + " Age: " + std::to_string(this->age) + " Your weight: " + std::to_string(weight);
	}
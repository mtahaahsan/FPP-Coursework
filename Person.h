#pragma once
#ifndef STOCK
#define STOCK
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
	int weight;

public:
	Person(string name = "Enter name", int age= 0, int weight = 9999);
	~Person();
	string toString();
};

#endif
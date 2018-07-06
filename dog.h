#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using std::string;
using std::cin;
using std::cout;
using std::endl;

class Dog{
	friend class Owner;
	public:
		Dog() : name_("none"), age_(0) {};
		Dog(const string & name, int & age) : name_(name), age_(age) {};

	private:
		string name_;
		int age_;
};

#endif 

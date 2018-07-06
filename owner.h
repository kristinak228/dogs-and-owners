#ifndef OWNER_H
#define OWNER_H

#include "dog.h"

#include <iostream>
#include <string>
#include <stdlib.h>
#include <map>

using std::string;
using std::endl;
using std::map;
using std::cout;

class Owner{
	public:
		Owner() : name_("none"), age_(0) {};
		Owner(const string & name, int & age) : name_(name), age_(age) {};
		void addDog(const string & name, int & age);
		void printList(const Owner & o);
		void set_name(string new_name) { d.name_ = new_name; }
		void set_age(int new_age) { d.age_ = new_age; }

	private:
		string name_;
		int age_;
		map<string, Dog> dogs;
		Dog d;
};
#endif

void Owner::addDog(const string & name, int & age){
	set_name(name);
	set_age(age);
	dogs[name] = Dog(name, age);
}

void Owner::printList(const Owner & o){
	if(dogs.size() >= 2) cout << o.name_ << " has " << dogs.size() << " dogs\n";
	else if(dogs.size() == 1) cout << o.name_ << " has 1 dog\n";
	else cout << o.name_ << " has 0 dogs\n";
	for(auto x: dogs){
		cout << x.second.name_ << " " << x.second.age_ << endl;
	}
}





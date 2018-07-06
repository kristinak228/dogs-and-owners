#include "owner.h"
#include "dog.h"

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::map;

int main(){

	int hAge = 20;
	Owner owner1("Krsitina", hAge);
	int dAge = 4;	
	owner1.addDog("Lucy", dAge);
	dAge = 7;
	owner1.addDog("Buddy", dAge);
	dAge = 5;
	owner1.addDog("Rex", dAge);

	owner1.printList(owner1);

	hAge = 22;
	Owner owner2("Thomas", hAge);
	dAge = 6;
	owner2.addDog("Sparky", dAge);

	owner2.printList(owner2);

	hAge = 73;
	Owner owner3("Kiki", hAge);
	owner3.printList(owner3);


	return 0;
}

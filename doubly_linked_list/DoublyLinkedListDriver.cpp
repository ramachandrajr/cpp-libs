//============================================================================
// Name        : DoublyLinkedListDriver.cpp
// Author      : Ramachandra jr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Dlist.cpp"


int main() {
	Dlist<int> mylist1{};
	mylist1.add(10);
	mylist1.add(30);
	mylist1.add(40);
	mylist1.iterate();
	std::cout << "====" << std::endl;

	mylist1.add(1, 20);
	mylist1.add_front(5);
	mylist1.update(1, 15);
	mylist1.iterate();
	std::cout << "====" << std::endl;

	mylist1.pop_front();
	mylist1.pop_back();
	mylist1.iterate();
	return 0;
}

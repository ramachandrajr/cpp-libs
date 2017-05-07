/*
 * Dlist.cpp

 *
 *  Created on: 12-Apr-2017
 *      Author: Rj
 */
#include "Dlist.h"

/**
 * Constructor function
 * This function Initializes head and last to NULL.
 */
template <typename T>
Dlist<T>::Dlist() : head{ NULL }, last{ NULL }
{};

/**
 * Destructor function
 * This function Initializes head and last to NULL.
 */
template <typename T>
Dlist<T>::~Dlist()
{};


/**
 * Adds a val to the list.
 * @param { T } val - val of the object to add.
 */
template <typename T>
void Dlist<T>::add(T val) {
	// If it is the first node
	// Just normal initializing does not produce new objects every time the method is
	// called.
	Node<T> *nd1 = new Node<T>;
	nd1->next = NULL;
	if (head == NULL) {
		nd1->prev = NULL;
		head = nd1;
	}
	else {
		nd1->prev = last;
		last->next = nd1;
	}
	nd1->val = val;
	last = nd1;
};

/**
 * @Overload
 * Add given object at a given index.
 * @param { int } indx - Index to append at.
 * @param { T } val - Object to append.
 */
template <typename T>
void Dlist<T>::add(int indx, T val) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			Node<T> *nd1 = new Node<T>;
			// Copy Previous one's.
			nd1->prev = temp->prev;
			nd1->next = temp;
			nd1->val = val;
			// Setting nd1 on the left and right side blocks.
			temp->prev->next = nd1;
			temp->prev = nd1;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
}


/**
 * Iterates over the list from start to end and prints to the screen.
 */
template <typename T>
void Dlist<T>::iterate() {
	if (head == NULL) {
		list_un_inited err;
		throw err;
	}
	// Iterate through the list until you hit a NULL.
	Node<T> *temp{ head };
	do {
		std::cout << temp->val << std::endl;
		temp = temp->next;
	} while(temp != NULL);
};

/**
 * Iterates over the list from end to start and prints to the screen.
 */
template <typename T>
void Dlist<T>::iterate_reverse() {
	if (last == NULL) {
		list_un_inited err;
		throw err;
	}
	// Iterate until you hit NULL.
	Node<T> *temp{ last };
	do {
		std::cout << temp->val << std::endl;
		temp = temp->prev;
	} while(temp != NULL);
};

/**
 * Returns the object at the given index.
 * @param { int } indx - Index of the object to get.
 */
template <typename T>
T Dlist<T>::at(int indx) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			return temp->val;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
	out_of_bounds_index err;
	throw err;
};

/**
 * Adds an object to the start of an array.
 * @param { T } val - Object to add.
 */
template <typename T>
void Dlist<T>::add_front(T val) {
	// Create a new node.
	Node<T> *nd1 = new Node<T>;
	// Set its prev to NULL.
	nd1->prev = NULL;
	nd1->next = head;
	nd1->val = val;
	// Change others
	head->prev = nd1;
	head = nd1;
};

/**
 * Adds an object to the start of an array.
 * @param { int } indx - Index of object to change.
 * @param { T } val - Object to change index to.
 */
template <typename T>
void Dlist<T>::update(int indx, T val) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			temp->val = val;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
};

/**
 * Deletes an object at given index
 * @param { int } indx - Index of object to remove.
 */
template <typename T>
void Dlist<T>::remove(int indx) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
};

/**
 * Deletes the first element of the array.
 */
template <typename T>
void Dlist<T>::pop_front() {
	head->next->prev = NULL;
	head = head->next;
};

/**
 * Deletes the last element of an array.
 */
template <typename T>
void Dlist<T>::pop_back() {
	last->prev->next = NULL;
	last = last->prev;
};

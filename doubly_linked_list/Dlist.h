/*
 * Dlist.h
 *
 *  Created on: 12-Apr-2017
 *      Author: Rj
 */

#ifndef DLIST_H_
#define DLIST_H_

#include <iostream>
#include "RjExceptions.cpp"

template <typename T>
struct Node {
	Node<T> *prev;
	Node<T> *next;
	T val;
};

/**
 * Creates a doubly linked list with a **head** and a **last**. **head** will be
 * used to store the address of the first node ever created and the latest will
 * be stored in the last.
 */
template <typename T>
class Dlist {
	// This will store the first node's address.
	Node<T> *head;
	// This is going to hold the latest node's address.
	Node<T> *last;

public:
	// CONSTRUCTOR
	Dlist();
	// DESTRUCTOR
	~Dlist();
	// Adds a val to list.
	void add(T val);
	// Add object at given index.
	void add(int indx, T val);
	// Add to start.
	void add_front(T val);
	// Iterate.
	void iterate();
	// Reverse iterate.
	void iterate_reverse();
	// Get the element at index.
	T at(int indx);
	// Add object at given index.
	void update(int indx, T val);
	// Delete
	void remove(int indx);
	void pop_front();
	void pop_back();
};


#endif /* DLIST_H_ */

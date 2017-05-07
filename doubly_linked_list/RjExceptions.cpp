/*
 * RjExceptions.cpp
 *
 *  Created on: 13-Apr-2017
 *      Author: Rj
 */
#include <exception>

/**
 * Array index goes out of bounds! Then throw this error.
 */
class out_of_bounds_index : public std::exception {
public:
	const char* what() const throw() {
		return "The index you provided was out of bounds!";
	}
};

/**
 * Use when methods are called on empty lists.
 */
class list_un_inited : public std::exception {
public:
	const char* what() const throw() {
		return "The index you provided was out of bounds!";
	}
};


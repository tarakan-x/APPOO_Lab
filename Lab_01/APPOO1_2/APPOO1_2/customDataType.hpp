#pragma once
#include <Windows.h>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <vector>
#include "Phone.hpp"
class customDataType
{
public:
	void setList(std::list<Phone> &obj, int n);
	bool isEmpty(std::list<Phone> &obj);
	long getSize(std::list<Phone> &obj);
	void printListWIterator(std::list<Phone> &obj);
	void printListIterator(std::list<Phone> &obj);
	void removeFromList(std::list<Phone> &obj);
	void removeNFromList(std::list<Phone> &obj);
	void appendBackList(std::list<Phone> &obj1, std::list<Phone> &obj2);
	void addInList(std::list<Phone> &obj);
	Phone getFront(std::list<Phone> &obj);
	Phone getBack(std::list<Phone> &obj);
	void eraseElements(std::list<Phone>& l, int from, int to);
	void insertElements(std::list<Phone>& l, int from, int to);
	void deleteAndReplace(std::list<Phone>& l);
};
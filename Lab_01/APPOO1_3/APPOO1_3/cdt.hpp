#pragma once

#include <iostream>
#include <list>
#include <deque>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <functional>

#include "Phone.hpp"

class CDT
{
public:
	void setList(std::list<Phone> &l, int n);
	void printList(std::list<Phone> &l);
	void printDeque(std::deque<Phone> &d);
	void sortDescList(std::list<Phone> &l);
	void sortAscDeque(std::deque<Phone> &d);
	void sortAscList(std::list<Phone> &l);
	void combineContainers(std::list<Phone> &l, std::deque<Phone> &d, std::list<Phone> &result);
	void countIf(std::list<Phone> &l);
	void findIf(std::list<Phone> &l);
	void moveIf(std::list<Phone> &l, std::deque<Phone> &d);
	void clearList(std::list<Phone> &l);

	template <typename T>
	void move_if(std::list<Phone>& list, std::deque<Phone>& deque, T pred);

	template <typename sourceContainer, typename outputContainer>
	void insertToContainer(sourceContainer &s, outputContainer &o);

	template <typename iterator, typename T>
	void find_if(iterator a, iterator b, T pred);
};
#include <iostream>
#include <list>
#include <random>
#include <algorithm>
#include <iterator>
#include "longDataType.hpp"

void longDataType::setList(std::list<long> &obj, int n)
{
	for (int i = 0; i < n; i++)
	{
		long number;
		std::cin >> number;
		obj.push_back(number);
	}
}

long longDataType::getBack(std::list<long> &obj)
{
	return obj.back();
}

long longDataType::getFront(std::list<long> &obj)
{
	return obj.front();
}

bool longDataType::isEmpty(std::list<long> &obj)
{
	return (obj.empty()) ? true : false;
}

void longDataType::printListWIterator(std::list<long> &obj)
{
	if (!isEmpty(obj))
	{
		for (const auto &i : obj)
		{
			std::cout << i << " ";
		}
	}
}

void longDataType::printListIterator(std::list<long> &obj)
{
	for (std::list<long>::iterator it = obj.begin(); it != obj.end(); it++)
	{
		std::cout << *it << " ";
	}
}

void longDataType::addInList(std::list<long> &obj, long number)
{
	obj.push_back(number);
}

void longDataType::setRandomList(std::list<long> &obj, int size)
{
	std::random_device rd;
	std::mt19937_64 range(rd());
	std::uniform_int_distribution<long> uniformDistribution(1, 100);
	std::generate_n(std::back_inserter(obj), size, [&]() {return uniformDistribution(range); });
}

void longDataType::removeFromList(std::list<long> &obj)
{
	long valueToBeReplaced, newValue;
	std::cin >> valueToBeReplaced >> newValue;
	std::replace(obj.begin(), obj.end(), valueToBeReplaced, newValue);
}

void longDataType::removeNFromList(std::list<long> &obj)
{
	auto begin = 0, n = 0;
	std::cin >> begin >> n;
	auto rangeBegin = obj.begin();
	auto rangeEnd = obj.begin();
	std::advance(rangeBegin, begin);
	std::advance(rangeEnd, n);
	obj.erase(rangeBegin, rangeEnd);
}

void longDataType::appendListBack(std::list<long> &obj1, std::list<long> &obj2)
{
	obj1.insert(obj1.end(), obj2.begin(), obj2.end());
}

#include "customDataType.hpp"


void customDataType::setList(std::list<Phone> &obj, int n)
{
	for (int i = 0; i < n; i++)
	{
		Phone p;
		std::cin >> p;
		obj.push_back(p);
	}
}

bool customDataType::isEmpty(std::list<Phone> &obj)
{
	return (obj.empty()) ? true : false;
}

long customDataType::getSize(std::list<Phone> &obj)
{
	return obj.size();
}

void customDataType::printListWIterator(std::list<Phone> &obj)
{
	std::cout << "\nPrint List:\n";
	for (auto &i : obj)
	{
		std::cout << i << " ";
	}
}

void customDataType::printListIterator(std::list<Phone> &obj)
{
	std::cout << "\nPrint List:\n";
	for (std::list<Phone>::iterator it = obj.begin(); it != obj.end(); it++)
	{
		std::cout << *it << "\n";
	}
}

void customDataType::removeFromList(std::list<Phone> &obj)
{
	std::vector<Phone> temp;
	//copyTo(obj, temp);
}

void customDataType::removeNFromList(std::list<Phone> &obj)
{
	auto begin = 0, n = 0;
	std::cin >> begin >> n;
	auto rangeBegin = obj.begin();
	auto rangeEnd = obj.begin();
	std::advance(rangeBegin, begin);
	std::advance(rangeEnd, n);
	obj.erase(rangeBegin, rangeEnd);
}

void customDataType::appendBackList(std::list<Phone> &obj1, std::list<Phone> &obj2)
{
	obj1.insert(obj1.end(), obj2.begin(), obj2.end());
}

void customDataType::addInList(std::list<Phone> &obj)
{
	Phone p;
	std::cin >> p;
	obj.push_back(p);
}

Phone customDataType::getFront(std::list<Phone> &obj)
{
	return obj.front();
}

Phone customDataType::getBack(std::list<Phone> &obj)
{
	return obj.back();
}

void customDataType::eraseElements(std::list<Phone> &l, int from, int to)
{
	std::list<Phone>::iterator localFrom = l.begin();
	std::list<Phone>::iterator localTo = l.begin();

	for (int i = 0; i < from - 1; i++)
		localFrom++;

	for (int i = 0; i < to; i++)
		localTo++;

	l.erase(localFrom, localTo);
}

void customDataType::insertElements(std::list<Phone> &l, int from, int to)
{
	std::list<Phone> temp;
	int nElements = to - from + 1;
	std::cout << "\nEnter " << nElements << " elements:";
	this->setList(temp, nElements);
	auto tmpIterFrom = temp.begin();
	auto tmpIterTo = tmpIterFrom;

	for (int i = 0; i < nElements; i++)
		tmpIterTo++;

	auto listParamIterator = l.begin();
	for (int i = 0; i < from - 1; i++)
		listParamIterator++;

	l.insert(listParamIterator, tmpIterFrom, tmpIterTo);
}

void customDataType::deleteAndReplace(std::list<Phone> &l)
{
	int from, to;
	std::cout << "\n From|To: ";
	std::cin >> from >> to;
	if (from < 1 || to > l.size())
	{
		std::cout << "\n Wrong Indexes:";
		return;
	}
	this->eraseElements(l, from, to);
	this->printListIterator(l);
	this->insertElements(l, from, to);
}
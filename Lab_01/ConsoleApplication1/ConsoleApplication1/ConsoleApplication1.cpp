// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



#include <list>
#include "longDataType.hpp"

int main()
{
	longDataType w;
	std::list<long> a;
	std::list<long> b;
	std::cout << "1. Input the size of container: ";
	long size; std::cin >> size;
	w.setList(a, size);
	std::cout << "\n2. Print container without iterators:\n";
	w.printListWIterator(a);
	std::cout << "\n";
	std::cout << "\n3. Remove from container a specified number and replace it: \n";
	w.removeFromList(a);
	std::cout << "\n4. Print container with iterators:\n";
	w.printListIterator(a);
	std::cout << "\n";
	std::cout << "\n5. Set the second container:\n";
	w.setRandomList(b, size);
	w.printListIterator(b);
	std::cout << "\n";
	std::cout << "\n6. Remove from container a set of numbers and append the second container:\n";
	w.removeNFromList(a);
	w.printListIterator(a);
	w.appendListBack(a, b);
	std::cout << "\n7. Print both containers:\n";
	std::cout << "\n";
	w.printListIterator(a);
	std::cout << "\n";
	w.printListIterator(b);
	std::cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}


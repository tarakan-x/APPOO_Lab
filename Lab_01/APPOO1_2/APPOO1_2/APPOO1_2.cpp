#include <iostream>
#include <list>
#include <Windows.h>
#include "customDataType.hpp"
#include "Phone.hpp"


#include "values.hpp"

int main()
{
	customDataType dt;
	std::list<Phone> a, b;
	std::cout << "1. Input the number of elements to be inserted in the list:\n";
	int n; std::cin >> n;
	dt.setList(a, n);
	std::cout << "2. Print List without iterators: \n";
	dt.printListWIterator(a);
	std::cout << "\n";
	std::cout << "3. Remove from list and Replace: \n";
	dt.deleteAndReplace(a);
	std::cout << "\n";
	std::cout << "4. Print List with iterators: \n";
	dt.printListIterator(a);
	std::cout << "\n";
	std::cout << "5. Set the second container: \n";
	dt.setList(b, n);
	dt.printListIterator(b);
	std::cout << "\n";
	std::cout << "6. Remove a set of registration from first container: \n";
	dt.removeNFromList(a);
	dt.printListIterator(a);
	dt.appendBackList(a, b);
	std::cout << "\n";
	std::cout << "7. Print both containers: \n";
	std::cout << "\n";
	dt.printListIterator(a);
	std::cout << "\n";
	dt.printListIterator(b);
	std::cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}
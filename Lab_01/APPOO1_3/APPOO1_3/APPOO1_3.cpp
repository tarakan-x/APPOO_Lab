#include <iostream>
#include <list>
#include <deque>

#include "Phone.hpp"
#include "cdt.hpp"
//1. Create container with custom data - > List
//2. Sort it descendent
//3. Print the container
//4. Find an element in container using algorithm
//5. And place the elements found in the second container - > deque
//6. Show the second container(Print)
//7. Sort both asscendent
//8. Print both
//9. Combine them in a new container
//10. Print third container
//11. count_if -> print how many elements satisfy the condition in the third container
//12. find_if


int main()
{
	CDT cdt;
	std::list<Phone> list, result;
	std::deque<Phone> deque;
	std::cout << "[1] Input the size of the List: ";
	int size; std::cin >> size;
	cdt.setList(list, size);
	cdt.sortDescList(list);
	std::cout << "\n[2,3] Sort and Print the List: \n";
	cdt.printList(list);
	std::cout << "\n[4,5,6] Find products with the same color and put them in the Deque|Print the Deque:\n";
	cdt.moveIf(list, deque);
	cdt.printDeque(deque);
	std::cout << "\n[7] Sort Both containers:\n";
	cdt.sortAscList(list);
	cdt.sortAscDeque(deque);
	std::cout << "\n[8] Print Both containers:\n";
	cdt.printList(list);
	cdt.printDeque(deque);
	std::cout << "\n[9,10] Combine containers and Print the result:\n";
	cdt.combineContainers(list, deque, result);
	cdt.printList(result);
	std::cout << "\n[11] Count the products from the same brand:\n";
	cdt.countIf(result);
	std::cout << "\n[12] Find if a condition is satisfied:\n";
	cdt.findIf(result);
	std::cout << "\n\n";
	system("pause");
	return EXIT_SUCCESS;
}
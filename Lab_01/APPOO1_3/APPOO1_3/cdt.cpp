#include "cdt.hpp"


void CDT::setList(std::list<Phone> &l, int n)
{
	std::cout << "Set up the List:\n";
	for (int i = 0; i < n; i++)
	{
		Phone p;
		std::cin >> p;
		l.push_back(p);
	}
}

void CDT::printList(std::list<Phone> &l)
{
	std::cout << "Print List\n";
	for (auto & i : l)
	{
		std::cout << i << "\n\n";
	}
}

void CDT::printDeque(std::deque<Phone> &d)
{
	std::cout << "Print Deque\n";
	for (auto & i : d)
	{
		std::cout << i << "\n\n";
	}
}

void CDT::sortDescList(std::list<Phone> &l)
{
	std::vector<Phone> v;
	insertToContainer(l, v);
	clearList(l);
	std::sort(v.begin(), v.end(), [&](Phone a, Phone b) {return a.getPrice() > b.getPrice(); });
	insertToContainer(v, l);
}

void CDT::sortAscList(std::list<Phone> &l)
{
	std::vector<Phone> v;
	insertToContainer(l, v);
	clearList(l);
	std::sort(v.begin(), v.end(), [&](Phone a, Phone b) {return a.getPrice() < b.getPrice(); });
	insertToContainer(v, l);
}

void CDT::sortAscDeque(std::deque<Phone> &d)
{
	std::sort(d.begin(), d.end(), [&](Phone a, Phone b) {return a.getPrice() < b.getPrice(); });
}

void CDT::combineContainers(std::list<Phone> &l, std::deque<Phone> &d, std::list<Phone> &result)
{
	insertToContainer(d, l);
	result.insert(result.end(), l.begin(), l.end());
}

void CDT::countIf(std::list<Phone> &l)
{
	std::cout << "\nInput the brand:\n";
	std::string brand;
	std::cin >> brand;
	std::cout << std::count_if(l.begin(), l.end(), [&](Phone p) {return (brand == p.getBrand()) ? true : false; });
}

void CDT::findIf(std::list<Phone>& l)
{
	double price;
	std::cout << "Input the price: ";
	std::cin >> price;
	find_if(l.begin(), l.end(), [&](Phone p) {return (price == p.getPrice()) ? true : false; });
}

void CDT::moveIf(std::list<Phone> &l, std::deque<Phone> &d)
{
	std::cout << "\nInput the color:\n";
	std::string color;
	std::cin >> color;
	move_if(l, d, [&](Phone p) {return (p.getColor() == color) ? true : false; });
}

void CDT::clearList(std::list<Phone> &l)
{
	l.clear();
}

template<typename sourceContainer, typename outputContainer>
void CDT::insertToContainer(sourceContainer &s, outputContainer &o)
{
	for (auto &i : s)
	{
		o.push_back(i);
	}
}

template <typename T>
void CDT::move_if(std::list<Phone> &list, std::deque<Phone> &deque, T pred)
{
	std::list<Phone>::iterator iterator = list.end();
	for (int i = list.size() - 1; i >= 0; --i)
	{
		Phone p = *(--iterator);
		if (pred(*iterator))
		{
			deque.emplace_back(*iterator);
			iterator = list.erase(iterator);
		}
		if (iterator == list.begin())
			break;
	}
}

template<typename iterator, typename T>
void CDT::find_if(iterator a, iterator b, T pred)
{
	for (auto i = a; i != b; i++)
	{
		if (pred(*i))
		{
			std::cout << "\n" << *i << "\n\n";
		}
	}
}

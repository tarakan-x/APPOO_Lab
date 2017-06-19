#include <iostream>
#include <string>
#include "Phone.hpp"

std::istream&operator >> (std::istream &in, Phone &obj)
{
	std::cout << "\nInput Brand|Model|Color|Price: \n";
	in >> obj.brand;
	in >> obj.model;
	in >> obj.color;
	in >> obj.price;
	return in;
}

std::ostream&operator << (std::ostream &out, Phone &obj)
{
	return out << "\nBrand: " << obj.brand << "\nModel: " << obj.model
		<< "\nColor: " << obj.color << "\nPrice: " << obj.price << "\n\n";
}

std::string Phone::getBrand()
{
	return brand;
}

std::string Phone::getModel()
{
	return model;
}

std::string Phone::getColor()
{
	return color;
}

double Phone::getPrice()
{
	return price;
}
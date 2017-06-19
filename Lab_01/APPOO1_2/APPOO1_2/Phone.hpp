#pragma once

class Phone
{
public:
	Phone() : brand(""), model(""), color(""), price(0) {}
	~Phone() {}
	friend std::istream&operator >> (std::istream &in, Phone &obj);
	friend std::ostream&operator <<(std::ostream &out, Phone &obj);
	std::string getBrand();
	std::string getModel();
	std::string getColor();
	double getPrice();
private:
	std::string brand, model, color;
	double price;
};
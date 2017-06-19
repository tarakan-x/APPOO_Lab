#pragma once
class longDataType
{
public:
	longDataType() : n(0) {}
	~longDataType() {}
	void setList(std::list<long> &obj, int n);
	long getFront(std::list<long> &obj);
	long getBack(std::list<long> &obj);
	bool isEmpty(std::list<long> &obj);
	void printListWIterator(std::list<long> &obj);
	void printListIterator(std::list<long> &obj);
	void addInList(std::list<long> &obj, long number);
	void setRandomList(std::list<long> &obj, int size);
	void removeFromList(std::list<long> &obj);
	void removeNFromList(std::list<long> &obj);
	void appendListBack(std::list<long> &obj1, std::list<long> &obj2);
private:
	long n;
};
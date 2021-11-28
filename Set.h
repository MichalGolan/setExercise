#ifndef SET_H
	#define SET_H


#include <iostream>
using namespace std;

ostream& operator<<(ostream& O, const Set& set);

class Set
{

public:
	Set();
	Set(int maxSize);
	~Set();
	Set(const Set& other);
	


	int getLogSize() const;

	//operators:
	Set& operator=(const Set& other);
	Set operator+(int x) const;
	Set operator+(const Set& other) const;
	Set& operator+=(int x);
	bool operator>(const Set& other) const;
	bool operator==(const Set& other) const;
	bool operator!=(const Set& other) const;
	int& operator[](int index) const;

private:
	int* _items;
	int _logSize;
	int _maxSize;
};



#endif
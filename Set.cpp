#include "Set.h"

int Set::getLogSize() const
{
	return _logSize;
}

Set& Set::operator=(const Set& other)
{

}

Set  Set::operator+(int x) const
{

}

Set  Set::operator+(const Set& other) const
{

}

Set& Set::operator+=(int x)
{

}

bool Set:: operator>(const Set& other) const
{

}
bool Set:: operator==(const Set& other) const
{

}

bool Set:: operator!=(const Set& other) const
{

}

int& Set:: operator[](int index) const
{
	return _items[index];
}

ostream& operator<<(ostream& O, const Set& set)
{
	int i;
	for (i = 0; i < set.getLogSize(); i++)
	{
		O << set[i] << " ";
	}
	return O;
}

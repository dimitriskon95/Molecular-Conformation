#include <iostream>
#include "Pointer.h"
#include <iomanip>

using namespace std;

Pointer::Pointer(double* data, int s, int IDnumber)
{
	id = IDnumber;
	size = s;
	vector = data;
	next = NULL;
}

Pointer::~Pointer()
{
	delete vector;
}

void Pointer::set_next(Pointer *node)
{
	next = node;
}

Pointer* Pointer::get_next()
{
	return next;
}

int Pointer::get_size()
{
	return size;
}

int Pointer::get_id()
{
	return id;
}

double* Pointer::get_data()
{
	return vector;
}

void Pointer::printNode()
{
	for(int i=0; i <= size-1; i++)
		cout << setprecision(12) << vector[i] << '\t';
	cout << endl;
}

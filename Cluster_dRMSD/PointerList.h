#ifndef PointerList_H
#define PointerList_H

#include <fstream>
#include <iostream>
#include "Pointer.h"

class PointerList
{
	private:
		int list_size;
		Pointer *start;
	public:
		PointerList();
		~PointerList();

		bool is_empty();
		void Insert_Pointer(Pointer *);
		void Insert_Pointer_End(Pointer *);

		int get_ListSize();

		void printList();

		Pointer *get_start();
		void set_start(Pointer *);
		void set_List_size(int);
};

#endif

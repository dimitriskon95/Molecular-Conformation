#include <fstream>
#include <iostream>
#include <math.h>
#include <string.h>
#include "PointerList.h"

using namespace std;

PointerList::PointerList()
{
//	cout << "A list was created." << endl;
	list_size = 0;
	start = NULL;
}

PointerList::~PointerList()
{
	Pointer* current = start;
	Pointer* del_node;

    while(current != NULL)  //diagrafoume enan enan tous komvous
    {
        del_node = current;
        current = current->get_next();
        list_size--;
        delete del_node;
    }
//  cout << "A list was deleted" << endl;
}

bool PointerList::is_empty()
{
	return (list_size == 0);
}

int PointerList::get_ListSize()
{
	return list_size;
}

void PointerList::Insert_Pointer(Pointer *node)
{
	//insert node at the beginnning of the list
	//cout << "A node was inserted to a list " << endl;
	Pointer* current = start;
	if (is_empty()){
		start = node;
	}
	else{
		node->set_next(start);
		start = node;
	}
	list_size++;
}


void PointerList::Insert_Pointer_End(Pointer *node)
{
	//insert node at the beginnning of the list
	//cout << "A node was inserted to a list " << endl;
	Pointer* current = start;
	if (is_empty()){
		start = node;
	}
	else{
		while (current->get_next() != NULL)
			current = current->get_next();
		current->set_next(node);
	}
	list_size++;
}


void PointerList::printList()
{
	Pointer* current = start;

    while(current != NULL)
    {
        current->printNode();
        current = current->get_next();
    }
    cout << endl;
}

Pointer *PointerList::get_start()
{
	return start;
}

void PointerList::set_start(Pointer *s)
{
	start = s;
}

void PointerList::set_List_size(int num)
{
	list_size = num;
}

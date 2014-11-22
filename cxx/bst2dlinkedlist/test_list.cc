/* 
 * Copyright 2014 Towry Wang <tovvry@gmail.com>
 * 
 * c++ test_list.cc list.cc -o tlist
 * ./tlist
 */

#include "list.h"
#include <stdio.h>

int main()
{
	List<int>* list = new List<int>(2);
	list->push(4);
	list->push(23);
	list->push(12);
	list->push(3);
	list->push(17);

	// test print
	list->print();

	// test remove
	list->remove(23);

	list->print();

	// test find
	if (list->find(12))
	{
		if (list->find(99999999))
		{
			printf("That's bad, because `find` always work!");
		}

		printf("That's good, becuase `find` works.\n");
	}


	return 0;
}
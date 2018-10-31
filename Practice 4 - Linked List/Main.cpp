#include <iostream>
#include "List.h"
#include "FilterList.h"


int main()
{

	List<int> unfiltered;

	unfiltered.PushBack(1);
	unfiltered.PushBack(2);
	unfiltered.PushBack(3);
	unfiltered.PushBack(4);
	unfiltered.PushBack(5);
	unfiltered.PushBack(6);
	unfiltered.PushBack(7);
	unfiltered.PushBack(8);

	List<int> filtered = Filter(unfiltered, IsEven);

	for (int i : filtered)
		std::cout << i;

	return 0;
}
#ifndef _FILTER_LIST_

#include "List.h"

template <class T>
List<int> Filter(const List<int> &givenList, T condition)
{
	List<int> filteredList;

	for (int i : givenList)
	{
		if (condition(i))
			filteredList.PushBack(i);
	}

	return filteredList;
}

bool IsEven(int x)
{
	return x % 2 == 0;
}








#define _FILTER_LIST_
#endif // !_FILTER_LIST_

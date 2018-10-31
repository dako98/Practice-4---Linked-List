#include "List.h"

template<class Type>
void Append(List<Type> &first, List<Type> &second)
{
	for (Type i : second)
		first.PushBack(i);
}
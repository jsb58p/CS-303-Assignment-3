#include "Linear_Search.h"
/* recursive linear search function that finds the last occurrence of a target in a vector. 
parameter 1 is the vector, parameter 2 is the value to be found, parameter 3 should start at the maximum index of the vector when input by the user */
template<typename Item_Type>
int recursive_linear_search<Item_Type>::linear_search(std::vector<Item_Type>& items, Item_Type& target, size_t pos_last) {
	if (target == items[pos_last])
		return pos_last;
	if (pos_last == 0)
		return -1;
	else
		return linear_search(items, target, pos_last - 1);
}

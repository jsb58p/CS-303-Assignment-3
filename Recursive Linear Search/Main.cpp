#include <iostream>
#include <vector>
/* recursive linear search function that finds the last occurrence of a target in a vector. 
parameter 1 is the vector, parameter 2 is the value to be found, parameter 3 should start at the maximum index of the vector when input by the user */
template<typename Item_Type>
int linear_search(std::vector<Item_Type>& items, Item_Type& target, size_t pos_last) {
	if (target == items[pos_last])  	//checks if the item at pos_last(which is being decremented with each call) is the target
		return pos_last;
	if (pos_last == 0) 		//checks if the vector is empty
		return -1;
	else
		return linear_search(items, target, pos_last - 1); 	//recursively perform linear_search until target is found
}



int main() {
	
	std::vector<int> numbers{ 3, 1, 1, 4 , 2, 3, 7, 8, 4, 9 };
	int target = 3;
	
	std::cout << linear_search(numbers, target, numbers.size()-1); //searching the vector 'numbers' in search for the 'target' of 3, starting with the maximum index in the vector and working down. 
}

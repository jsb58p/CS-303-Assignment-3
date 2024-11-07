#include "Linear_Search.h"
#include <iostream>

int main() {
	
	std::vector<int> numbers{ 3, 1, 1, 4 , 2, 3, 7, 8, 4, 9 };
	int target = 3;
	recursive_linear_search<int> search; //create a recursive linear search object.
	std::cout << search.linear_search(numbers, target, numbers.size()-1); //searching the vector 'numbers' in search for the 'target' of 3, starting with the maximum index in the vector and working down. 
}

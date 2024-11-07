#include "Linked_List_Insertion_Sort.h"
#include <iostream>

int main() {
	std::list<int> numbers = { 7, 4, 2, 3, 9, 5, 8, 6, 11, 1 };
	auto front = numbers.begin();
	linked_list_insertion_sort numbersList;
	numbersList.insertion_sort_list(numbers);
	//numbersList.insertion_sort(numbers);

	for (const auto& elem : numbers) {
		std::cout << elem << " ";
	}

}

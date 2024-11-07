#include "Linked_List_Insertion_Sort.h"
#include <iostream>

int main() {
	std::list<int> numbers = { 7, 4, 2, 3, 9, 5, 8, 6, 11, 1 };
	linked_list_insertion_sort numbersList;		//declare a linked_list_insertion_sort object to call the insertion sort function
	numbersList.insertion_sort_list(numbers);	//insertion sort function
	

	for (const auto& item : numbers) {  //for loop to display the elements of the list after sorting, to ensure the order is correct
		std::cout << item << " ";		
	}

}

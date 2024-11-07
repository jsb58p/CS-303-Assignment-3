#pragma once
#ifndef LINEAR_SEARCH_H_
#define LINEAR_SEARCH_H_
#include <vector>
#include <cstddef>

template<typename Item_Type>
class recursive_linear_search {
public:
	int linear_search(std::vector<Item_Type>&, Item_Type&, size_t); //recursive linear search function that finds the last occurrence of a target in a vector.

	recursive_linear_search () {}  //constructor	

};


#include "Linear_Search_Imp.tpp"



#endif

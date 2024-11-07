#pragma once
#ifndef LINKED_LIST_INSERTION_SORT_H_
#define LINKED_LIST_INSERTION_SORT_H_
#include <list>
#include <cstddef>
#include <vector>
#include <iterator>
class linked_list_insertion_sort {
public:
	void insertion_sort(std::vector <int>&);
	void insertion_sort_list(std::list <int>&);

};

#endif
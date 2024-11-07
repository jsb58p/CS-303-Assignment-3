#include "Linked_List_Insertion_Sort.h"

void insertion_sort(std::list<int>& num) {
	if (num.empty()) {
		return;
	}

	// Initialize an iterator for the current position in the list
	for (auto it = std::next(num.begin()); it != num.end(); ++it) {
		int key = *it;
		auto prev = std::prev(it);

		// Move the key backwards through the list until it's in the correct position
		while (prev != num.begin() && *prev > key) {
			*it = *prev;
			it = prev;
			prev = std::prev(prev);
		}

		// Insert the key into its correct position
		if (*prev > key) {
			*it = *prev;
			*prev = key;
		}
		else {
			*it = key;
		}
	}
}

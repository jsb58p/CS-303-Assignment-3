#include "Linked_List_Insertion_Sort.h"

void linked_list_insertion_sort::insertion_sort(std::vector <int>& num) {
    int i, j, key;
    bool insertionNeeded = false;
    for (j = 1; j < num.size(); j++) {
        key = num[j];
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--) {
            if (key < num[i]) {
                num[i + 1] = num[i]; // larger values move right
                insertionNeeded = true;
            }
            else
                break;
        }
        if (insertionNeeded)
            num[i + 1] = key; //Put key into its proper location
    }
}

void linked_list_insertion_sort::insertion_sort_list(std::list <int>& num) {
    // If the list has fewer than 2 elements, it's already sorted
    if (num.size() <= 1) return;

    // Start sorting from the second element
    for (auto iterator = next(num.begin()); iterator != num.end(); ) {
        auto key = *iterator;
        auto currentPos = iterator;
        auto nextIt = next(iterator);  // Save the next element for the next iteration

        // Move backward through the list and insert key into the sorted part
        while (currentPos != num.begin() && *prev(currentPos) > key) {
            currentPos = prev(currentPos);
        }

        // If the key is not already in place, insert it at the found position
        if (currentPos != iterator) {
            num.erase(iterator);  // Remove the current element
            num.insert(currentPos, key);  // Insert it in the correct position
        }

        // Move to the next element
        iterator = nextIt;
    }
}

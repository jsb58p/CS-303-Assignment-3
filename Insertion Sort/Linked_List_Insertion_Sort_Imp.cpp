void linked_list_insertion_sort::insertion_sort_list(std::list<int>& num) {
    if (num.size() <= 1) return; // If the list is empty or has only one element, it's already sorted

    auto it = next(num.begin()); // Start from the second element
    while (it != num.end()) {
        auto key = *it;  // The element to be inserted
        auto pos = it;
        --pos;  // Move to the element before 'it'

        bool insertionNeeded = false;
        while (pos != num.begin() && key < *pos) {
            --pos;  // Move backward
            insertionNeeded = true;
        }

        // If key is not already in the correct place, remove and reinsert it
        if (insertionNeeded) {
            num.erase(it);  // Remove the current element
            num.insert(pos, key);  // Insert it in the correct position
        }

        // Move to the next element
        it = next(it);
    }
}

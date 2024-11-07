#include "Queue.h"

/** Pushes an item into the back of the queue.
@param item The item to be inserted
*/
template<typename Item_Type>
void linked_list_queue<Item_Type>::push(const Item_Type& item) {
container.push_back(item);
}

/** Removes the front item from the queue.
*/
template<typename Item_Type>
void linked_list_queue<Item_Type>::pop() {
container.pop_front();
}

/** Returns a reference to the object at the front of the queue
without removing it.
@return A reference to the object at the front of the queue
*/
template<typename Item_Type>
Item_Type& linked_list_queue<Item_Type>::front() {
return container.front();
}

/** Returns a const reference to the object at the
front of the queue without removing it.
@return A const reference to the object at the front of the queue
*/
template<typename Item_Type>
const Item_Type& linked_list_queue<Item_Type>::front() const {
return container.front();
}

/** Determines whether the queue is empty. */
template<typename Item_Type>
bool linked_list_queue<Item_Type>::empty() const {
return container.empty();
}

/** Returns the number of items in the queue. */
template<typename Item_Type>
size_t linked_list_queue<Item_Type>::size() const {
return container.size();
}

/** Displays all the elements in the queue */
template<typename Item_Type>
void linked_list_queue<Item_Type>::display(int index) {
	if(container.empty() == true){
		return;
	}
	std::cout<<front()<<std::endl;
	push(front());
	pop();
	if(size() == index + 1){
		return;
	}
	index++;
	display(index);
	
}

/* Move the front element to the back of the queue */
template<typename Item_Type>
void linked_list_queue<Item_Type>::move_to_rear() {
	push(front());
	pop();
}

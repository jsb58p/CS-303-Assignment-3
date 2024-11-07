#include "Queue.h"
#include <iostream>

int main() {
	linked_list_queue<int> numbers;


	/*Insert 10 values into the queue*/
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);
	numbers.push(5);
	numbers.push(6);
	numbers.push(7);
	numbers.push(8);
	numbers.push(9);
	numbers.push(10);
	
	/* Display all the elements in the queue */
	numbers.display();
	std::cout << std::endl;
	/* Move the element currently at the front of the queue to the rear of the queue*/
	numbers.move_to_rear();

	/* Display all the elements in the queue */
	numbers.display();
}

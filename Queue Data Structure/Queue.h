#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_
#include <cstddef>
#include <list>
#include <iostream>

template<typename Item_Type>

class linked_list_queue {
public:
	void push(const Item_Type&); //push items to back of queue
	void pop(); //remove front of queue
	Item_Type& front();   //return front of queue
	const Item_Type& front() const; //return front of queue
	bool empty() const; //check if queue is empty
	size_t size() const; //return size of queue
	void display(int index = 0); //display all the elements in the queue
	void move_to_rear(); //move front element to the back of the queue

	linked_list_queue() {} //constructor

private:
	std::list<Item_Type> container; //the list holding all the items.
};


#include "Queue_Imp.tpp"
#endif

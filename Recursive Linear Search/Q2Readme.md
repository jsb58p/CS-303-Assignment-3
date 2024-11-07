# Assignment 3 - Implement a queue data structure

Queue.h, Queue_Imp.tpp, and Main.cpp must be in the same repository.

---
**Function Descriptions**

**void display(int index = 0)** : Displays all the elements of the queue while preserving the queue

**void move_to_rear()** : Moves the element currently at the front of the queue to the rear of the queue. T

-All other functions use the C++ standard library list class member functions.


---
## Output

<img width="685" alt="Queue" src="https://github.com/user-attachments/assets/8a63d4b3-6f35-4168-8036-90db86041400">


-Line 5 creates a **linked_list_queue** object called **numbers**. The template parameter **int** means that the elements will be of type int.

-Line 9 - Line 18 uses the function **push** to push 10 values into the queue.

-Line 21 uses the function **display** to display the queue.

-Line 24 uses the function **move_to_rear** to move the 1 at the front of the queue to the rear.

-Line 27 uses the function **display** again to display the list now that the **move_to_rear** function has been used.



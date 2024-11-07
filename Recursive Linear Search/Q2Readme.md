# Assignment 3 - Write a recursive linear search function with a recursive step that finds the last occurrence of a target in a vector, not the first. 

Function is in Main.cpp.

---
**Function Descriptions**

**int linear_search(std::vector<Item_Type>& items, Item_Type& target, size_t pos_last)** : Recursive linear search function that finds the last occurrence of a target in a vector


---
## Output

<img width="932" alt="recursive_linear_search" src="https://github.com/user-attachments/assets/23f6437d-6709-4499-900d-c55cabd19caf">


-Line 19 creates an integer **vector** object called **numbers**, along with some values.

-Line 20 creates an **int** variable called **target**. This holds the value to be targeted during the linear search function.

-Line 22 uses cout and the function **linear_search** to display the last occurence of the target, which is 3. The last occurrence of 3 in **numbers** is at position 5, so the output is 5.





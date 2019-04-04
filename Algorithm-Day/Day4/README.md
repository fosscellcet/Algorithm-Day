# Stacks, Queues and Linked Lists

## Stacks

- Last in First out data structure.
- The last inserted element is removed first.
- Operations:
  - push() - Insert an element into the top of the stack.
  - pop() - Remove the last inserted element.
  - top() - Get the last inserted element.

[Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/stack.cpp)  
[STL Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/stackstl.cpp)

## Queue

- First in first out data structure.
- The first inserted element is removed first.
- Operations:
  - push() - Insert an element into the tail of the queue.
  - pop() - Remove an element from the front of the queue.
  - front) - Returns the front element(ie, first inserted element) in the queue.
  - back() - Returns the last element(ie, the last inserted element) in the queue.
  
[Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/queue.cpp)  
[STL Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/queueStl.cpp)

## Linked List

- Uses pointer to store data.
- The head pointer initially point to NULL.
- When the first node is inserted, the head pointer now points to the first node.
- Inserting an element in between is faster than in array, because only a few pointers have to changed.

[Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/linkedList.cpp)  
[STL Implementation](https://github.com/fosscellcet/Algorithm-Day/blob/master/Algorithm-Day/Day4/linkedListStl.cpp)

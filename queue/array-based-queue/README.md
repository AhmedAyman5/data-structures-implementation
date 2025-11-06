# Queue (Array-Based Implementation)

This project implements a **Queue Data Structure** using a **static array** in C++.  
It’s part of my *Data Structures Implementation Series*, where I rebuild each structure from scratch to deeply understand how data is stored and managed in memory.

---

## What Is a Queue?

A **Queue** is a linear data structure that follows the **FIFO** (First In First Out)** principle.
the first element inserted is the first one to be removed.  
Think of it like a line of people waiting for service: whoever comes first, leaves first.

---

## Implementation Details

This version uses a **fixed-size array** and two integer indices:
- `front`: points to the first element.
- `rear`: points to the last inserted element.

### Operations
Function: Description - Time Complexity.
`Enqueue(int data)`: Adds an element to the end - **O(1)**.
| `Dequeue()`: Removes the element from the front - **O(1)**.
| `Front()`: Returns the first element - **O(1)**.
| `isEmpty()`: Checks if the queue is empty - **O(1)**.
| `isFull()`: Checks if the queue is full - **O(1)**.
| `getLength()`: Returns number of elements - **O(1)**.

---

## Example Usage:
```cpp
#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue queue(5);
    queue.Enqueue(3);
    queue.Enqueue(5);
    queue.Enqueue(7);
    queue.Enqueue(10);
    queue.Enqueue(12);

    while (queue.getLength()) {
        cout << queue.Front() << '\n';
        queue.Dequeue();
    }
}
```
## Output:
```
3
5
7
10
12
```

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

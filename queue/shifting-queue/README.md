### **Shifting Queue**

# Shifting Queue (Array-Based)

This project implements a **Queue Data Structure** using a **shifting array technique** in C++.  
It’s a modified version of the array-based queue that solves the problem of unused spaces after multiple `Dequeue()` operations.

---

## What Is a Shifting Queue?

A **Shifting Queue** still follows the **FIFO (First In, First Out)** principle,  
but after each `Dequeue()`, it **shifts** all remaining elements one step toward the front
that is allowing new elements to be added without wasted space.

---

## Implementation Details

- Internally uses an **array** and two indices: `front` and `rear`.
- When `Dequeue()` is called, all elements are shifted one step (using function `shift()` that i implemented it) to reuse freed positions.

### Operations
`Enqueue(int data)`: Adds an element to the end - **O(1)**
`Dequeue()`: Removes the front element (with shift) - **O(n)**
`Front()`: Returns the first element - **O(1)**
`isEmpty()`: Checks if the queue is empty - **O(1)**
`isFull()`: Checks if the queue is full - **O(1)**
`getLength()`: Returns number of elements - **O(1)**

---

## What i learned

- Solves the *wasted space problem* of linear queues.
- Demonstrates how **shifting data** works in memory.
- A great step before implementing a **circular queue**, which achieves O(1) performance without shifting.
- Emphasizes understanding of **array memory manipulation** in C++.

---

## Example Usage
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

    cout << "-----\n";

    queue.Enqueue(45);
    queue.Enqueue(87);
    queue.Enqueue(104);
    queue.Enqueue(635);
    queue.Enqueue(34);

    queue.Dequeue();
    queue.Dequeue();
    queue.Dequeue();

    queue.Enqueue(24);
    queue.Enqueue(100);

    while (queue.getLength()) {
        cout << queue.Front() << '\n';
        queue.Dequeue();
    }
}
```

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

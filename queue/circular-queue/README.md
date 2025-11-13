# Circular Queue (Array-Based Implementation)

## Overview
This project implements a **Circular Queue** data structure using an **array** in C++.
It demonstrates key queue operations and the circular behavior that optimizes space usage compared to a linear queue.

---

## Features
- Enqueue (add element)
- Dequeue (remove element)
- Check if queue is full or empty
- Access the front element
- Get the current number of elements
- Automatic circular wrapping behavior
- Exception handling for overflow and underflow

---

## Core Concepts
A **Circular Queue** connects the end of the queue back to the beginning, forming a circle.  
This allows efficient use of array space and avoids shifting elements when elements are removed.

**Front** points to the first element, and **Rear** points to the last element.  
When `Rear` reaches the end of the array, it wraps around using:

```cpp
rear = (rear + 1) % size;
```

---

## Example Usage

```cpp
#include <iostream>
#include "CircularQueue.h"
using namespace std;

int main()
{
    CircularQueue queue(5);

    queue.Enqueue(10);
    queue.Enqueue(20);
    queue.Enqueue(30);

    cout << "Front element: " << queue.Front() << endl; // 10

    queue.Dequeue();
    queue.Enqueue(40);
    queue.Enqueue(50);
    queue.Enqueue(60);

    while (!queue.isEmpty()) {
        cout << queue.Front() << " ";
        queue.Dequeue();
    }

    return 0;
}
```

**Output:**
```
Front element: 10
20 30 40 50 60
```

---

## Time Complexity

Enqueue | O(1)
Dequeue | O(1)
Front   | O(1)
isEmpty / isFull | O(1)

---

## Files

`CircularQueue.h` | Class definition and function prototypes
`CircularQueue.cpp` | Function implementations
`main.cpp` | Test program for demonstrating queue functionality

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

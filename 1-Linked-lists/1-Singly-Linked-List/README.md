# Singly Linked List Implementation in C++

This repo contains my implementation of **Singly Linked List** from scratch in C++.
It is part of my personal Data Structures learning projects, where I build each major data structure manually to understand how they work under the hood.

---

## Overview

**Singly Linked List** is a linear data structure where each element (node) contains:
- `data`: the value stored.
- `next`: a pointer to the next node.

Unlike arrays, linked lists do not store elements in contiguous memory, that is lead to **dynamic memory allocation** and **efficient insertions and deletions**.

---

## Features i implemented:

### Core Operations
- `isEmpty()` → Check if the list is empty.
- `insertAtBeginning(int data)` → Insert a new node at the start.
- `append(int data)` → Insert a new node at the end.
- `insertAfter(int after, int data)` → Insert a new node after a specific value.
- `deleteFromBeginning()` → Remove the first node.
- `deleteLast()` → Remove the last node.
- `find(int data)` → Search for a value in the list.
- `getLength()` → Return the total number of nodes.
- `display()` → Print all elements in a visual format.

### Helper Functions(helped me while implemented core functions)
- `getLastNode()` → Returns a pointer to the last node.
- Destructor (`~SinglyLinkedList()`) → Cleans up all allocated memory automatically.

---

## Example Usage:

```cpp
#include "SinglyLinkedList.h"
#include <iostream>
using namespace std;

int main() {
    SinglyLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtBeginning(5);
    list.append(20);
    list.append(25);
    list.insertAfter(10, 15);

    list.display(); // Output: 5 -> 10 -> 15 -> 20 -> 25 -> null

    list.deleteFromBeginning();
    list.deleteLast();
    list.display(); // Output: 10 -> 15 -> 20 -> null

    cout << "Length: " << list.getLength() << '\n';
}
```

## Future Improvements

- Make list with template to support generic data types not just int.
- Add `sort()` function.
- Add `removeDuplicates()` function.
- Implement a copy constructor(to make deep copy) and assignment operator(operator overloading).

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

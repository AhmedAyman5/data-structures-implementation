# Stack (Linked List-Based Implementation)

This project implements a **Stack Data Structure** using a **Linked List** in C++.  
It’s part of my **Data Structures Implementations Series**, where I build every structure from scratch to fully understand how computers manage data in memory.

---

## What Is a Stack?

A **Stack** is a linear data structure that follows the **LIFO** (Last In First Out) principle, 
the last element inserted is the first one removed. 
Think of it like a stack of plates: you can only take from or add to the top.

---

## Implementation Details

This implementation uses a **singly linked list**, where:
- Each node contains:
  - `data`: the stored value.
  - `next`: pointer to the next node.
- The stack maintains a pointer `top` that always points to the most recently added element.

### Operations (Functions):
- `push(int data)` Adds a new element to the top of the stack. (Time Complexity: **O(1)**)
- `pop()` Removes the top element. (Time Complexity: **O(1)**)
- `peek()` Returns the top element without removing it. (Time Complexity: **O(1)**)
- `isEmpty()` Checks if the stack is empty. (Time Complexity: **O(1)**)
- `numberOfElements()` Returns the total number of elements. (Time Complexity: **O(1)**)

---

## Design:

- Uses **dynamic memory allocation** (`new` / `delete`) to manage nodes efficiently.
- Follows the **Single Responsibility Principle** Where: each method has isolated task.
- The `peek()` function uses C++ exceptions for safe error handling.
- The `length` member tracks stack size in constant time.

---

## Example Usage:
```cpp
#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    Stack stack;

    stack.push(8);
    stack.push(76);
    stack.push(17);
    stack.push(63);
    stack.push(100);

    while (!stack.isEmpty())
    {
        cout << stack.peek() << '\n';
        stack.pop();
    }

    return 0;
}
```
## Output:
```
100
63
17
76
8
```

---

## Future Improvements:
- Template-based version (Stack<T>) to support any data type.

---

## Author

**Ahmed Ayman**
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department).<br>
Focused on mastering Data Structures, Algorithms, and Low-Level Computer Architecture.

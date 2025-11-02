# Stack Data Structure (Array-based Implementation in C++)

This project is part of my personal journey to build **data structures from scratch** using C++, without relying on STL containers.  
I believe that understanding how these structures work under the hood is what transforms a programmer into a **real computer scientist**.  

In this implementation, I created an **array-based Stack**, one of the most fundamental data structures in computer science, to explore how memory, indexing, and stack operations actually work at a low level.

---

## Overview

A **Stack** is a linear data structure that follows the **LIFO (Last In First Out)** principle.  
It’s like a stack of plates: 
- You **push** a new plate on top.  
- You **pop** the top plate when you need one.  
- You can only access the **top** element directly.

---

## Implemented Features

- `push(int data)` Inserts a new element on the top of the stack. "Checks for overflow first".
- `pop()` Removes the top element. "Checks for underflow first".
- `peek()` Returns (without removing) the top element. "Throws an exception if empty".
- `isEmpty()` Checks if the stack contains no elements.
- `isFull()` Checks if the stack reached its maximum capacity.
- `numberOfElements()` Returns the current number of elements in the stack.
- `~Stack()` "Destructor" frees allocated memory in heap.

---

## Concepts i practice on

- **Memory Management:** Manual allocation (`new[]`) and deallocation (`delete[]`) to control the memory.
- **Encapsulation:** Keeping `arr`, `size`, and `top` private to prevent unintended access.
- **Boundary Checking:** Preventing overflow and underflow conditions explicitly.
- **Single Responsibility Principle (SRP):** Separating `pop()` and `peek()` ensures each function does exactly one thing.

---

## Example Run


```cpp
Stack stack(5);
stack.push(8);
stack.push(76);
stack.push(17);
stack.push(63);
stack.push(100);

while (stack.numberOfElements())
{
    cout << stack.peek() << '\n';
    stack.pop();
}
```

**Output:**
```
100
63
17
76
8
```

## Why I Built This

I’m rebuilding every major data structure manually to:

Strengthen my understanding of core CS fundamentals.

Practice OOP design and memory control in C++.

Build a professional, educational GitHub portfolio that shows not just syntax, but real comprehension.




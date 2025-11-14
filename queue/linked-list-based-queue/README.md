# Linked List–Based Queue (C++)

This repository contains an implementation of a **Queue** data structure using a **singly linked list** in C++.  
The queue follows the **FIFO (First-In First-Out)** principle, where elements are inserted at the *rear* and removed from the *front*.

---

## Features
- Enqueue (insert at rear)
- Dequeue (remove from front)
- Check if queue is empty
- Get the front element
- Display all elements
- Get queue length
- Clear the entire queue
- Proper memory deallocation in destructor

---

## File Structure
linked-list-based-queue/
&emsp;&ensp;&nbsp;├── Queue.h
&emsp;&ensp;&nbsp;├── Queue.cpp
&emsp;&ensp;&nbsp;├── Node.h
&emsp;&ensp;&nbsp;└── main.cpp


---

## ⚙️ Implementation Details

### **Enqueue**
- Creates a new node.
- If queue is empty → front and rear both point to new node.
- Otherwise → new node is added after current rear.

### **Dequeue**
- If queue is empty → no action.
- If only one node → front and rear become `nullptr`.
- Otherwise → front moves to next node and old front is deleted.

### **Front**
Returns the value at the front.  
Throws `std::runtime_error` if the queue is empty.

### **Display**
Traverses the queue and prints all elements.

### **getLength**
Counts the nodes in the queue (O(n)).

### **Destructor**
Automatically clears all nodes to prevent memory leaks.

---

## Example Usage (from `main.cpp`)
```cpp
Queue queue;

queue.Enqueue(20);
queue.Enqueue(76);
queue.Enqueue(45);

queue.Display();

queue.Dequeue();
queue.Dequeue();

queue.Display();

queue.Enqueue(186);
queue.Enqueue(190);

cout << "Length: " << queue.getLength() << endl;

queue.Display();
```
## Output:
20
76
45
8
89
-----
45
8
89
-----
Length: 5
45
8
89
186
190

---

## Author
**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

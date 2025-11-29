# Binary Search Tree (BST) - C++ Implementation

This folder contains an implemented Binary Search Tree (BST) written in C++.  
It supports node insertion, searching, finding parents, getting the maximum right node, and in-order traversal.

---

## Features Implemented

### Insert (add)
Adds a new value into the BST following rules:  
- Values **less than or equal** go to the **left** subtree  
- Values **greater** go to the **right** subtree

### Search (`getNodeByData`)
Searches the tree for a node with the given value.

### Get Maximum Right (`getMaxRight`)
Returns the right-most node (largest value) in a subtree.

### Get Parent (`getParent`)
Returns the parent of a given node.

### In-Order Traversal (LDR)
Prints the tree in sorted ascending order.

---

## Project Structure

```
binary-search-tree/
│
├── Node.h
├── Tree.h
├── Tree.cpp
├── main.cpp
└── README.md
```

---

## How to Run

1. Open the folder in **Visual Studio** / **VS Code**.
2. Compile and run `main.cpp`.
3. Output will show:

- Tree before/after operations  
- Sorted traversal (in-order)

---

## Example:
```
	Tree tree;

	tree.add(50);
	tree.add(30);
	tree.add(70);
	tree.add(25);
	tree.add(40);
	tree.add(60);
	tree.add(80);
	tree.add(23);
	tree.add(26);
	tree.add(35);
	tree.add(45);

	tree.traverse();
```

## Output

```
23 25 26 30 35 40 45 50 60 70 80
```

---

## Implementation Notes

- Duplicate values are inserted on the **left subtree** (`<=` rule).  
- Traversal uses a standard **recursive in-order strategy** (Left → Data → Right).

---

## Future Improvements

- Node deletion
- Pre-order & post-order traversal
- Height calculation
- Balanced trees (AVL, Red-Black Tree)
- Iterative traversal versions

---

## Author

**Ahmed Ayman** <br>
Student at Faculty of Computers and Information Science, Mansoura University (Software Engineering Department)

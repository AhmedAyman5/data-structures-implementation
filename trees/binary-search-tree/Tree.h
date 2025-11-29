#pragma once
#include "Node.h"

class Tree
{
public:
	Tree();
	~Tree();

	bool isEmpty();
	void add(int data);
	Node* getNodeByData(int data);
	Node* getMaxRight(Node* node);
	Node* getParent(Node* node);
	void traverse();
	void clear(Node* node);

private:
	Node* root;

	void displayLDR(Node* node);
};

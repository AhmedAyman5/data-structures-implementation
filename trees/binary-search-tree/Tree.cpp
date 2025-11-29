#include<iostream>
using namespace std;
#include "Tree.h"
#include "Node.h"

Tree::Tree()
{
	this->root = nullptr;
}

//
bool Tree::isEmpty()
{
	return (this->root == nullptr);
}

//
void Tree::add(int data)
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = nullptr;
	newNode->right = nullptr;

	if (this->isEmpty())
	{
		this->root = newNode;
	}
	else
	{
		Node* current = this->root;
		Node* lastCurrent = nullptr;
		while (current != nullptr)
		{
			lastCurrent = current;
			if (data <= current->data)
			{
				current = current->left;
			}
			else
			{
				current = current->right;
			}
		}

		if (data <= lastCurrent->data)
		{
			lastCurrent->left = newNode;
		}
		else
		{
			lastCurrent->right = newNode;
		}
	}
}

//
Node* Tree::getNodeByData(int data)
{
	Node* current = this->root;

	while (current != nullptr)
	{
		if (current->data == data)
			return current;
		else if (data <= current->data)
			current = current->left;
		else
			current = current->right;
	}

	return nullptr;
}

//
Node* Tree::getMaxRight(Node* node)
{
	if (this->isEmpty() || node == nullptr)
		return nullptr;

	Node* current = node;

	while (current->right != nullptr)
	{
		current = current->right;
	}

	return current;
}

//
Node* Tree::getParent(Node* node)
{
	if (this->isEmpty() || node == nullptr)
		return nullptr;

	Node* current = this->root;
	Node* lastCurrent = nullptr;

	while (current != node && current != nullptr)
	{
		lastCurrent = current;
		if (node->data <= current->data)
		{
			current = current->left;
		}
		else
		{
			current = current->right;
		}
	}

	return lastCurrent;
}

//
void Tree::traverse()
{
	displayLDR(this->root);
}

//
void Tree::displayLDR(Node* node) // Left -> Data -> Right
{
	if (node == nullptr)
		return;

	displayLDR(node->left);
	cout << node->data << ' ';
	displayLDR(node->right);
}

//
void Tree::clear(Node* node) {
	if (node == nullptr) return;
	clear(node->left);
	clear(node->right);
	delete node;
}

Tree::~Tree()
{
	clear(this->root);
}
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include "BinarySearchTreeNode.cpp"

using namespace std;

class BinarySearchTree {
	BinarySearchTreeNode *root;
public:
	BinarySearchTree() {
		root = nullptr;
	}

	void insert(int value) {
		if (root == nullptr) {
			root = new BinarySearchTreeNode(value);
			return;
		}

		BinarySearchTreeNode *parent = root;
		BinarySearchTreeNode *current = root;
		while (current != nullptr) {
			parent = current;
			if (current->getValue() < value) {
				current = current->getRight();
			}
			else if (current->getValue() > value) {
				current = current->getLeft();
			}
			else {
				//the value you are inserting is already in tree
				return;
			}
		}

		if (parent->getValue() < value) { //parent will never be null
			parent->setRight(new BinarySearchTreeNode(value));
		}
		else {
			parent->setLeft(new BinarySearchTreeNode(value));
		}
	}

	bool search(int value) {
		BinarySearchTreeNode *current = this->root;
		while (current != nullptr) {
			if (current->getValue() > value) {
				current = current->getLeft();
			}
			else if (current->getValue() < value) {
				current = current->getRight();
			}
			else {
				return true;
			}
		}
		return false;
	}

	bool deleteValue(int value) {
		if (this->root == nullptr) { // in case tree is empty
			return false;
		}

		BinarySearchTreeNode *current = this->root;
		BinarySearchTreeNode *parent = nullptr;

		while (current->getValue() != value) {
			parent = current;

			if (current->getValue() > value) {
				current = current->getLeft();
			}
			else if (current->getValue() < value) {
				current = current->getRight();
			}

			if (current == nullptr) {
				// value is not in this tree
				return false;
			}
		}

		// now we have in current the node that we want to delete
		//case 1
		//  current is a leaf
		if ((current->getLeft() == nullptr) && (current->getRight() == nullptr)) {
			if (current == this->root) {
				this->root = nullptr;
			}
			else if (parent->getValue() < current->getValue()) {
				parent->setRight(nullptr);
			}
			else {
				parent->setLeft(nullptr);
			}
			return true;
		}

		//case 2
		//  current have one child
		if (current->getLeft() == nullptr) {
			if (current == this->root) {
				this->root = current->getRight();
			}
			else if (parent->getValue() < current->getValue()) {
				parent->setRight(current->getRight());
			}
			else {
				parent->setLeft(current->getRight());
			}
			return true;
		}
		else if (current->getRight() == nullptr) {
			if (current == this->root) {
				this->root = current->getLeft();
			}
			else if (parent->getValue() < current->getValue()) {
				parent->setRight(current->getLeft());
			}
			else {
				parent->setLeft(current->getLeft());
			}
			return true;
		}

		//case 3
		//  current have left and right child
		if ((current->getLeft() != nullptr) && (current->getRight() != nullptr)) {
			BinarySearchTreeNode *successor = getBiggestNodeFromLeftSubtree(current);
			successor->setLeft(current->getLeft());
			successor->setRight(current->getRight());
			if (current == this->root) {
				this->root = successor;
			}
			else if (parent->getValue() < successor->getValue()) {
				parent->setRight(successor);
			}
			else {
				parent->setLeft(successor);
			}
			return true;
		}
		return false;
	}

	void print() {
		int length = 1;
		BinarySearchTreeNode** nodes = new BinarySearchTreeNode*[length];
		nodes[0] = this->root;

		if (this->root == nullptr) {
			return;
		}
		int height = max(getHeight(this->root->getLeft()), getHeight(this->root->getRight()));

		while (haveNodesToPrint(nodes, length)) {
			int offset = (int) pow(2, height + 1);
			for (int i = 0; i < length; i++) {
				printSpace(offset); // offset before every number
				if (nodes[i] != nullptr) {
					cout << nodes[i]->getValue();
				}
				else {
					cout << "  ";
				}
				printSpace(offset - 2); // minus 2 because we expect the number to have length of 2

			}
			//print the spaces
			for (int i = 0; i <= height; i++) {
				cout << endl;
			}

			// prepare for printing next line
			
			BinarySearchTreeNode** newNodes = new BinarySearchTreeNode*[length*2]; // every node have 2 childs
			int index = 0;
			for (int j = 0 ; j < length; j++){
				if (nodes[j] != nullptr) {
					newNodes[index] = nodes[j]->getLeft();
					index++;
					newNodes[index] = nodes[j]->getRight();
					index++;
				}
				else {
					//even if it is nullptr you need to print spaces
					newNodes[index] = nullptr;
					index++;
					newNodes[index] = nullptr;
					index++;
				}
			}
			length = length * 2;
			nodes = newNodes;
			height--;
		}
	}

private: 
	int getHeight(BinarySearchTreeNode* current) {
		if (current == nullptr) {
			return 0;
		}
		return 1 + max(getHeight(current->getLeft()), getHeight(current->getRight()));
	}

	BinarySearchTreeNode* getBiggestNodeFromLeftSubtree(BinarySearchTreeNode* start) {

		BinarySearchTreeNode *parent = start->getLeft(); // in left subtree
		BinarySearchTreeNode *rightChild = parent->getRight(); // represents most right node

		if (rightChild == nullptr) { // in case left subtree of start have no right child
			start->setLeft(parent->getLeft());
			return parent;
		}

		while (rightChild->getRight() != nullptr) {
			parent = rightChild;
			rightChild = rightChild->getRight();
		}
		//in rightChild is the most right (biggest) node
		//  if biggest node have leftChild it will be set as right child of parent
		//  if leftChild is null, the right child of parent will be also null
		parent->setRight(rightChild->getLeft());

		return rightChild;
	}

	bool haveNodesToPrint(BinarySearchTreeNode** nodes, int n) {
		for(int i =0; i < n; i++){
			if (nodes[i] != nullptr) {
				return true;
			}
		}
		return false;
	}

	void printSpace(int n) {
		while (n != 0) {
			cout << " ";
			n--;
		}
	}
};

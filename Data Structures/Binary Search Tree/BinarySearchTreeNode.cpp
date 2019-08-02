#include "stdafx.h"

class BinarySearchTreeNode {
	int value;
	BinarySearchTreeNode *left;
	BinarySearchTreeNode *right;
public :
	BinarySearchTreeNode(int value) {
		this->value = value;
		this->left = nullptr;
		this->right = nullptr;
	};

	int getValue() {
		return value;
	};

	void setValue(int value) {
		value = value;
	}

	BinarySearchTreeNode* getLeft() {
		return left;
	}

	void setLeft(BinarySearchTreeNode* left) {
		this->left = left;
	}

	BinarySearchTreeNode* getRight() {
		return right;
	}

	void setRight(BinarySearchTreeNode* right) {
		this->right = right;
	}
};

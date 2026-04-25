#pragma once
#include "Node.h"

class AVLTree {
	Node* root;
private:
	Node* insert(Node* curr, int _key);
	Node* findMin(Node* curr);
	Node* removeMin(Node* curr);
	Node* remove(Node* curr, int _key);
	Node* copy(Node* other);
	Node* rotateSmallLeft(Node* curr);
	Node* rotateSmallRight(Node* curr);
	Node* balance(Node* curr);
	int getHeight(Node* curr);
	int updateHeight(Node* curr);
	int getDiff(Node* curr);
	void clear(Node* curr);
public:
	AVLTree() { root = nullptr; }
	void insert(int _key);
	bool find(int _key);
	AVLTree(const AVLTree& other);
	void delKey(int key);
	
	
	~AVLTree();
	
};
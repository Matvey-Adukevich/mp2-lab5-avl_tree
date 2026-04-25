#pragma once

//template<typename T>
struct Node {
	int key;
	int value;
	int height;
	Node* left;
	Node* right;
	Node(int _key) :key(_key), value(0), height(1), left(nullptr), right(nullptr) {}
	~Node(){}
};



#pragma once

//template<typename T>
struct Node {
	int key;
	int value;
	Node* left;
	Node* right;
	Node(int _key) :key(_key), value(0), left(nullptr), right(nullptr) {}
};



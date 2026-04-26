#pragma once

template<typename K, typename V>
struct Node {
	K key;
	V value;
	int height;
	Node* left;
	Node* right;
	Node(const K& _key) :key(_key), value(V()), height(1), left(nullptr), right(nullptr) {}
	Node(const K& _key, const V& _value):key(_key), value(_value), height(1), left(nullptr), right(nullptr){}
	~Node(){}
};



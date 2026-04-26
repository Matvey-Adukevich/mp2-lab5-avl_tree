#pragma once
#include "AVLTree.h"
#include <stdexcept>

template<typename K, typename V>
class MapAVL {
	AVLTree<K, V> tree;
public:
	void insert(const K& key, const V& value) {
		tree.insert(key, value);
	}

	void delKey(const K& key) {
		tree.delKey(key);
	}

	V* find(const K& key) {
		V* tmp = tree.find(key);
		if (tmp == nullptr) {
			throw std::out_of_range("no key in map");
		}
		return tmp;
	}

	bool inMap(const K& key) {
		return tree.find(key) != nullptr;
	}

	V& operator[](const K& key) {
		V* val = tree.find(key);
		if (!val) {
			tree.insert(key, V());
			val = tree.find(key);
		}
		return *val;
	}
};
#pragma once

#include <functional>
#include <vector>
#include <random>
#include <numeric>
#include "tset.h"

#define ATTEMPTS 10

template<typename K, typename V>
struct Pair {
	K key;
	V value;
	Pair(K _key, V _value) :key(_key), value(_value) {}
	Pair() :key(K()), value(V()) {}
};

template<typename K, typename V>
class HashMap {
	std::vector<Pair<K, V>> data;
	TSet _using;
	int size;
	int A, B;
public:
	HashMap(int _size) :_using(_size), data(_size), size(_size), A(7), B(3) {}
	int hash(int p) { return (p * A + B) % size; }
	int find(K key) {
		std::hash<K> hasher;
		int p = hasher(key);
		for (int i = 0; i < ATTEMPTS; i++) {
			p = hash(p);
			if (data[p].key == key && _using.IsMember(p)) {
				return p;
			}
			//if (_using.IsMember(p)) {

			//}
			//p = hash(p);
		}
		return -1;
	}
	void regenAB() {
		std::random_device rd;
		std::mt19937 gen(rd);
		std::uniform_int_distribution distA(1, 1000);
		std::uniform_int_distribution distB(1, 1000);
		int flag = 0;
		while(!flag){
			A = distA(gen);
			B = distB(gen);
			if (std::gcd(A, B) == 1) {
				flag = 1;
			}
		}
	}
	void resize() {
		HashMap<K, V> new_hashmap(size * 2);
		new_hashmap.A = this->A;
		new_hashmap.B = this->B;
		for (int i = 0; i < size; i++) {
			if (_using.IsMember(i)) {
				new_hashmap.insert(data[i].key, data[i].value);
			}
		}
		data = new_hashmap.data;
		_using = new_hashmap._using;
		size = new_hashmap.size;
		//A = new_hashmap.A;
		//B = new_hashmap.B;
	}
	void insert(K _key, V _value) {
		int pos = find(_key);
		if (pos != -1) {
			data[pos].value = _value;
			return;
		}
		std::hash<K> hasher;
		int p = hasher(_key);
		for (int i = 0; i < ATTEMPTS; i++) {
			p = hash(p);
			if (!_using.IsMember(p)) {
				data[p] = { _key, _value };
				_using.InsElem(p);
				return;
			}
		}
		resize();
		pos = find(_key);
		if (pos != -1) {
			data[pos].value = _value;
			return;
		}
		p = hasher(_key);
		for (int i = 0; i < ATTEMPTS; i++) {
			p = hash(p);
			if (!_using.IsMember(p)) {
				data[p] = { _key, _value };
				_using.InsElem(p);
				return;
			}
		}
		regenAB();
		HashMap<K, V> new_hashmap(size);
		new_hashmap.A = this->A;
		new_hashmap.B = this->B;
		for (int i = 0; i < size; i++) {
			if (_using.IsMember(i)) {
				new_hashmap.insert(data[i].key, data[i].value);
			}
		}
		data = new_hashmap.data;
		size = new_hashmap.size;
		_using = new_hashmap._using;
		pos = find(_key);
		if (pos != -1) {
			data[pos].value = _value;
			return;
		}
		p = hasher(_key);
		for (int i = 0; i < ATTEMPTS; i++) {
			p = hash(p);
			if (!_using.IsMember(p)) {
				data[p] = { _key, _value };
				_using.InsElem(p);
				return;
			}
		}
		throw std::out_of_range("error: cant insert elem in hashmap");
		//*this = std::move(new)
		//insert(_key, _value);
	}

	bool inMap(K _key) {
		int pos = find(_key);
		return pos != -1;
	}

	V& operator[](K _key) {
		int pos = find(_key);
		if (pos == -1) {
			insert(_key, V());
			pos = find(_key);
			//return &data[pos].value;
		}
		return data[pos].value;
	}

	void delElem(K _key) {
		int pos = find(_key);
		if (pos != -1) {
			//this->data.erase(pos);
			_using.DelElem(pos);
			data[pos] = Pair<K, V>(K(), V());
			//return;
		}
		return;

	}
	
};
#include "BSTree.h"
#include <stdexcept>
#include "tstack.h"

void BSTree::insert(int _key) {
	if (!root) {
		root = new Node(_key);
		return;
	}
	Node* t = root;
	while (true) {
		if (t->key == _key) throw - 1;
		if (t->key > _key) {
			if (!t->left) {
				t->left = new Node(_key);
				return;
			}
			t = t->left;
		}
		else {
			if (!t->right) {
				t->right = new Node(_key);
				return;
			}
			t = t->right;
		}
	}
}

bool BSTree::find(int _key) {
	if (!root) return false;
	Node* t = root;
	while (t) {
		if (t->key == _key) return true;
		else if (t->key > _key) {
			t = t->left;
		}
		else {
			t = t->right;
		}
	}
	return false;
}
Node* BSTree::copy(Node* other){
	if (!other) return nullptr;
	Node* res = new Node(other->key);
	res->value = other->value;
	res->left = copy(other->left);
	res->right = copy(other->right);
	return res;
}

BSTree::BSTree(const BSTree& other) {
	root = copy(other.root);
}

void BSTree::del_key(int key) {
	if (!root) throw std::out_of_range("error del key no root");
	Node* t = root;
	TStack<Node*> path;
	while (t) {
		if (t->key == key) break;
		path.push(t);
		if (t->key > key) t = t->left;
		else t = t->right;
	}
	if (!t) throw std::out_of_range("error del key");
	if (t->left && t->right) {
		Node* tl = t->left;
		while (tl->right) {
			path.push(tl);
			tl = tl->right;
		}
		int tmp = t->key;
		t->key = tl->key;
		tl->key = tmp;
		Node* c = path.pop();
		if (t == c) c->left = tl->left;
		else c->right = tl->left;
		delete tl;
	}
	else {
		Node* td = t->left;
		if (!td) td = t->right;
		if (path.isEmpty()) {
			root = td;
		}
		else {
			Node* c = path.pop();
			if (c->left == t) c->left = td;
			else c->right = td;
		}
		delete t;
	}
}
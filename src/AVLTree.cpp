#include "AVLTree.h"
#include <stdexcept>
#include <algorithm>
#include "tstack.h"

Node* AVLTree::insert(Node* curr, int _key) {
	/*if (!curr) {
		curr = new Node(_key);
		return curr;
	}*/
	/*Node* t = root;
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
	}*/
	if (!curr) return new Node(_key);
	if (_key < curr->key) {
		curr->left = insert(curr->left, _key);
	}
	else if(_key > curr->key){
		curr->right = insert(curr->right, _key);
	}
	else {
		throw std::out_of_range("already exist");
	}
	return balance(curr);
}

void AVLTree::insert(int _key) {
	root = insert(root, _key);
}

bool AVLTree::find(int _key) {
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
Node* AVLTree::copy(Node* other){
	if (!other) return nullptr;
	Node* res = new Node(other->key);
	res->value = other->value;
	res->left = copy(other->left);
	res->right = copy(other->right);
	return res;
}

AVLTree::AVLTree(const AVLTree& other) {
	root = copy(other.root);
}

Node* AVLTree::findMin(Node* curr) {
	if (!curr) return NULL;
	if (curr->left) {
		return findMin(curr->left);
	} 
	return curr;
}

Node* AVLTree::removeMin(Node* curr) {
	if (!curr) return NULL;
	if (curr->left == 0) {
		return curr->right;
	}
	curr->left = removeMin(curr->left);
	return balance(curr);
}

Node* AVLTree::remove(Node* curr, int _key) {
	if (!curr) return 0;
	if (_key < curr->key) {
		curr->left = remove(curr->left, _key);
	}
	else if (_key > curr->key) {
		curr->right = remove(curr->right, _key);
	}
	else {
		Node* q = curr->left;
		Node* r = curr->right;
		delete curr;
		if (!r) return q;
		Node* min = findMin(r);
		min->right = removeMin(r);
		min->left = q;
		return balance(min);
	}
	return balance(curr);
}

void AVLTree::delKey(int key) {
	root = remove(root, key);
	//	if (!root) throw std::out_of_range("error del key no root");
	//	Node* t = root;
	//	TStack<Node*> path;
	//	while (t) {
	//		if (t->key == key) break;
	//		path.push(t);
	//		if (t->key > key) t = t->left;
	//		else t = t->right;
	//	}
	//	if (!t) throw std::out_of_range("error del key no key in avl tree");
	//	if (t->left && t->right) {
	//		Node* tl = t->left;
	//		while (tl->right) {
	//			path.push(tl);
	//			tl = tl->right;
	//		}
	//		int tmp = t->key;
	//		t->key = tl->key;
	//		tl->key = tmp;
	//		Node* c = path.pop();
	//		if (t == c) c->left = tl->left;
	//		else c->right = tl->left;
	//		delete tl;
	//	}
	//	else {
	//		Node* td = t->left;
	//		if (!td) td = t->right;
	//		if (path.isEmpty()) {
	//			root = td;
	//		}
	//		else {
	//			Node* c = path.pop();
	//			if (c->left == t) c->left = td;
	//			else c->right = td;
	//		}
	//		delete t;
	//	}
}


int AVLTree::getHeight(Node* curr) {
	if (curr == 0) return 0;
	int hl = 0;
	int hr = 0;
	if (curr->left != 0) {
		hl = curr->left->height;
	}
	if (curr->right != 0) {
		hr = curr->right->height;
	}
	return (max(hl, hr)) + 1;
}

int AVLTree::updateHeight(Node* curr){
	if (!curr) return 0;
	int lh = 0, rh = 0;
	if (curr->left) {
		lh = curr->left->height;
	}
	if (curr->right) {
		rh = curr->right->height;
	}
	curr->height = std::max(rh, lh) + 1;
	return curr->height;
}

int AVLTree::getDiff(Node* curr) {
	if (!curr) return 0;
	return updateHeight(curr->right) - updateHeight(curr->left);
}

Node* AVLTree::rotateSmallLeft(Node* curr) {
	/*int b = getDiff(curr->left, curr->right);
	if (b < 2) return curr;*/
	//Node* right = curr->right;
	/*if (getDiff(right->left, right->right) < 0) {
		return curr;
	}*/
	/*Node* p1 = curr->left;
	Node* p2 = right->left;
	Node* p3 = right->right;*/
	Node* y = curr->right;
	Node* t = y->left;

	curr->right = t;
	y->left = curr;
	/*right->left = curr;
	right->right = p3;*/
	updateHeight(curr);
	updateHeight(y);
	return y;
}

Node* AVLTree::rotateSmallRight(Node* curr) {
	Node* x = curr->left;
	Node* t = x->right;

	x->right = curr;
	curr->left = t;
	updateHeight(curr);
	updateHeight(x);
	return x;
}

Node* AVLTree::balance(Node* curr) {
	updateHeight(curr);
	if (getDiff(curr) == 2) {
		if (getDiff(curr->right) < 0) {
			curr->right = rotateSmallRight(curr->right);
		}
		return rotateSmallLeft(curr);
	}
	else if (getDiff(curr) == -2) {
		if (getDiff(curr->left) > 0) {
			curr->left = rotateSmallLeft(curr->left);
		}
		return rotateSmallRight(curr);
	}
	return curr;
}

void AVLTree::clear(Node* curr) {
	if (!curr) return;
	clear(curr->left);
	clear(curr->right);
	delete curr;
}

AVLTree::~AVLTree() {
	clear(root);
}


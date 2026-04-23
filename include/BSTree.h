class BSTree {
	Node* root;
public:
	BSTree() { root = nullptr; }
	void insert(int _val);
	bool find(int _val);
	Node* copy(Note* other);
	BSTree(const BSTree& other);
	void del_val(int val);
};
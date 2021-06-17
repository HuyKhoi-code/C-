#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *Left;
	Node *Right;
};
typedef Node *tree;
void CreateTree(tree &root) {
	root = NULL;
}
Node* CreateNode(int a) {
	Node* p = new Node;
	p->data = a;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void AddNode(tree &root, int a) {
	if (root != NULL) {
		if (root->data == a)
			return ;
		if (root->data > a)
			AddNode(root->Left, a);
		if (root->data < a)
			AddNode(root->Right, a);
	}
	else {
		root = CreateNode(a);
	}
}
void DemNode(tree root, int &dem) {
	if (root != NULL) {
		dem++;
		DemNode(root->Left,dem);
		DemNode(root->Right,dem);
	}
}
int main() {
	tree t;
	CreateTree(t);
	int x;
	cin >> x;
	while (x != 0) {
		AddNode(t, x);
		cin >> x;
	}
	int dem = 0;
	DemNode(t,dem);
	cout << dem;
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *Left;
	Node* Right;
};
typedef Node *tree;
void CreateTree(tree &t) {
	t = NULL;
}
Node* CreateNode(int a) {
	Node *p = new Node;
	p->data = a;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void AddNode(tree &t, int a) {
	if (t == NULL)
		t = CreateNode(a);
	else {
		if (t->data == a)
			return;
		if (t->data > a)
			AddNode(t->Left, a);
		if (t->data < a)
			AddNode(t->Right, a);
	}
}
int Bac(tree t) {
	if (t != NULL) {
		if (t->Left == NULL && t->Right == NULL)
			return 2;
		if (t->Left == NULL || t->Right == NULL)
			return 1;
		if (t->Right != NULL && t->Left != NULL)
			return 0;
	}
	return -1;
}
void NodeBac1(tree t, int &dem) {
	if (t != NULL) {
		NodeBac1(t->Left, dem);
		if (Bac(t) == 1)
			dem++;
		NodeBac1(t->Right, dem);
	}
}
int main() {
	tree t;
	CreateTree(t);
	int x
	cin >> x;
	int dem = 0;
	while (x != 0) {
		AddNode(t, x);
		cin >> x;
	}
	NodeBac1(t, dem);
	system("pause");
	return 0;
}

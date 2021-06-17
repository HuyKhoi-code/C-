#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* Left;
	Node* Right;
};
typedef Node *Tree;
void CreateTree(Tree &t) {
	t = NULL;
}
Node* CreateNode( int a) {
	Node* p = new Node;
	p->data = a;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void AddNode(Tree &t, int a) {
	if (t == NULL) {
		t = CreateNode(a);
	}
	else {
		if (a < t->data)
			AddNode(t->Left, a);
		if (a > t->data)
			AddNode(t->Right, a);
	}
}
int Height(Tree t) {
	if (t == NULL)
		return 0;
	int l = Height(t->Left);
	int r = Height(t->Right);
	if (l > r)
		return Height(t->Left) + 1;
	else
		return Height(t->Right) + 1;
}
int main() {
	Tree t;
	CreateTree(t);
	int a;
	cin >> a;
	while (a != 0) {
		AddNode(t, a);
		cin >> a;
	}
	cout << Height(t);
	system("pause");
	return 0;
}


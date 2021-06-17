#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* Left;
	Node* Right;
};
typedef Node* tree;
void CreateTree(tree &t) {
	t = NULL;
}
Node* CreateNode(int a) {
	Node*p = new Node;
	p->data = a;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void AddNode(tree &t, int a) {
	if (t == NULL)
		t = CreateNode(a);
	else {
		if (t->data < a)
			AddNode(t->Left, a);
		if (t->data < a)
			AddNode(t->Right, a);
	}
}
int Height(tree t) {
	if (t == NULL)
		return 0;
	int l = Height(t->Left);
	int r = Height(t->Right);
	if (l > r)
		return Height(t->Left) + 1;
	else
		return Height(t->Right) + 1;
}
void Level(tree t, int level) {
	if (t == NULL)
		return;
	if (level == 1) {
		cout << t->data;
	}
	else if (level > 1) {
		Level(t->Left, level - 1);
		Level(t->Right, level - 1);
	}
}
void DuyettheoLevel(tree &t) {
	int h = Height(t);
	for (int i = 0; i < h; i++)
		Level(t, i);
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
	DuyettheoLevel(t);
	system("pause");
	return 0;
}

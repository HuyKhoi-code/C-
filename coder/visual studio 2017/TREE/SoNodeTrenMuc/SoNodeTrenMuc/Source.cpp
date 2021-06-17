#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *Left;
	Node *Right;
};
typedef Node* tree;
void CreateTree(tree &t) {
	t = NULL;
}
Node *CreateNode(int a) {
	Node* p = new Node;
	p->data = a;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}
void AddNode(tree &t, int a) {
	if (t != NULL) {
		if (a < t->data)
			AddNode(t->Left, a);
		if (a > t->data)
			AddNode(t->Right, a);
	}
	else
		t = CreateNode(a);
}
int Level(tree &t, int a, int level) {
	if (t == NULL)
		return 0;
	if (t->data == a)
		return level;
	int leveldown = Level(t->Left, a, level + 1);
	if (leveldown != 0)
		return leveldown;
	leveldown = Level(t->Right, a, level + 1);
	return leveldown;
}
int getlevel(tree &t, int a) {
	return Level(t, a, 0);
}
void NumberOfLevel(tree &t, int a,int &dem) {
	NumberOfLevel(t->Left, a,dem);
	int dem;
	if (a==getlevel(t,t->data))
		dem++;
	NumberOfLevel(t->Right, a, dem);
}
int main() {
	int a[100];
	tree t;
	CreateTree(t);
	int x;
	cin >> x;
	while (x != 0) {
		AddNode(t, x);
		cin >> x;
	}
	int dem = 0;
	int y;
	cin >> y;
	while (y != 0) {
		NumberOfLevel(t, y, dem);
		for (int i = 0; i < 1; i++)
			cout << dem;
		cin >> y;
	}
	cout << dem;
	system("pause");
	return 0;
}
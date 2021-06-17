#include <iostream>
#include <vector>
using namespace std;
struct Node {
	int data;
	Node *Left;
	Node *Right;
};
typedef Node *tree;
void CreateTree(tree &t) {
	t = NULL;
}
Node *CreateNode(int a) {
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
		if (a < t->data)
			AddNode(t->Left, a);
		if (a > t->data)
			AddNode(t->Right, a);
	}
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
bool Search(tree t, int x) {
	if (t != NULL) {
		if (t->data == x)
			return true;
		return t->data > x ? Search(t->Left, x) : Search(t->Right, x);
	}
	return false;
}
int main() {
	tree t;
	int a[100];
	CreateTree(t);
	int k;
	cin >> k;
	while (k != 0) {
		AddNode(t, k);
		cin >> k;
	}
	int dem=0;
	cin >> k;
	int i=0;
	while (k!= 0){
		dem++;
		a[i] = getlevel(t, k);
		cin >> k;
		i++;
	}
	for (int i = 0; i < dem; i++) {
		cout << a[i] << "\n";
	}
	system("pause");
	return 0;
}
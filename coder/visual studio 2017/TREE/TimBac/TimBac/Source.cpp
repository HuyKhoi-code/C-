#include<iostream>
#include<vector>
using namespace std;
struct Node {
	int data;
	Node* Left;
	Node* Right;
};
typedef Node *tree;
void CreateTree(tree &t) {
	t = NULL;
}
void AddNode(tree &t, int a) {
	if (t == NULL) {
		Node* p = new Node;
		p->data = a;
		p->Left = NULL;
		p->Right = NULL;
		t = p;
	}
	else {
		if (a < t->data)
			AddNode(t->Left, a);
		if (a > t->data)
			AddNode(t->Right, a);
	}
}
int  Bac(tree &t) {
	int dem;
	if (t->Left == NULL && t->Right == NULL)
		dem = 0;
	if (t->Left == NULL || t->Right == NULL)
		dem = 1;
	else
		dem = 2;
	return dem;
}
bool Search(tree t, int x) {
	if (t != NULL) {
		if (t->data == x)
			return true;
		return t->data > x ? Search(t->Left, x) : Search(t->Right, x); 
	}
	return false;
}
void TimBac(tree t,int x,vector<int> &r) {
	if (t != NULL) {
		TimBac(t->Left,x,r);
		if (t->data == x)
			r.push_back(Bac(t));
		TimBac(t->Right,x,r);
	}
}
int main() {
	tree t;
	CreateTree(t);
	vector<int> r;
	int x;
	cin >> x;
	while (x != 0) {
		AddNode(t, x);
		cin >> x;
	}
	cin >> x;
	while (x != 0) {
		if (Search(t, x) == false) r.push_back(-1);
		else TimBac(t, x,r);
		cin >> x;
	}
	for (int i = 0; i < r.size(); ++i) cout << r[i] << "\n";
	system("pause");
	return 0;

}
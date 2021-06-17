#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *Left;
	Node* Right;
};
typedef Node* tree;
void CreateTree(tree &t) {
	t = NULL;
}
Node* CreateNode(int a) {
	Node* p = new Node;
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
			AddNode(t->Right, a);
		if (t->data > a)
			AddNode(t->Left, a);
		if (t->data == a)
			return;
	}
}

void DiTimNodeTheMang(tree &X, tree &Y){
	if (Y->Left != NULL){
		DiTimNodeTheMang(X, Y->Left);
	}
	else{
		X->data = Y->data;
		X = Y;
		Y = Y->Right;
	}
}
void XoaNode(tree &t, int data){
	if (t == NULL){
		return;
	}
	else{
		if (data < t->data){
			XoaNode(t->Left, data);
		}
		else if (data > t->data){
			XoaNode(t->Right, data);
		}
		else{
			Node *X = t;
			if (t->Left == NULL){
				t = t->Right;
			}
			else if (t->Right == NULL){
				t = t->Left;
			}
			else
			{
				DiTimNodeTheMang(X, t->Right);
			}
			delete X;
		}
	}
}void NLR(tree t) {
	if (t != NULL) {
		cout << t->data << " ";
		NLR(t->Left);
		NLR(t->Right);
	}
}
void LNR(tree t) {
	if (t != NULL) {
		LNR(t->Left);
		cout << t->data << " ";
		LNR(t->Right);
	}
}
void NRL(tree t) {
	if (t != NULL) {
		cout << t->data << " ";
		NRL(t->Right);
		NRL(t->Left);
	}
}
void RNL(tree t) {
	if (t != NULL) {
		RNL(t->Right);
		cout << t->data << " ";
		RNL(t->Left);
	}
}
void LRN(tree t) {
	if (t != NULL) {
		LRN(t->Left);
		LRN(t->Right);
		cout << t->data << " ";
	}
}
void RLN(tree t) {
	if (t != NULL) {
		RLN(t->Right);
		RLN(t->Left);
		cout << t->data << " ";
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
	cin >> x;
	while (x != 0) {
		XoaNode(t, x);
		cin >> x;
	}
	cout << "\nNLR ";
	NLR(t);
	cout << "\nNRL ";
	NRL(t);
	cout << "\nLNR ";
	LNR(t);
	cout << "\nRNL ";
	RNL(t);
	cout << "\nLRN ";
	LRN(t);
	cout << "\nRLN ";
	RLN(t);
	system("pause");
	return 0;
}
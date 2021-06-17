#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *pLeft;
	Node *pRight;
};
typedef Node* Tree;
void CreateTree(Tree &t) {
	t = NULL;
}
void AddNode(Tree &t, int data) {
	if (t == NULL) {
		Node*p = new Node;
		p->data = data;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else {
		if (data < t->data) AddNode(t->pLeft, data);
		else if (data > t->data) AddNode(t->pRight, data);
	}
}
void Duyet_NLR(Tree t) {
	if (t != NULL) {
		cout << t->data << " ";
		Duyet_NLR(t->pLeft);
		Duyet_NLR(t->pRight);
	}
}
void LNR(Tree t) {
	if (t != NULL) {
		LNR(t->pLeft);
		cout << t->data<<" ";
		LNR(t->pRight);
	}
}
void NRL(Tree t) {
	if (t != NULL) {
		cout << t->data << " ";
		NRL(t->pRight);
		NRL(t->pLeft);
	}
}
void RNL(Tree t) {
	if (t != NULL) {
		RNL(t->pRight);
		cout << t->data << " ";
		RNL(t->pLeft);
	}
}
void LRN(Tree t) {
	if (t != NULL) {
		LRN(t->pLeft);
		LRN(t->pRight);
		cout << t->data << " ";
	}
}
void RLN(Tree t) {
	if (t != NULL) {
		RLN(t->pRight);
		RLN(t->pLeft);
		cout << t->data << " ";
	}
}
int main() {
	Tree t;
	CreateTree(t);
	int x;
	cin >> x;
	while (x != 0) {
		AddNode(t, x);
		cin >> x;
	}
	cout << "NLR ";
	Duyet_NLR(t);
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
}

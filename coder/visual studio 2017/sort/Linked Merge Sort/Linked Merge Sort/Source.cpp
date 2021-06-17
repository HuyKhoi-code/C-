#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *pNext;
};
struct List {
	Node *pHead;
	Node *pTail;
};
void CreateList(List &l) {
	l.pHead = l.pTail = NULL;
};
Node *CreateNode(int x) {
	Node *p;
	p = new Node;
	if (p == NULL) exit(1);
	p->data = x;
	p->pNext = NULL;
	return p;
}
void AddTail(List &l, Node *p) {
	if (l.pHead == NULL) {
		l.pHead = l.pTail = p;
	}
	else {
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
void Xuat(List l) {
	for (Node *p = l.pHead; p != NULL; p = p->pNext) {
		cout << p->data << " ";
	}
}
void Partition(List &l, List &l1, List &l2) {
	int lane = 0;
	CreateList(l1); CreateList(l2);
	while (l.pHead) {
		Node *p = l.pHead;
		l.pHead = l.pHead->pNext;
		p->pNext = NULL;
		if (lane) AddTail(l2, p);
		else AddTail(l1, p);
		lane = !lane;
	}
}
void Merge(List &l1, List &l2, List &l) {
	Node *p;
	while (l1.pHead && l2.pHead) {
		if (l1.pHead->data > l2.pHead->data) {
			p = l1.pHead;
			l1.pHead = p->pNext;
		}
		else {
			p = l2.pHead;
			l2.pHead = p->pNext;
		}
		p->pNext = NULL;
		AddTail(l, p);
	}
	while (l1.pHead) {
		p = l1.pHead;
		l1.pHead = p->pNext;
		p->pNext = NULL;
		AddTail(l, p);
	}
	while (l2.pHead) {
		p = l2.pHead;
		l2.pHead = p->pNext;
		p->pNext = NULL;
		AddTail(l, p);
	}
}
void MergeSort(List &l) {
	if (l.pHead == NULL || l.pHead == l.pTail) return;
	List l1, l2;
	Partition(l, l1, l2);
	MergeSort(l1); MergeSort(l2);
	Merge(l1, l2, l);
}
int main() {
	int n, x;
	Node *p;
	List l;
	CreateList(l);
	cin >> x;
	while (x != -1) {
		p = CreateNode(x);
		AddTail(l, p);
		cin >> x;
	}
	MergeSort(l);
	Xuat(l);
	system("pause");
	return 0;
}
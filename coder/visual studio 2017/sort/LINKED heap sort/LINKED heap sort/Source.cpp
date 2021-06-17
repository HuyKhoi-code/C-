#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *Next;
};
struct List {
	Node *Head;
	Node* Tail;
};
void CreateList(List & L) {
	L.Head = NULL;
	L.Tail = NULL;
}
Node* CreateNode(int a) {
	Node*p = new Node;
	if (p == NULL)
		exit(1);
	p->data = a;
	p->Next = NULL;
	return p;
}
void AddTail(List &L, Node*p) {
	if (L.Head == NULL) {
		L.Head = L.Tail = NULL;
	}
	else {
		L.Tail->Next = p;
		L.Tail = p;
	}
}
void QuickSort(List &L) {
	List l1, l2;
	CreateList(l1);
	CreateList(l2);
	Node* p = L.Head;
	while (p != NULL) {
		if (p->data > L.Head->data)
			AddTail(l1, p);
		if (p->data < L.Head->data)
			AddTail(l2, p);
		p = p->Next;
	}
	QuickSort(l1);
	QuickSort(l2);
	if (l1.Head == NULL)
		L.Head = p;
	else {
		L.Head = l1.Head;
		l1.Tail->Next = p;
	}
	p->Next = l2.Head;
	if (l2.Head == NULL)
		L.Tail = p;
	else
		L.Tail = l2.Tail;
}
void nhap(List &L, int n) {
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		Node*p = CreateNode(a);
		AddTail(L, p);
	}
}
void xuat(List &L) {
	Node*p = L.Head;
	while (p != NULL) {
		cout << p->data;
		p = p->Next;
	}
}
int main() {
	List L;
	CreateList(L);
	int n;
	cin >> n;
	nhap(L, n);
	QuickSort(L);
	xuat(L);
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *Next;
};
struct List {
	Node *Head;
	Node *Tail;
};
void CreateList(List &L) {
	L.Head = NULL;
	L.Tail = NULL;
}
Node *CreateNode(int a) {
	Node* p = new Node;
	if (p == NULL)
		exit(1);
	else {
		p->data = a;
		p->Next = NULL;
	}
	return p;
}
void InsertTail(List& L, Node*p) {
	if (L.Head == NULL) {
		L.Head = L.Tail = p;
	}
	L.Tail->Next = p;
	L.Tail = p;
}
void Nhap(List &L, int n) {
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		Node* p = CreateNode(a);
		InsertTail(L, p);
	}
}
void xuat(List &L) {
	Node* p = L.Head;
	if (L.Head == NULL)
		L.Head = L.Tail = p;
	while (p != NULL) {
		cout << p->data;
		p = p->Next;
	}
}
void InsertionSort(List &L) {
	
}
int main() {
	List L;
	CreateList(L);
	int n;
	cin >> n;
	Nhap(L, n);
	xuat(L);
	system("pause");
	return 0;
}
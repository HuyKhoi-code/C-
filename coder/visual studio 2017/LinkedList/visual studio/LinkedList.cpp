#include <pch.h>
#include <iostream>
using namespace std;
struct Node {
	int info;
	Node *pNext;
};
struct List {
	Node *pHead;
	Node *pTail;
};
Node* CreateNode(int a) {
	Node *p;
	p = new Node;
	if (p == NULL)
		exit(1);
	p->info = a;
	p->pNext = NULL;
	return p;
}
void CreateList(List &L) {
	L.pHead = NULL;
	L.pTail = NULL;
}
void insertTail(List &L, Node *p) {
	if (L.pHead == NULL)
		L.pHead = L.pTail = p;
	else{
		L.pTail->pNext = p;
		L.pTail = p;
	}
}
void nhap(List &L, int n) {
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		Node *p = CreateNode(a);
		insertTail(L, p);
	}
}
void out(int a) {
	cout << a<<" ";
}
void xuat(List L) {
	Node *p;
	p = L.pHead;
	while (p != NULL) {
		out(p->info);
		p = p->pNext;
	}
	//out(p->info);
	cout << endl;
}
void AddHead(List &L) {
	int a;
	cout << "nhap so phan tu them vao dau: ";
	cin >> a;
	Node* p=CreateNode(a);
	Node* q;
	q = L.pHead;
	if (q == NULL) {
		p = L.pHead = L.pTail;
	}
	else {
		p->pNext = L.pHead;
		L.pHead = p;
	}
}
void AddTail(List &L) {
	int a;
	cout << "nhap phan tu them vao cuoi: ";
	cin >> a;
	Node*p = CreateNode(a);
	Node*q = L.pTail;
	if (L.pHead == NULL) {
		p = L.pHead = L.pTail;
	}
	else {
		q->pNext = p;
		p = L.pTail;
	}
}
Node* Find(List &L,int a) {
	Node* p = L.pHead;
	while (p != NULL && p->info!=a) {
		p = p->pNext;
		if (p == NULL) {
			cout << "khong tim thay phan tu";
			exit(1);
		}
	}
	return p;
}
void AddMiddle(List &L) {
	int b;
	cout << "nhap phan tu de them vao sau: ";
	cin >> b;
	int a;
	cout << "nhap phan tu can them: ";
	cin >> a;
	Node* p = CreateNode(a);
	Node* q = Find(L,b);
	if (q != NULL) {
		p->pNext = q->pNext;
		q->pNext = p;
		if (q == L.pTail)
			p = L.pTail;
	}
}
void XoaSauq(List &L, Node* q,int a) {
	Node* p;
	if (q != NULL) {
		p = q->pNext;
		if (p != NULL) {
			if (p == L.pTail)
				L.pTail = q;
			q->pNext = p->pNext;
			p->info = a;
			delete p;
		}
	}
}
void XoaPhantu(List &L) {
	int a;
	cout << "nhap phan tu can xoa: ";
	cin >> a;
	Node* p=L.pHead;
	Node* q=NULL;
	while (p != NULL && p->info != a) {
		q = p;
		p = p->pNext;
		if (p == NULL) {
			cout << "khong tim thay phan tu";
			exit(1);
		}
	}
		if (q != NULL)
			XoaSauq(L, q, a);
		if (p == L.pHead) {
			L.pHead = L.pHead->pNext;
		}
		
}
	
void vitri(List &L) {
	int a;
	cout << "Nhap phan tu can tim vi tri: ";
	cin >> a;
	Node *p;
	p = L.pHead;
	int dem = 1;
	while (p->info != a) {
		if (p != NULL) {
			p = p->pNext;
		}
		if (p == NULL) {
			cout << "ko tim thay a";
			exit(1);
		}
		dem++;
	}
	cout << "vi tri trong list: ";
	cout<< dem<<endl;
}
int main() {
	List L;
	int n;
	cin >> n;
	CreateList(L);
	nhap(L,n);
	AddHead(L);
	AddTail(L);
	AddMiddle(L);
	XoaPhantu(L);
	vitri(L);
	xuat(L);
	return 0;
}

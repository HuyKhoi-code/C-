#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
struct CuaHang {
	string Name;
	int Quantity;
	int FeedBack;
	float Distance;
};
struct Node {
	CuaHang data;
	Node* Next;
};
struct List {
	Node* Head;
	Node* Tail;
};
void CreateList(List &L) {
	L.Head = NULL;
	L.Tail = NULL;
}
Node* CreateNode(CuaHang a) {
	Node*p = new Node;
	if (p == NULL)
		exit(1);
	else {
		p->data = a;
		p->Next = NULL;
	}
	return p;
}
void insertTail(List &L, Node*p) {
	if (L.Head == NULL)
		L.Head = L.Tail = p;
	else {
		L.Tail->Next = p;
		L.Tail = p;
	}
}
void Nhap1CuaHang(CuaHang &a) {
	cout << "\nnhap ten cua hang: ";
	cin.ignore();
	getline(cin, a.Name);
	cout << "nhap so luong hang hoa: ";
	cin >> a.Quantity;
	cout << "nhap ti le danh gia tot cua khach hang: ";
	cin >> a.FeedBack;
	cout << "khoang cach tu trung tam TP den cua hang: ";
	cin >> a.Distance;
}
void Nhap(List &L, int n) {
	CuaHang a;
	for (int i = 0; i < n; i++) {
		Nhap1CuaHang(a);
		Node*p = CreateNode(a);
		insertTail(L, p);
	}
}
void Xuat1CuaHang(CuaHang a) {
	cout << "\nten cua hang: " << a.Name << endl;
	cout << "so luong hang hoa: " << a.Quantity << endl;
	cout << "ty le khack hang danh gia tot: " << a.FeedBack<<"%" << endl;
	cout << "khoang cach den cua hang: " << a.Distance <<"km"<< endl;
}
void Xuat(List &L) {
	Node*p = L.Head;
	while (p != NULL) {
		Xuat1CuaHang(p->data);
		p = p->Next;
	}
}
void FeedbackGiamDan(List &L) {
	Node* p = L.Head;
	Node* q, *max = NULL;
	while (p != L.Tail) {
		max = p;
		q = p->Next;
		while (q != NULL) {
			if (q->data.FeedBack > p->data.FeedBack) {
				max = q;
			}
			q = q->Next;
		}
		swap(max->data, p->data);
		p = p->Next;
	}
}
void DistanceTangdan(List &L) {
	Node*p = L.Head;
	Node*q, *min = NULL;
	while (p != L.Tail) {
		min = p;
		q = p->Next;
		while (q != NULL) {
			if (q->data.Distance < p->data.Distance)
				min = q;
			q = q->Next;
		}
		swap(min->data, p->data);
		p = p->Next;
	}
}
int main() {
	int n ;
	cout << "nhap so luong cua hang: ";
	cin >> n;
	List L;
	CreateList(L);
	Nhap(L, n);
	cout << "\nsap xep theo muc do danh gia giam dan: ";
	FeedbackGiamDan(L);
	Xuat(L);
	cout << "\nsap xep theo khoang cach den trung tam tang dan: ";
	DistanceTangdan(L);
	Xuat(L);
	system("pause");
	return 0;
}

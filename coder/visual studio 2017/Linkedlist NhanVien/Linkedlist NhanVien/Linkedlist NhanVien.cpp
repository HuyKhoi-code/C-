// Linkedlist NhanVien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
struct Ngaysinh {
	int ngay, thang, nam;
};
struct Nhanvien {
	string Hoten;
	Ngaysinh x;
	int Luong;
};
struct Node {
	Nhanvien info;
	Node *pNext;
};
struct List {
	Node* pHead;
	Node* pTail;
};
Node* CreateNode(Nhanvien a){
	Node* p;
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
void insertTail(List &L, Node*p) {
	if (L.pHead == NULL) {
		 L.pHead = L.pTail=p;
	}
	else {
		L.pTail->pNext = p;
		L.pTail = p;
	}
}
void nhapNgaysinh(Ngaysinh &b) {
	cin >> b.ngay >> b.thang >> b.nam;
}
void xuatNgaysinh(Ngaysinh &b) {
	cout << b.ngay << "/" << b.thang << "/" << b.nam;
}
void Nhap1NV(Nhanvien &a) {
	cout << "\nnhap ten nhan vien: ";
	cin.ignore();
	getline(cin, a.Hoten);
	cout << "nhap ngay sinh: ";
	nhapNgaysinh(a.x);
	cout << "nhap gioi tinh nhan vien: ";
	cin >> a.Gioitinh;
	cout << "nhap luong nhan vien: ";
	cin >> a.Luong;
}
void Xuat1NV(Nhanvien a) {
	cout << "-------------------------";
	cout << "\nten nhan vien: ";
	cout << a.Hoten<<endl;
	cout << "ngay sinh nhan vien: ";
	xuatNgaysinh(a.x);
	cout << endl;
	cout << "gioi tinh nhan vien: ";
		if (a.Gioitinh == 1)
			cout << "NU";
		if (a.Gioitinh == 0)
			cout << "NAM";
	cout << endl;
	cout << "luong nhan vien: " << a.Luong<<endl;
}
void NhapDSNV(List &L, int n) {
	Nhanvien a;
	for (int i = 0; i < n; i++) {
		Nhap1NV(a);
		Node* p = CreateNode(a);
		insertTail(L, p);
	}
}
void XuatDSNV(List &L) {
	Node*p = L.pHead;
	while (p != NULL) {
		Xuat1NV(p->info);
		p = p->pNext;
	}
}
void Nhanvienmoi(List &L) {
	Nhanvien a;
	cout << "\nnhap thong tin nhan vien moi: " << endl;
	Nhap1NV(a);
	Node* p = CreateNode(a);
	if (L.pHead == NULL) {
		L.pHead = L.pTail = p;
	}
	else {
		L.pTail->pNext = p;
		L.pTail = p;
	}
}
void DelAfterQ(List &L, Node* q,Nhanvien a) {
	Node* p;
	while (q != NULL) {
		p = q->pNext;
		if (p != NULL) {
			if (p == L.pTail)
				L.pTail = p;
			q->pNext = p->pNext;
			p->info = a;
			delete p;
		}
	}
}
void SaThai(List &L) {
	Nhanvien a;
	cout << "\nnhap ten nhan vien can xoa: "<<endl;
	cin.ignore();
	getline(cin, a.Hoten);
	Node* p = L.pHead;
	Node * q = NULL;
	while (p != NULL && p->info.Hoten != a.Hoten) {
		q = p;
		p = p->pNext;
		if (p == NULL) {
			cout << "khong ton tai nhan vien";
			exit(1);
		}
	}
	if (q != NULL)
		DelAfterQ(L, q, a);
	if (p == L.pHead) {
		p = L.pHead->pNext;
		L.pHead = L.pHead->pNext;
	}

}
void Nhanvienhon40(List &L) {
	Nhanvien a;
	Node* p = L.pHead;
	while (p != NULL) {
		int t = 2019 - p->info.x.nam;
		if (t > 40) {
			cout << "\nnhan vien tren 40 tuoi: ";
			Xuat1NV(p->info);
		}
		p = p->pNext;
	}	
}
void SoLuongNhanvienLuongcao(List &L) {
	Nhanvien a;
	int dem = 0;
	Node* p = L.pHead;
	while (p != NULL) {
		if (p->info.Luong > 1000)
			dem++;
		p = p->pNext;
	}
	cout<<"\nso nhan vien co luong lon hon 1000000: " << dem;
}
void SapXepNV(List &L) {
	Node* p = L.pHead;
	Node* q, *max = NULL;
	while (p != L.pTail) {
		max=p;
		q = p->pNext;
		while (q != NULL) {
			if (q->info.x.nam > p->info.x.nam) {
				max = q;
			}
			q = q->pNext;
		}
		swap(max->info, p->info);
		p = p->pNext;
	}
	XuatDSNV(L);
}
int main() {
	List L;
	CreateList(L);
	int n;
	cout << "nhap so luong nhan vien: ";
	cin >> n;
	NhapDSNV(L,n);
	//Nhanvienmoi(L);
	//SaThai(L);
	XuatDSNV(L);
	//Nhanvienhon40(L);
	//SoLuongNhanvienLuongcao(L);
	//SapXepNV(L);
	return 0;
}

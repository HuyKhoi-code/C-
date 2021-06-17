#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
struct Node {
	char data;
	Node* pNext;
};
struct Queue {
	Node* pHead;
	Node* pTail;
};
void CreateQueue(Queue &q){
	q.pHead = NULL;
	q.pTail = NULL;
}
Node* CreateNode(char a) {
	Node* p = new Node;
	if (p == NULL)
		exit(1);
	else {
		p->data = a;
		p->pNext = NULL;
	}
	return p;
}
void EnQueue(Queue &q, char a) {
	Node* p = CreateNode(a);
	if (q.pHead == NULL)
		q.pHead = q.pTail = p;
	else {
		q.pTail->pNext = p;
		q.pTail = p;
	}
}
void DeQueue(Queue &q) {
	if (q.pHead == NULL) {
		cout << "hang doi rong";
		exit(1);
	}
	else {
		Node* p = q.pHead;
		cout << q.pHead->data;
		q.pHead = q.pHead->pNext;
		delete p;
	}
}
int main() {
	Queue q;
	CreateQueue(q);
	string str;
	cin.ignore();
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		EnQueue(q, str[i]);
		DeQueue(q);
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
struct Node {
	char data;
	Node* pNext;
};
struct Stack {
	Node* pHead;
	Node* pTail;
};
void CreateStack(Stack &s) {
	s.pHead = NULL;
	s.pTail = NULL;
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
void Push(Stack &s, char a) {
	Node* p = CreateNode(a);
	if (s.pHead == NULL)
		s.pHead = s.pTail = p;
	else {
		p->pNext=s.pHead;
		s.pHead = p;
	}
}
void Pop(Stack &s) {
	if (s.pHead == NULL) {
		cout << "stack ko co ";
		exit(1);
	}
	else {
		Node* p = s.pHead;
		cout << s.pHead->data;
		s.pHead = s.pHead->pNext;
		delete p;
	}
}
int main() {
	string str;
	cin.ignore();
	getline(cin, str);
	Stack s;
	CreateStack(s);
	for (int i = 0; i < str.size(); i++) {
		Push(s, str[i]);
		Pop(s);
	}
	system("pause");
	return 0;
}
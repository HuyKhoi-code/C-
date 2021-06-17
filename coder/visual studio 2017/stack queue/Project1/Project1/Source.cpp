#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
struct Node {
	char info;
	Node* pNext;
};
struct Stack {
	Node* pHead;
	Node* pTail;
};
Node* CreateNode(char a) {
	Node*p = new Node;
	if (p == NULL)
		exit(1);
	else{
		p->info = a;
		p->pNext = NULL;
	}
	return p;
}
void CreateStack(Stack &s) {
	s.pHead = NULL;
	s.pTail = NULL;
}
void Push(Stack &s, char a) {
	Node* p = CreateNode(a);
	if (s.pHead == NULL) {
		p = s.pHead = s.pTail;
	}
	else {
		p->pNext = s.pHead;
		s.pHead = p;
	}
}
void Pop(Stack &s) {
	if (s.pHead == NULL) {
		cout << "Stack rong\n";
		return;
	}
	else {
		Node* p = s.pHead;
		cout << s.pHead->info;
		s.pHead = p->pNext;
		delete p;
	}

}
int main() {
	Stack s;
	CreateStack(s);
	string str = "EAS*Y**QUE***ST***I*ON";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != '*') {
			Push(s, str[i]);
		}
		else {
			Pop(s);
		}
	}
	system("pause");
	return 0;
}

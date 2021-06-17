#include <iostream>
using namespace std;
struct Node {
	int data;
	Node* Nexxt;
};
struct Stack {
	Node* Head;
	Node*Tail;
};
void CreateStack(Stack &s) {
	s.Head = NULL;
	s.Tail = NULL;
}
Node* CreateNode(int a) {
	Node*p = new Node;
	if (p == NULL)
		exit(1);
	else {
		p->data = a;
		 p->Nexxt=NULL;
	}
}
void Push(Stack &s,int a) {
	Node *p = CreateNode(a);
	if (s.Head == NULL) {
		s.Head = s.Tail = p;
	}
	else {
		p->Nexxt = s.Head;
		s.Head = p;
	}
}
void Pop(Stack &s) {
	if (s.Head == NULL) {
		cout << "stack rong";
		exit(1);
	}
	else {
		Node*p = s.Head;
		cout << s.Head->data;
		s.Head = s.Head->Nexxt;
		delete p;
	}
}
int main() {
	int a;
	Stack s;
	CreateStack(s);
	int n;
	cout << "nhap so luong stack: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		Push(s, a);
		Pop(s);
	}
	system("pause");
	return 0;
}

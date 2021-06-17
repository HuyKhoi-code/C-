#include <iostream> 
using namespace std;

struct Node {
	int Info;
	Node *pLeft;
	Node *pRight;
};
typedef Node* Tree;
void KhoiTaoCay(Tree &t) {
	t = NULL;
}
void AddNode(Tree &t, int x) {
	if (t == NULL) {
		Node *p = new Node;
		p->Info = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else {
		if (t->Info > x)
		{
			AddNode(t->pLeft, x);
		}
		else if (t->Info < x)
		{
			AddNode(t->pRight, x);
		}
	}
}
void Duyet_LNR(Tree t) {
	if (t != NULL) {
		Duyet_LNR(t->pLeft);
		cout << t->Info << " ";
		Duyet_LNR(t->pRight);
	}
}
int Max(Tree t) {
	if (t->pRight == NULL)
	{
		return t->Info;
	}
	return Max(t->pRight);
}
void NodeTheMang(Tree &X, Tree &Y)
{
	if (Y->pRight != NULL)
	{
		NodeTheMang(X, Y->pRight);
	}
	else
	{
		X->Info = Y->Info;
		X = Y;
		Y = Y->pLeft;
	}
}


void DiTimNodeTheMang(Tree &X, Tree &Y)
{

	if (Y->pLeft != NULL)
	{
		DiTimNodeTheMang(X, Y->pLeft);
	}
	else
	{
		X->Info = Y->Info;
		X = Y;
		Y = Y->pRight;
	}
}
void XoaNode(Tree &t, int data)
{

	if (t == NULL)
	{
		return;
	}
	else
	{

		if (data < t->Info)
		{
			XoaNode(t->pLeft, data);
		}
		else if (data > t->Info)
		{
			XoaNode(t->pRight, data);
		}
		else
		{
			Node *X = t;
			if (t->pLeft == NULL)
			{

				t = t->pRight;
			}
			else if (t->pRight == NULL)
			{

				t = t->pLeft;
			}
			else
			{

				DiTimNodeTheMang(X, t->pRight);

			}
			delete X;
		}
	}
}
int main() {
	Tree t;
	KhoiTaoCay(t);
	int n, x;
	cin >> n;
	while (n != -1) {
		if (n == 1) {
			cin >> x;
			AddNode(t, x);
		}
		if (n == 2) {
			int data = Max(t);
			XoaNode(t, data);
		}
		cin >> n;
	}
	Duyet_LNR(t);
	system("pause");
	return 0;
}
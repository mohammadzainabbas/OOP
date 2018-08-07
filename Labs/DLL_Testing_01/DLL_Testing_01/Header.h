#ifndef Tree_h
#define Tree_h

#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	int Data;
	Node* RightPointer;
	Node* LeftPointer;
private:
	
};

class StackNode
{
public:
	Node* TreeNode;
	StackNode* Next;
private:
	
};

class Stack
{
public:
	Stack();
	void Push(Node* temp);
	Node* Pop ();
	bool StackIsEmpty();

private:
		StackNode* HeadPointer;
};

class Tree
{
public:
	Tree();
	void Insert (int num, Node* temp);
	void ImprovedInsert (int var);
	void InOrderTraversion (Node* c);
	void PreOrderTraversion (Node* c);
	void PostOrderTraversion (Node* c);
	void Delete(int a);
	Node* Search (int var);
	Node* SearchParent (int var);
	void InOrderByStack (Node* temp);
	int TotalLeafNodes (Node* a);

private:
	Node* Root;
};

#endif Tree_h
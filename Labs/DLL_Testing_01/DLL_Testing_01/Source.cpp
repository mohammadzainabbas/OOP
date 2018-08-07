#include "Header.h"

void Tree::ImprovedInsert(int var)
	{
		Node* a = new Node;
		a->Data= var;
		a->RightPointer=a->LeftPointer=NULL;

		Node* Temp, *FatherTemp, *GrandFatherTemp, *FatherGrandFatherTemp;
		Temp=FatherTemp=GrandFatherTemp=FatherGrandFatherTemp=Root;

		if (Root == NULL)
		{
			Root=a;
		}
		else
		{
			Temp=Root;

			while (Temp!=NULL)
			{
				FatherGrandFatherTemp=GrandFatherTemp;
				GrandFatherTemp=FatherTemp;
				FatherTemp=Temp;

				if (var>Temp->Data)
				{
					Temp=Temp->RightPointer;
				}
				else
				{
					Temp=Temp->LeftPointer;
				}

			}

		

		if (var>FatherTemp->Data)
		{
			FatherTemp->RightPointer=a;
		}
		else
		{
			FatherTemp->LeftPointer=a;
		}


		//Improved Algorithm Starts


		if (FatherGrandFatherTemp!=GrandFatherTemp && FatherTemp->RightPointer == a && GrandFatherTemp->RightPointer == FatherTemp && GrandFatherTemp->LeftPointer==NULL)
		{
			if (FatherGrandFatherTemp->RightPointer == GrandFatherTemp)
			{
				FatherGrandFatherTemp->RightPointer=FatherTemp;
			}
			else
			{
				FatherGrandFatherTemp->LeftPointer=FatherTemp;
			}

			FatherTemp->LeftPointer=GrandFatherTemp;
			GrandFatherTemp->RightPointer=NULL;

		}
		else if (FatherGrandFatherTemp!=GrandFatherTemp && FatherTemp->LeftPointer == a && GrandFatherTemp->LeftPointer == FatherTemp && GrandFatherTemp->RightPointer==NULL)
		{
			if (FatherGrandFatherTemp->RightPointer == GrandFatherTemp)
			{
				FatherGrandFatherTemp->RightPointer=FatherTemp;
			}
			else
			{
				FatherGrandFatherTemp->LeftPointer=FatherTemp;
			}

			FatherTemp->RightPointer=GrandFatherTemp;
			GrandFatherTemp->LeftPointer=NULL;

		}
		else if (FatherGrandFatherTemp!=GrandFatherTemp && FatherTemp->RightPointer==a && GrandFatherTemp->LeftPointer == FatherTemp && GrandFatherTemp->RightPointer==NULL)
		{
			if (FatherGrandFatherTemp->RightPointer == GrandFatherTemp)
			{
				FatherGrandFatherTemp->RightPointer=a;
			}
			else
			{
				FatherGrandFatherTemp->LeftPointer=a;
			}

			a->LeftPointer=FatherTemp;
			a->RightPointer=GrandFatherTemp;
			GrandFatherTemp->RightPointer=GrandFatherTemp->LeftPointer=FatherTemp->RightPointer=FatherTemp->LeftPointer=NULL;

		}
		else if (FatherGrandFatherTemp!=GrandFatherTemp && FatherTemp->LeftPointer==a && GrandFatherTemp->RightPointer == FatherTemp && GrandFatherTemp->LeftPointer==NULL)
		{
			if (FatherGrandFatherTemp->RightPointer == GrandFatherTemp)
			{
				FatherGrandFatherTemp->RightPointer=a;
			}
			else
			{
				FatherGrandFatherTemp->LeftPointer=a;
			}

			a->RightPointer=FatherTemp;
			a->LeftPointer=GrandFatherTemp;
			GrandFatherTemp->RightPointer=GrandFatherTemp->LeftPointer=FatherTemp->RightPointer=FatherTemp->LeftPointer=NULL;

		}
		else
		{
			return;
		}
		}
	
	}
Tree::Tree()
	{
		Root = NULL;
	}
void Tree::Insert (int num, Node* temp)
	{

		if (Root == NULL)								//If Tree is empty
		{	
			Node* a = new Node;									
			a->Data= num;
			a->RightPointer=a->LeftPointer=NULL;
			Root = a;
			return;
		}

		if ( num < temp->Data)							//If coming data is less than root's data
		{
			if (temp->LeftPointer == NULL)				//Base Case
			{
				Node* a = new Node;									
				a->Data= num;
				a->RightPointer=a->LeftPointer=NULL;
				temp->LeftPointer=a;
				return;
			}
		else if (temp->LeftPointer != NULL)
			{
				temp=temp->LeftPointer;
				Insert(num, temp);
			}
		}
		
		if ( num > temp->Data)							//If coming data is more than root's data
		{
			if (temp->RightPointer == NULL)				//Base Case
			{
				Node* a = new Node;									
				a->Data= num;
				a->RightPointer=a->LeftPointer=NULL;
				temp->RightPointer=a;
				return;
			}
		else if (temp->RightPointer != NULL)
			{
				temp=temp->RightPointer;
				Insert(num, temp);
			}
		}
		 
	}
void Tree::InOrderTraversion (Node* c)								//Ma'am ka code
	{
		if (c!=NULL)
		{
			InOrderTraversion(c->LeftPointer);
			cout<<c->Data<<endl;
			InOrderTraversion(c->RightPointer);
		}
	}
void Tree::PreOrderTraversion (Node* c)								//Ma'am ka code
	{
		if (c!=NULL)
		{
			cout<<c->Data<<endl;
			PreOrderTraversion(c->LeftPointer);
			PreOrderTraversion(c->RightPointer);
		}
	}
void Tree::PostOrderTraversion (Node* c)								//Ma'am ka code
	{
		if (c!=NULL)
		{
			PostOrderTraversion(c->LeftPointer);
			PostOrderTraversion(c->RightPointer);
			cout<<c->Data<<endl;
		}
	}
void Tree::Delete(int a)
	{
		if (Search(a) == NULL)
		{
			cout << "Tree is Empty!" << endl;
		}
		else
		{
			Node*temp = Root;
			Node*s = Search(a);
			Node*p = SearchParent(a);
			if (s->LeftPointer == NULL && s->RightPointer == NULL)
			{
				if (p == NULL)
				{
					delete Root;
					Root = NULL;
				}
				else if (s->Data > p->Data)
				{
					delete p->RightPointer;
					p->RightPointer = NULL;
				}
				else if (s->Data < p->Data)
				{
					delete p->LeftPointer;
					p->LeftPointer = NULL;
				}

			}
			else if ((s->LeftPointer == NULL) || (s->RightPointer == NULL))
			{
				if (s->LeftPointer == NULL)
				{
					p->LeftPointer = s->RightPointer;
					delete s;
				}
				else if (s->RightPointer == NULL)
				{
					p->LeftPointer = s->LeftPointer;
					delete s;
				}
			}
			else if ((s->LeftPointer != NULL) && (s->RightPointer != NULL))
			{
				if (s->LeftPointer->RightPointer == NULL)
				{
					if (s->Data > p->Data)
					{
						p->RightPointer = s->LeftPointer;
						p->RightPointer->RightPointer = s->RightPointer;
						delete s;
					}
					else if (s->Data < p->Data)
					{
						p->LeftPointer = s->LeftPointer;
						p->LeftPointer->RightPointer = s->RightPointer;
						delete s;
					}
				}
				else if (s->LeftPointer->RightPointer != NULL)
				{
					Node*temp = s->LeftPointer->RightPointer;
					while (temp->RightPointer != NULL)
					{
						temp = temp->RightPointer;
					}
					Node* tempfather = SearchParent(temp->Data);
					s->Data = temp->Data;
					tempfather->RightPointer = temp->LeftPointer;
				}
			}
		}
	}
Node* Tree::Search (int var)
	{
		Node* Temp = Root;
	
		while (Temp!=NULL)
		{
			if (Temp->Data==var)
			{
				return Temp;
				break;
			}
			else if (Temp->Data>var)
			{
				Temp=Temp->LeftPointer;
			}
			else if (Temp->Data<var)
			{
				Temp=Temp->RightPointer;
			}
		}
	}
Node* Tree::SearchParent (int var)
	{
		Node* Temp = Root;
		Node* ParentTemp = NULL;
		while (Temp!=NULL)
		{
			
			if (Temp->Data==var)
			{
				return ParentTemp;
				break;
			}
			else if (Temp->Data>var)
			{
				ParentTemp=Temp;
				Temp=Temp->LeftPointer;
			}
			else if (Temp->Data<var)
			{
				ParentTemp=Temp;
				Temp=Temp->RightPointer;
			}
		}
	}
void Tree::InOrderByStack (Node* temp)
	{
		Stack s;

		while (s.StackIsEmpty()!=0 || temp!= NULL)
		{
			if (temp!=NULL)
			{
				s.Push(temp);
					
				temp=temp->LeftPointer;
			}
			else
			{
				temp=s.Pop();
				cout<<temp->Data<<endl;
				temp=temp->RightPointer;
			}
		}
	}
int Tree::TotalLeafNodes (Node* a)
	{
		if (a==NULL)
		{
			return 0;
		}
		else if (a->LeftPointer==NULL && a->RightPointer==NULL)
		{
			return 1;
		}
		else 
		{
			return TotalLeafNodes(a->LeftPointer)+TotalLeafNodes(a->RightPointer);
		}
	}
Stack::Stack()
	{
		HeadPointer=NULL;
	}
void Stack::Push(Node* temp)
	{
		StackNode* a= new StackNode;
		a->TreeNode=temp;
		a->Next=HeadPointer;
		HeadPointer=a;
	}
Node* Stack::Pop ()
	{
		Node* Temp = HeadPointer->TreeNode;

		StackNode* temp = HeadPointer;
		HeadPointer=HeadPointer->Next;
		delete temp;
		temp=NULL;

		return Temp;
	}
bool Stack::StackIsEmpty()
	{
		StackNode* temp = HeadPointer;

		if (temp==NULL)
		{
			return 0;
		}
		else 
		{
			return 1;
		}
	}
#include <iostream>

using namespace std;

//SLL을 class와 object로 구형
//단, Node를 SLL에 붙이는 코드를 Node가 갖도록 한다.
//	  자기 스스로 달라 붙도록 한다.

class Node
{
public:
	int n;
	Node* next;

	Node(int v) : n(v), next(0)
	{
	}

	void addToSLL(Node*& _head)
	{
		if (_head == 0)
		{
			_head = this;
		}
		else
		{
			Node* temp = _head;
			while (temp->next != 0)
			{
				temp = temp->next;
			}
			temp->next = this;
		}
	}

	void showN()
	{
		cout << "n is: " << n << endl;
	}
};

class My_SLL
{
public:
	Node* head;
	Node* last;
	int cnt;

	//Constructor
	My_SLL() : head(0), last(0), cnt(0)
	{
	}

	void addNode(Node* _new_one)
	{
		if (head == 0)
		{
			head = _new_one;
			last = _new_one;
			cnt = 1;
		}
		else
		{
			last->next = _new_one;
			last = _new_one;
			cnt += 1;
		}
	}

	//SLL에 들어있는 모든 node들을 보여주는 함수
	void showAll()
	{
		if (cnt == 0)
		{
			cout << "No Node!!" << endl;
			return;
		}
		Node* temp = head;
		while (temp != 0)
		{
			cout << temp->n << endl;
			temp = temp->next;
		}
	}
};


int main()
{
	Node* a = new Node(777);
	Node* b = new Node(888);

	My_SLL my_sll;

	my_sll.addNode(a);
	my_sll.addNode(b);

	Node* c = new Node(999);
	Node*& r_head = my_sll.head;
	c->addToSLL(r_head);
	my_sll.showAll();

	return 0;
}




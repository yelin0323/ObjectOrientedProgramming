#include <iostream>

using namespace std;

//class ����
//������, constructor :��ü�� ������� �� '�ڵ�����' ����Ǵ� �Լ�
//					   �� �Լ��� Ŭ���� �̸��� ������ �̸��� ���´�. / �̰��� ��ȯ ���� ����
//					   �뵵��? ��ü�� ������� ��, �ʱ�ȭ ���� �����Ѵ�.
class Node
{
public:	
	int n;
	Node* next;

	/*
	Node(int v)
	{
		n = v;
		next = 0;
	}
	�ؿ����� ����
	*/
	
	Node(int v) : n(v), next(0)
	{
	}

	void showN()
	{
		cout << "n is: " << n << endl;
	}
};

Node* head = 0;

int main()
{
	//�����Ҵ�
	Node myobj(777);
	//myobj.n = 777;
	myobj.showN();

	//�����Ҵ�
	Node* p_myobj = new Node(888); //c��� : struct node* temp = malloc(....)�� ����
	p_myobj->showN();
	delete p_myobj; //�޸� ��ȯ

	//--------------------------------------------------------------------------------------

	//Object reference
	Node myobject(77);
	Node& r_myobject = myobject;

	r_myobject.n = 20;
	myobject.showN();

	//Object pointer reference
	Node* p_myobject = new Node(888);
	Node*& rp_myobject = p_myobject;
	rp_myobject->n = 44;
	p_myobject->showN();
	delete p_myobject;


	return 0;
}



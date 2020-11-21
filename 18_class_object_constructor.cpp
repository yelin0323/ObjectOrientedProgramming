#include <iostream>

using namespace std;

//class 선언
//생성자, constructor :객체가 만들어질 때 '자동으로' 수행되는 함수
//					   이 함수는 클래스 이름과 동일한 이름을 갖는다. / 이것은 반환 값이 없다
//					   용도는? 객체가 만들어질 때, 초기화 등을 수행한다.
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
	밑에꺼랑 동일
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
	//정적할당
	Node myobj(777);
	//myobj.n = 777;
	myobj.showN();

	//동적할당
	Node* p_myobj = new Node(888); //c언어 : struct node* temp = malloc(....)과 동일
	p_myobj->showN();
	delete p_myobj; //메모리 반환

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



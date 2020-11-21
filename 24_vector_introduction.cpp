/*
	array of object

	static array: Person p[10]

	array by vector	//vector는 SLL과 비슷

	#include <vector>

	vector<data_type> vname;	//vector선언 / <data_type> : template ex)int, Person....

	vname.push_back()
	vname.front()
	vname.back()
	vname.pop_back()
	vname.empty()	//요소가 있냐없냐

	range based for-loop
	for (auto& k : vname) {...}

	vname.begin()		//vector의 시작 / iterator : vector의 순서도(주소의 순서)
	vname.end()			//vector가 끝난걸 알려주는 node
	for(auto p = vname.begin(); p != vname.end(); p++)
	{	*p ....}
	
	vname.erase(vname.begin()+i)	//i번째 값 삭제 (0번부터 시작)
	vname.insert(vname.begin()+i, value) //지정된 위치의 바로 앞에삽입

	vname.at(i)		// i번째 값
	vname[i]		// i번째 값

	vname.size()	//vector의 크기를 반환
*/

#include <iostream>
#include <vector> 

using namespace std;

class Person
{
public:
	int age;
	Person() :age(0) {};
};

//static array
/*
int main()
{
	Person p[10];

	for (auto& i : p)	//auto : p에 어떤 type이 있어도 알아서해라 / &쓰는 이유는 복사하지않고 그냥 쓰기 위해서(시간 단축)
	{
		cout << "age: " << i.age << endl;
	}

	return 0;
}
*/

//vector
int main()
{
	vector<int> ivector;

	//vector 기본 사용법
	ivector.push_back(10);
	ivector.push_back(20);
	ivector.push_back(30);
	ivector.push_back(40);
	ivector.push_back(50);

	for (auto& i : ivector)
	{
		cout << i << " ";
	}
	cout << endl;
	cout << ivector.empty() << endl;
	cout << "front: " << ivector.front() << endl;
	cout << "back: " << ivector.back() << endl;

	ivector.pop_back();

	cout << "back: " << ivector.back() << endl;

	//응용
	cout << "---------------" << endl;
	for (auto p = ivector.begin(); p != ivector.end(); p++)	//pointer 이용해서 출력
	{
		cout << *p << " ";
	}
	cout << endl;

	ivector.erase(ivector.begin() + 1);	//1번째 값을 삭제
	cout << "earase" << endl;
	for (int i = 0; i < ivector.size(); i++)	//vname.at(i)이용해서 출력
	{
		cout << ivector.at(i) << " ";
	}
	cout << endl;

	ivector.insert(ivector.begin() + 1, 999);	//1번째 값 앞에 999 삽입
	cout << "insert" << endl;
	for (int i = 0; i < ivector.size(); i++)	//배열처럼 사용해서 출력
	{
		cout << ivector[i] << " ";
	}
	cout << endl;

	return 0;
}
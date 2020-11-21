/*
	Standard template library (STL) : C++ 사용자를 위한 라이브러리
	- 컨테이너(vector, stack) 반복자 (iterator), 알고리즘 (sort), functor

	class array
	 - class vector:
		동적으로 크기 조절 가능하지만 속도가 느림	//속도가 중요한 경우에는 배열사용 / 편리한 기능 사용하는 경우 vector 사용

	array
	 - 크기가 결정, 속도가 빨라
	 - 배열과 동일하지만, 여러 가지 함수 제공하여 편의성 높여

	array 정의
	 - array<type, size>
	   std::array<int, 3> a;	//a는 배열 이름
			- local 일 때와 global일 때 초기화가 달라
	   std::array<int, 3> a = {7,8,9};

	array의 첫 번째와 마지막 요소 값
	 - array.front(), array.back()

	array 값을 순차적으로 출력
	 - [ index ] : size() 이용하여 index 결정
	 - at( index )
	 - for : auto
	 - iterator : begin(), end()
	 - reverse_iterator : rbegin(), rend()	//rbegin : 끝에서 첫번 째
	   // rbegin()++ -> 주소가 앞으로! (뒤로 아님)

	class array methods(functions)
	 - size()
	 - fill(value) : value로 모두 채우기
	 - array_1.swap(array_2) :
		+ array_1과 array_2를 바꿔치기
		+ type과 size가 같아야


	++ begin : 맨 앞에 있는 값의 주소 / front : 맨 앞에 있는 값
	   end : 맨 뒤에 있는 값의 다음 주소 / back : 맨 뒤에 있는 값

*/

#include <iostream>
#include <array>

using namespace std;

array<int, 3> _globalArr;	//0으로 초기화

int main()
{
	array<int, 3> _localArr{ 1,2,3 };	// array<int, 3> _localArr; -> 쓰레기 값으로 초기화 
	array<int, 3> _localArr2{ 7,8,9 };

	cout << "---- global 초기화 ----" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << _globalArr[i] << " ";
	}
	cout << endl;

	cout << "---- local 초기화 ----" << endl;
	for (int i = 0; i < _localArr.size(); i++)
	{
		cout << _localArr[i] << " ";
	}
	cout << endl;

	cout << "front: " << _localArr.front() << endl;
	cout << "back: " << _localArr.back() << endl;


	//--------------- 출력 방식 -------------------//
	cout << endl;
	cout << "Tradtional for : " << endl;
	for (int i = 0; i < _localArr.size(); i++)
	{
		cout << _localArr[i] << " ";
	}
	cout << endl;

	cout << "at(): " << endl;
	for (int i = 0; i < _localArr.size(); i++)
	{
		cout << _localArr.at(i) << " ";
	}
	cout << endl;

	cout << "Range-based for: " << endl;
	for (auto& e : _localArr)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << "Iterator for: " << endl;
	for (auto e = _localArr.begin(); e != _localArr.end(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	cout << "Reverse Iterator for: " << endl;
	for (auto e = _localArr.rbegin(); e != _localArr.rend(); e++)
	{
		cout << *e << " ";
	}
	cout << endl;

	//----------class array methods---------//
	cout << endl;
	cout << "---- fill function ----" << endl;
	_localArr2.fill(100);
	for (auto& e : _localArr2)
	{
		cout << e << " ";
	}
	cout << endl;

	cout << "---- swap ----" << endl;
	cout << "befor swap" << endl;
	for (auto& e : _localArr)
	{
		cout << e << " ";
	}
	cout << endl;
	for (auto& e : _localArr2)
	{
		cout << e << " ";
	}
	cout << endl;

	_localArr.swap(_localArr2);

	cout << "after swap" << endl;
	for (auto& e : _localArr)
	{
		cout << e << " ";
	}
	cout << endl;
	for (auto& e : _localArr2)
	{
		cout << e << " ";
	}
	cout << endl;


	return 0;
}
/*
	Standard template library (STL) : C++ ����ڸ� ���� ���̺귯��
	- �����̳�(vector, stack) �ݺ��� (iterator), �˰��� (sort), functor

	class array
	 - class vector:
		�������� ũ�� ���� ���������� �ӵ��� ����	//�ӵ��� �߿��� ��쿡�� �迭��� / ���� ��� ����ϴ� ��� vector ���

	array
	 - ũ�Ⱑ ����, �ӵ��� ����
	 - �迭�� ����������, ���� ���� �Լ� �����Ͽ� ���Ǽ� ����

	array ����
	 - array<type, size>
	   std::array<int, 3> a;	//a�� �迭 �̸�
			- local �� ���� global�� �� �ʱ�ȭ�� �޶�
	   std::array<int, 3> a = {7,8,9};

	array�� ù ��°�� ������ ��� ��
	 - array.front(), array.back()

	array ���� ���������� ���
	 - [ index ] : size() �̿��Ͽ� index ����
	 - at( index )
	 - for : auto
	 - iterator : begin(), end()
	 - reverse_iterator : rbegin(), rend()	//rbegin : ������ ù�� °
	   // rbegin()++ -> �ּҰ� ������! (�ڷ� �ƴ�)

	class array methods(functions)
	 - size()
	 - fill(value) : value�� ��� ä���
	 - array_1.swap(array_2) :
		+ array_1�� array_2�� �ٲ�ġ��
		+ type�� size�� ���ƾ�


	++ begin : �� �տ� �ִ� ���� �ּ� / front : �� �տ� �ִ� ��
	   end : �� �ڿ� �ִ� ���� ���� �ּ� / back : �� �ڿ� �ִ� ��

*/

#include <iostream>
#include <array>

using namespace std;

array<int, 3> _globalArr;	//0���� �ʱ�ȭ

int main()
{
	array<int, 3> _localArr{ 1,2,3 };	// array<int, 3> _localArr; -> ������ ������ �ʱ�ȭ 
	array<int, 3> _localArr2{ 7,8,9 };

	cout << "---- global �ʱ�ȭ ----" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << _globalArr[i] << " ";
	}
	cout << endl;

	cout << "---- local �ʱ�ȭ ----" << endl;
	for (int i = 0; i < _localArr.size(); i++)
	{
		cout << _localArr[i] << " ";
	}
	cout << endl;

	cout << "front: " << _localArr.front() << endl;
	cout << "back: " << _localArr.back() << endl;


	//--------------- ��� ��� -------------------//
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
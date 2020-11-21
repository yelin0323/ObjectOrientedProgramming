#include <iostream>

using namespace std;

/*
	reference for function return type
	 - �Լ��� ��ȯ�����μ��� reference ���

	int func(...);
	int& func(...);
	const int & func(...);
*/

int& func_a(int n)
{
	n = n + 10;
	return n;
}

int& func_b(int& m) //const int& func_b(int& m)���� �ٲٴ� ���� �ٶ���
{
	m = m + 10;
	return m;
}

int main()
{
	int k = 10;

	k = func_a(k);
	int& rk = func_a(k); 
	//�̷� ��� n�� �������� rk�� ����µ� n�� �Լ������ �Բ� ��������� �����Ⱚ�� �ȴ�

	cout << "k: " << k << endl;
	cout << "rk: " << rk << endl;

	func_b(k) = 1000;
	cout << "k: " << k << endl; 
	//func_b(k)�� ����� k�� ����(��������)�̱� ������ k�� 1000������Ǿ� 1000�� ���
	//-> �̷���츦 �����ϱ� ���ؼ� ��ȯ�� �տ� const�� ���δ�!


	return 0;
}
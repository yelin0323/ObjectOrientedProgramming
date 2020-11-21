/*
	vector operators

	- ����
	- ��
	- vector ���� by algorithm sort
	- 2���� ����	// �� �ึ�� ���̰� �ٸ� �迭�� ���� �� �ִ�.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int& a, int& b)
{
	return a < b;	//a<b�̸� ture, �ƴϸ� false�� ��ȯ
}

int main()
{
	vector<int> v1 = { 45, 98, 34, 23, 66 };
	vector<int> v2;

	cout << "------- ���� ------" << endl;
	v2 = v1;	//������ ����

	//v1 ���
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	//v2
	for (auto& e : v2)
	{
		cout << e << " ";
	}
	cout << endl;

	//��
	cout << "------- ��------" << endl;
	if (v1 == v2)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "difference" << endl;
	}

	v2.push_back(999);
	if (v1 == v2)
	{
		cout << "same" << endl;
	}
	else
	{
		cout << "difference" << endl;
	}

	//vector sort
	cout << "------- sort ------" << endl;
	//sorting �� ���
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	sort(v1.begin(), v1.end(), comp);

	//sorting �� ���
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	//2���� �迭
	cout << "------- 2d array ------" << endl;
	
	vector<vector<int>> v3;
	v3.push_back({ 1,2,3 });
	v3.push_back({ 45, 32});
	v3.push_back({ 10, 9, 8, 7 });

	cout << v3[0][2] << endl;
	cout << v3[2][0] << endl;
	v3[2].push_back(999);	//2�� �������� 999 ����
	cout << v3[2][4] << endl;

	return 0;
}
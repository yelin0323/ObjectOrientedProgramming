/*
	vector operators

	- 복사
	- 비교
	- vector 정렬 by algorithm sort
	- 2차원 벡터	// 각 행마다 길이가 다른 배열을 만들 수 있다.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int& a, int& b)
{
	return a < b;	//a<b이면 ture, 아니면 false를 반환
}

int main()
{
	vector<int> v1 = { 45, 98, 34, 23, 66 };
	vector<int> v2;

	cout << "------- 복사 ------" << endl;
	v2 = v1;	//벡터의 복사

	//v1 출력
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

	//비교
	cout << "------- 비교------" << endl;
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
	//sorting 전 출력
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	sort(v1.begin(), v1.end(), comp);

	//sorting 후 출력
	for (auto& e : v1)
	{
		cout << e << " ";
	}
	cout << endl;

	//2차원 배열
	cout << "------- 2d array ------" << endl;
	
	vector<vector<int>> v3;
	v3.push_back({ 1,2,3 });
	v3.push_back({ 45, 32});
	v3.push_back({ 10, 9, 8, 7 });

	cout << v3[0][2] << endl;
	cout << v3[2][0] << endl;
	v3[2].push_back(999);	//2행 마지막에 999 삽입
	cout << v3[2][4] << endl;

	return 0;
}
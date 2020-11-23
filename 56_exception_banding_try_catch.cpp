/*
	예외처리
	 - release 모드에서 예외를 처리
	exception handling

	try - catch
	 //catch(std::exception& e) : 모든 오류를 잡아
	 // catch는 하나가 걸리면 나머지는 안해
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int _idx = 3;
	vector<int> v{ 1,2,3,4 };

	try
	{
		//cout << v.at(_idx) << endl;
		v.resize(v.max_size() + 1);
	}
	catch (std::out_of_range& e)	
	{
		cout << "인덱스 오류" << endl;
		cout << e.what() << endl;
	}
	catch (std::length_error& e)
	{
		cout << "사이즈 조절 오류" << endl;
		cout << e.what() << endl;

	}
	catch (std::exception& e)
	{
		cout << "Exception" << endl;
		cout << e.what() << endl;
	}

	
	cout << "Ended with success" << endl;


	return 0;
}
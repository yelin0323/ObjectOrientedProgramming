/*
	����ó��
	 - release ��忡�� ���ܸ� ó��
	exception handling

	try - catch
	 //catch(std::exception& e) : ��� ������ ���
	 // catch�� �ϳ��� �ɸ��� �������� ����
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
		cout << "�ε��� ����" << endl;
		cout << e.what() << endl;
	}
	catch (std::length_error& e)
	{
		cout << "������ ���� ����" << endl;
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
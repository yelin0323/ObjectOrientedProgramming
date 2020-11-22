/*
	File I/O

	std::ios::app	: append, �ٿ�����, ���������� ������ �̾ ����.
	std::ios::trunc	: overwrite, �����, ���� ������ ������ �� ���� ����

	ifstream
	fstream, std::ios::in
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//std::ifstream f("test_1.txt");
	std::fstream f("test_1.txt",std::ios::in);
	if (!f)
	{
		cout << "Unable to open file" << endl;
		exit(1);
	}

	int num;
	while (f.eof() == false) //eof : end of file
	{
		f >> num;
		cout << num << endl;
	}


	//app, trunc
	//ofstream : output file stream
	/*
		//std::ofstream f("test_1.txt", std::ios::app);	//ofstream�� ����ؼ� output�ϰڴ�.
		std::ofstream f("test_1.txt", std::ios::trunc);


		if (!f)
		{
			cout << "Unable to open file" << endl;
			exit(1);
		}

		for (int i = 100; i < 105; i++)
		{
			f << i << endl;
		}
	*/


	//fstream
	/*
		std::fstream f("test_1.txt", std::ios::out);	//output ���� ����ϰڴ�.

		if (!f)
		{
			cout << "Unable to open file" << endl;
			exit(1);
		}

		for (int i = 0; i < 10; i++)
		{
			f << i << endl;
		}
	*/


	return 0;
}
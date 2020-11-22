/*
	File I/O

	std::ios::app	: append, 붙여쓰기, 기존파일이 있으면 이어서 쓴다.
	std::ios::trunc	: overwrite, 엎어쓰기, 기존 파일이 있으면 그 위에 쓴다

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
		//std::ofstream f("test_1.txt", std::ios::app);	//ofstream을 사용해서 output하겠다.
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
		std::fstream f("test_1.txt", std::ios::out);	//output 모드로 사용하겠다.

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
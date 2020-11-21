#include <iostream>
#include <fstream>

using namespace std;

//textfile 쓰기
/*
	1. test file에 쓰기와 읽기
	2. 헤더 : fstream
	3. 파일 쓰기
	 - ofstream //output file stream
	 - ofstream outFile;	//ofstream이 변수형
	 - outFile.open('test.txt');
	 - outFile.close();
	4.파일 읽기
	 - ifstream //input file stream
	 - ifstream inFile;
	 - inFile.open('test.txt'); <-> inFile.close();
	 - inFile.is_open() : bool //파일을 열수 있었는지없었는지 확인하는 함수
	 - inFile.good() : bool	//아직 파일을 읽을 수 있어?
	 - inFile.eof() : bool // 파일 끝에 도달? end of file
	 - inFile.fail() : bool // 읽기 실패
*/
/*
int main()
{
	ofstream outFile;

	outFile.open("yyy.txt");

	//사람 이름, 나이, 체중
	cout << "Name: ";
	char name[50];
	cin.getline(name, 50);
	outFile << name << endl;

	cout << "Age: ";
	unsigned short age;
	cin >> age;
	outFile << age << endl;

	cout << "Weight: ";
	double weight;
	cin >> weight;
	outFile << weight << endl;

	return 0;
}
*/


//txt에 저장된 형식을 아는 text file 읽기
/*
int main()
{
	ifstream inFile;
	inFile.open("yyy.txt");

	if (inFile.is_open() == false)
	{
		cout << "Unalbe to open the file" << endl;
		return -1;
	}

	char name[50];
	unsigned short age;
	double weight;

	inFile.getline(name, 50);
	inFile >> age;
	inFile >> weight;

	cout << name << "는 " << age << "살이고, " << weight << " kg이다." << endl;



	return 0;
}
*/

//txt에 저장된 형식을 모르는 text file 읽기
int main()
{
	ifstream inFile;
	inFile.open("numbers.txt");

	if (inFile.is_open() == false)
	{
		cout << "Unalbe to open the file" << endl;
		return -1;
	}

	int value;
	int sum(0);

	while (true)
	{
		inFile >> value;
		sum += value;
		if (inFile.good() == false)
		{
			break;
		}
	}

	if (inFile.eof() == true)
	{
		cout << "Sum is: " << sum << endl;
		inFile.close();
		return 0;
	}

	else if (inFile.fail() == true)
	{
		cout << "Failure, file read" << endl;
		inFile.close();
		return -1;
	}

	inFile.close();

	return 0;
}
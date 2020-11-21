#include <iostream>
#include <fstream>

using namespace std;

//textfile ����
/*
	1. test file�� ����� �б�
	2. ��� : fstream
	3. ���� ����
	 - ofstream //output file stream
	 - ofstream outFile;	//ofstream�� ������
	 - outFile.open('test.txt');
	 - outFile.close();
	4.���� �б�
	 - ifstream //input file stream
	 - ifstream inFile;
	 - inFile.open('test.txt'); <-> inFile.close();
	 - inFile.is_open() : bool //������ ���� �־������������� Ȯ���ϴ� �Լ�
	 - inFile.good() : bool	//���� ������ ���� �� �־�?
	 - inFile.eof() : bool // ���� ���� ����? end of file
	 - inFile.fail() : bool // �б� ����
*/
/*
int main()
{
	ofstream outFile;

	outFile.open("yyy.txt");

	//��� �̸�, ����, ü��
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


//txt�� ����� ������ �ƴ� text file �б�
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

	cout << name << "�� " << age << "���̰�, " << weight << " kg�̴�." << endl;



	return 0;
}
*/

//txt�� ����� ������ �𸣴� text file �б�
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
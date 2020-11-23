/*
	text file 
	 - ����� ���� �� �ִ� ����
	 - �ƽ�Ű �ڵ�� ���� ex) 15���� -> 31 35 �����(1�� �ƽ�Ű �ڵ� : 31)
	binary file
	 - ����� ���� �� ���� ����
	 - ������ ����(hexa value, binary value)
	 - little endian (�� ���� �ڸ� ���ڰ� ���ʿ�)
	 
*/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	std::ofstream of("bdata.bin", std::ios::binary);

	int i = 15;

	of.write((char*)& i, sizeof(int));
	of.close();

	std::ifstream input_f("bdata.bin", std::ios::binary);

	int k;
	input_f.read((char*)& k, sizeof(int));

	std::cout << "read from file: " << k << endl;
	return 0;
}
/*
	text file 
	 - 사람이 읽을 수 있는 파일
	 - 아스키 코드로 저장 ex) 15저장 -> 31 35 저장됨(1의 아스키 코드 : 31)
	binary file
	 - 사람이 읽을 수 없는 파일
	 - 값으로 저장(hexa value, binary value)
	 - little endian (더 낮은 자리 숫자가 왼쪽에)
	 
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
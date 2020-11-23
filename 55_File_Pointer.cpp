/*
	move file pointer
	 - file이 어디를 읽고 있는지 가리키는 pointer

	std::ios::beg
	std::ios::end
	std::ios::cur
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	/*
	int data[]{ 10,20,30,40,50 };

	std::ofstream output_f("bdata.bin", std::ios::binary);

	if (output_f.fail() == true)
	{
		exit(1);
	}

	output_f.write((char*)data, sizeof(int) * 5);
	output_f.close();
	*/

	std::ifstream input_f("bdata.bin", std::ios::binary);

	if (input_f.fail() == true)
	{
		exit(1);
	}

	int k;
	//input_f.read((char*)& k, sizeof(int));

	//input_f.seekg(sizeof(int) * 2, std::ios::beg); //30
	//input_f.seekg(sizeof(int) * -3, std::ios::end);	//30
	input_f.seekg(sizeof(int) * 2, std::ios::cur); //cur == beg;

	input_f.read((char*)& k, sizeof(int));
	std::cout << "Value: " << k << endl;

	return 0;
}